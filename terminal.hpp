/***********************************************************************
* ** Program Filename: terminal.hpp
* ** Author: Anthony Kung (AnthonyKung.com)
* ** Date: 14 April 2019
* ** Description: Key logger
* **              Have an awesome day!
* ** Input: User input, numbers/strings, text files
* ** Output: Numbers/strings
* *********************************************************************/

#ifndef TERMINAL_HPP
#define TERMINAL_HPP

#include <iostream>  // cout and cin
#include <string>  // string
#include <cstring>  // cstring
#include <cmath>  // pow() and math stuff
#include <stdlib.h>  // rand() and srand()
#include <time.h>  // time()
#include <climits> // long max
#include <fstream>
#include <curses.h>
#include "resources.hpp"  // wait(), kill(), clearstd()...

using namespace std;

string get1char();
string get2char();

#endif