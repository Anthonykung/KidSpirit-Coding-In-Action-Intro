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
#include "resources.h"  // helper program

using namespace std;

int main(int argc, char *argv[]) {
  int error = argcchecker(argc, argv);
  if (error != 0)
   return 1;  //  exit code for error

  int srestart;
  do {
    intro(argc, argv);
    srestart = restart();
  } while (srestart);
  return 0;
}
