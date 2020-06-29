/***********************************************************************
* ** Program Filename: intro.cpp
* ** Author: Anthony Kung (Anthony.lol)
* ** Date: 25 June 2020
* ** Description: KidSpirit Intro Animation C++
* **              Type ia -help for more info
* **              Have an awesome day!
* ** Input: User input, numbers/strings, text files
* ** Output: Numbers/strings
* *********************************************************************/

#include <iostream>  // cout and cin
#include <string>  // string
#include <cstring>  // cstring
#include <cmath>  // pow() and math stuff
#include <stdlib.h>  // rand() and srand()
#include <time.h>  // time()
#include <climits> // long max
#include <fstream>
#include "resources.hpp"  // helper program
#include "terminal.hpp"  // header file

using namespace std;

int help();
int intro();
int start();
int kidspiritAnimation();

int main() {
  int exitCode;
  clrstd();
  exitCode = help();
  return exitCode;
}

int help() {
  Color color;
  int exitCode = 0;
  orange();
  kidspirit9();
  br();
  br();
  cout << "\tWelcome to KidSpirit Coding In Action Introduction" << endl;
  cout << color.red() << "\tTHIS IS AN INSTRUCTION MANUAL FOR INSTRUCTORS" << endl;
  br();
  br();
  cout << color.yellow() << "\tTo skip instruction manual, hit [S]" << endl;
  cout << "\tTo continue, hit [SPACE]" << endl;
  string input = get1char();
  if (input == "s" || input == "S")
    exitCode = start();
  else if (input == " ")
    exitCode = intro();
  return exitCode;
}

int intro() {
  int exitCode = 0;
  string input = "";
  while (input != " ") {
    clrstd();
    exitCode = kidspiritAnimation();
  }
  return exitCode;
}

int kidspiritAnimation() {
  clrstd();
  orange();
  star2();
  br();
  kidspirit1();
  wait(1000);
  clrstd();
  kidspirit2();
  wait(1000);
  clrstd();
  kidspirit3();
  wait(1000);
  clrstd();
  kidspirit4();
  wait(1000);
  clrstd();
  kidspirit5();
  wait(1000);
  clrstd();
  kidspirit6();
  wait(1000);
  clrstd();
  kidspirit7();
  wait(1000);
  clrstd();
  kidspirit8();
  wait(1000);
  clrstd();
  kidspirit9();
  wait(3000);
  return 0;
}

int start() {
  int exitCode = 0;
  clrstd();
  return exitCode;
}