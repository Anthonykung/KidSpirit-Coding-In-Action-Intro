/***********************************************************************
* ** Program Filename: resources.cpp
* ** Author: Anthony Kung (Anthony.lol)
* ** Date: 25 June 2020
* ** Description: Standard helper program
* **              Type res -help for more info
* **              Have an awesome day!
* ** Input: User input, numbers/strings, text files
* ** Output: Numbers/strings
* *********************************************************************/

#include "resources.hpp"

void wait(int sec) {
  struct timespec req, rem;
  req.tv_sec = sec;
  nanosleep(&req, &rem);
}

void clrstd() {
  for (int i = 0; i < 50; i++) {
    cout << "\n" << endl;
  }
}

void clearstd() {
  for (int i = 0; i < 50; i++) {
    cout << "\n" << endl;
  }
}

void br() {
  cout << "\n";
}

int man() {

}

/*********************************************************************
** Function: argcchecker(int argc, char *argv[])
** Description: Check argument counts
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: None
***********************************************************************/
int argcchecker(int argc, char *argv[]) {
  int error = 0;
  if (argc != 2) {
    man();
    return 1;  //  exit code for error
  }
  else {
    clearstd();
    if (argc == 2)
      error = argvchecker(argc, argv);
    return error;
  }
}

/*********************************************************************
** Function: argvchecker(int argc, char *argv[])
** Description: Check argument value received
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: None
***********************************************************************/
int argvchecker(int argc, char *argv[]) {
  for (int i = 1; i < argc; i += 2) {
    if (strcmp(argv[i], "-start") == 0) {
      cout << "\033[92mSynopsis OK\033[0m" << endl;
    }
    else if (strcmp(argv[i], "-help") == 0) {
      help();
      return 1;
    }
    else {
      man();
      return 1;
    }
  }
  return 0;
}

void ori() {
  cout << "\033[0m";
}

void red() {
  cout << "\033[91m";
}

void green() {
  cout << "\033[92m";
}

void yellow() {
  cout << "\033[93m";
}

void blue() {
  cout << "\033[94m";
}

void pink() {
  cout << "\033[95m";
}

void cyan() {
  cout << "\033[96m";
}

void orange() {
  cout << "\033[38;2;246;144;65m";
}

void kidspirit1() {
  cout << "\t██╗  ██╗" << endl;
  cout << "\t██║ ██╔╝" << endl;
  cout << "\t█████╔╝ " << endl;
  cout << "\t██╔═██╗ " << endl;
  cout << "\t██║  ██╗" << endl;
  cout << "\t╚═╝  ╚═╝" << endl;
}

void kidspirit2() {
  cout << "\t██╗  ██╗██╗" << endl;
  cout << "\t██║ ██╔╝██║" << endl;
  cout << "\t█████╔╝ ██║" << endl;
  cout << "\t██╔═██╗ ██║" << endl;
  cout << "\t██║  ██╗██║" << endl;
  cout << "\t╚═╝  ╚═╝╚═╝" << endl;
}

void kidspirit3() {
  cout << "\t██╗  ██╗██╗██████╗ " << endl;
  cout << "\t██║ ██╔╝██║██╔══██╗" << endl;
  cout << "\t█████╔╝ ██║██║  ██║" << endl;
  cout << "\t██╔═██╗ ██║██║  ██║" << endl;
  cout << "\t██║  ██╗██║██████╔╝" << endl;
  cout << "\t╚═╝  ╚═╝╚═╝╚═════╝ " << endl;
}

void kidspirit4() {
  cout << "\t██╗  ██╗██╗██████╗ ███████╗" << endl;
  cout << "\t██║ ██╔╝██║██╔══██╗██╔════╝" << endl;
  cout << "\t█████╔╝ ██║██║  ██║███████╗" << endl;
  cout << "\t██╔═██╗ ██║██║  ██║╚════██║" << endl;
  cout << "\t██║  ██╗██║██████╔╝███████║" << endl;
  cout << "\t╚═╝  ╚═╝╚═╝╚═════╝ ╚══════╝" << endl;
}

void kidspirit5() {
  cout << "\t██╗  ██╗██╗██████╗ ███████╗██████╗ " << endl;
  cout << "\t██║ ██╔╝██║██╔══██╗██╔════╝██╔══██╗" << endl;
  cout << "\t█████╔╝ ██║██║  ██║███████╗██████╔╝" << endl;
  cout << "\t██╔═██╗ ██║██║  ██║╚════██║██╔═══╝ " << endl;
  cout << "\t██║  ██╗██║██████╔╝███████║██║     " << endl;
  cout << "\t╚═╝  ╚═╝╚═╝╚═════╝ ╚══════╝╚═╝     " << endl;
}

