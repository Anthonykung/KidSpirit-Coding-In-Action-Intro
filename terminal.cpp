 /***********************************************************************
* ** Program Filename: terminal.cpp
* ** Author: Anthony Kung (Anthony.lol)
* ** Date: 14 April 2019
* ** Description: Key logger
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
#include <fstream>  // file stream
#include <ncurses.h>
#include "resources.hpp"  // wait(), kill(), clearstd()...
#include "terminal.hpp"  // header file

using namespace std;

/*********************************************************************
** Function: string getchar()
** Description: Get single char from input
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: None
***********************************************************************/
string get1char() {
  initscr();
  cbreak();
  string str = "";
  char temp;
  int first;
  first = getchar();
  temp = first;
  str += temp;
  endwin();
  return str;
}

/*********************************************************************
** Function: string getchar()
** Description: Get single char from input
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: None
***********************************************************************/
string get2char() {
  initscr();
  cbreak();
  //noecho();
  string str = "";
  char temp;
  int first, second;
  first = getchar();
  //cout << first << endl;
  //wait(3000);
  if (first != 32) {
    temp = first;
    //cout << temp << endl;
    str += temp;
  }
  else {
    second = getchar();
    temp = first;
    str += temp;
    temp = second;
    str += temp;
  }
  endwin();
  return str;
}

