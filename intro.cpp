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

using namespace std;

int intro(int argc, char *argv[]);
void restart();

int main(int argc, char *argv[]) {
  int error = argcchecker(argc, argv);
  if (error != 0)
   return 1;  //  exit code for error

  int exitCode;
  do {
    exitCode = intro(argc, argv);
  } while (exitCode);
  return 0;
}
