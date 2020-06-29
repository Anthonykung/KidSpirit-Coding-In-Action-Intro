CC = g++ -std=c++11
IAEXE = kidspirit -lncurses 

# Handle debug case
DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS := -g -Wall
else
	CFLAGS := -DNDEBUG -O3
endif

SRCDIR = .
SRCEXT = cpp
SOURCES = $(shell find $(SRCDIR) -type f -name "*.$(SRCEXT)")
OBJECTS = $(SOURCES:.cpp=.o)
DEP = $(OBJECTS:.o=.d)

$(IAEXE): $(OBJECTS)
	$(CC) $^ -o $(IAEXE)

-include $(DEP)

%.d: %.$(SRCEXT)
	@$(CC) $(CFLAGS) $< -MM -MT $(@:.d=.o) >$@

%.o: %.$(SRCEXT)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.out *.o *.d $(IAEXE)

.PHONY: clean