void kidspirit6() {
  cout << "\t██╗  ██╗██╗██████╗ ███████╗██████╗ ██╗" << endl;
  cout << "\t██║ ██╔╝██║██╔══██╗██╔════╝██╔══██╗██║" << endl;
  cout << "\t█████╔╝ ██║██║  ██║███████╗██████╔╝██║" << endl;
  cout << "\t██╔═██╗ ██║██║  ██║╚════██║██╔═══╝ ██║" << endl;
  cout << "\t██║  ██╗██║██████╔╝███████║██║     ██║" << endl;
  cout << "\t╚═╝  ╚═╝╚═╝╚═════╝ ╚══════╝╚═╝     ╚═╝" << endl;
}

void kidspirit7() {
  cout << "\t██╗  ██╗██╗██████╗ ███████╗██████╗ ██╗██████╗ " << endl;
  cout << "\t██║ ██╔╝██║██╔══██╗██╔════╝██╔══██╗██║██╔══██╗" << endl;
  cout << "\t█████╔╝ ██║██║  ██║███████╗██████╔╝██║██████╔╝" << endl;
  cout << "\t██╔═██╗ ██║██║  ██║╚════██║██╔═══╝ ██║██╔══██╗" << endl;
  cout << "\t██║  ██╗██║██████╔╝███████║██║     ██║██║  ██║" << endl;
  cout << "\t╚═╝  ╚═╝╚═╝╚═════╝ ╚══════╝╚═╝     ╚═╝╚═╝  ╚═╝" << endl;
}

void kidspirit8() {
  cout << "\t██╗  ██╗██╗██████╗ ███████╗██████╗ ██╗██████╗ ██╗" << endl;
  cout << "\t██║ ██╔╝██║██╔══██╗██╔════╝██╔══██╗██║██╔══██╗██║" << endl;
  cout << "\t█████╔╝ ██║██║  ██║███████╗██████╔╝██║██████╔╝██║" << endl;
  cout << "\t██╔═██╗ ██║██║  ██║╚════██║██╔═══╝ ██║██╔══██╗██║" << endl;
  cout << "\t██║  ██╗██║██████╔╝███████║██║     ██║██║  ██║██║" << endl;
  cout << "\t╚═╝  ╚═╝╚═╝╚═════╝ ╚══════╝╚═╝     ╚═╝╚═╝  ╚═╝╚═╝" << endl;
}

void kidspirit9() {
  cout << "\t██╗  ██╗██╗██████╗ ███████╗██████╗ ██╗██████╗ ██╗████████╗" << endl;
  cout << "\t██║ ██╔╝██║██╔══██╗██╔════╝██╔══██╗██║██╔══██╗██║╚══██╔══╝" << endl;
  cout << "\t█████╔╝ ██║██║  ██║███████╗██████╔╝██║██████╔╝██║   ██║   " << endl;
  cout << "\t██╔═██╗ ██║██║  ██║╚════██║██╔═══╝ ██║██╔══██╗██║   ██║   " << endl;
  cout << "\t██║  ██╗██║██████╔╝███████║██║     ██║██║  ██║██║   ██║   " << endl;
  cout << "\t╚═╝  ╚═╝╚═╝╚═════╝ ╚══════╝╚═╝     ╚═╝╚═╝  ╚═╝╚═╝   ╚═╝   " << endl;
}

void summer() {
  cout << "\t ███████╗██╗   ██╗███╗   ███╗███╗   ███╗███████╗██████╗ " << endl;
  cout << "\t ██╔════╝██║   ██║████╗ ████║████╗ ████║██╔════╝██╔══██╗" << endl;
  cout << "\t ███████╗██║   ██║██╔████╔██║██╔████╔██║█████╗  ██████╔╝" << endl;
  cout << "\t ╚════██║██║   ██║██║╚██╔╝██║██║╚██╔╝██║██╔══╝  ██╔══██╗" << endl;
  cout << "\t ███████║╚██████╔╝██║ ╚═╝ ██║██║ ╚═╝ ██║███████╗██║  ██║" << endl;
  cout << "\t ╚══════╝ ╚═════╝ ╚═╝     ╚═╝╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝" << endl;
}

void twentytwenty() {
  cout << "\t           ██████╗  ██████╗ ██████╗  ██████╗ " << endl;
  cout << "\t           ╚════██╗██╔═████╗╚════██╗██╔═████╗" << endl;
  cout << "\t            █████╔╝██║██╔██║ █████╔╝██║██╔██║" << endl;
  cout << "\t           ██╔═══╝ ████╔╝██║██╔═══╝ ████╔╝██║" << endl;
  cout << "\t           ███████╗╚██████╔╝███████╗╚██████╔╝" << endl;
  cout << "\t           ╚══════╝ ╚═════╝ ╚══════╝ ╚═════╝ " << endl;
}
