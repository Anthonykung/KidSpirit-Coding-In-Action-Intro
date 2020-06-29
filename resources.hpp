#ifndef RESOURCES_HPP
#define RESOURCES_HPP

#include <iostream>  // cout and cin
#include <string>  // string
#include <cstring>  // cstring
#include <cmath>  // pow() and math stuff
#include <stdlib.h>  // rand() and srand()
#include <time.h>  // time()
#include <climits> // long max
#include <termios.h>
#include <fstream>
#include "terminal.hpp"  // header file

using namespace std;

int wait(unsigned long milisec);
void clrstd();
void br();
void ori();
void red();
void green();
void yellow();
void blue();
void pink();
void cyan();
void orange();
void bye();
void terror();
void star();
void star2();

class Color {
  private:
  string vori = "\033[0m";
  string vred = "\033[91m";
  string vgreen = "\033[92m";
  string vyellow = "\033[93m";
  string vblue = "\033[94m";
  string vpink = "\033[95m";
  string vcyan = "\033[96m";

  public:
  string ori();
  string red();
  string green();
  string yellow();
  string blue();
  string pink();
  string cyan();
};

class Letter {
public:
  void a();
  void b();
  void c();
  void d();
  void e();
  void f();
  void g();
  void h();
  void i();
  void j();
  void k();
  void l();
  void m();
  void n();
  void o();
  void p();
  void q();
  void r();
  void s();
  void t();
  void u();
  void v();
  void w();
  void x();
  void y();
  void z();
};

void kidspirit1();
void kidspirit2();
void kidspirit3();
void kidspirit4();
void kidspirit5();
void kidspirit6();
void kidspirit7();
void kidspirit8();
void kidspirit9();
void summer();
void twentytwenty();

#endif