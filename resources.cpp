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
#include "terminal.hpp"  // header file

/*********************************************************************
** Function: wait()
** Description: Pause the program for x miliseconds
** Parameters: int
** Pre-Conditions: None
** Post-Conditions: Pause program for x miliseconds
***********************************************************************/
int wait(unsigned long milisec) {
  struct timespec req = { 0 };
  time_t sec = (int)(milisec / 1000);
  milisec = milisec - (sec * 1000);
  req.tv_sec = sec;
  req.tv_nsec = milisec * 1000000L;
  while (nanosleep(&req, &req) == -1)
    continue;
  return 1;
}

void clrstd() {
  for (int i = 0; i < 50; i++) {
    cout << "\n" << endl;
  }
}

void br() {
  cout << "\n";
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

string Color::ori() {
  return this->vori;
}

string Color::red() {
  return this->vred;
}

string Color::green() {
  return this->vgreen;
}

string Color::yellow() {
  return this->vyellow;
}

string Color::blue() {
  return this->vblue;
}

string Color::pink() {
  return this->vpink;
}

string Color::cyan() {
  return this->vcyan;
}

/*********************************************************************
** Function: bye()
** Description: Show bye text
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: None
***********************************************************************/
void bye() {
  cout << " " << endl;
  cout << "\t\033[96m██████╗ ██╗   ██╗███████╗\033[0m" << endl;
  cout << "\t\033[96m██╔══██╗╚██╗ ██╔╝██╔════╝\033[0m" << endl;
  cout << "\t\033[96m██████╔╝ ╚████╔╝ █████╗\033[0m" << endl;
  cout << "\t\033[96m██╔══██╗  ╚██╔╝  ██╔══╝\033[0m" << endl;
  cout << "\t\033[96m██████╔╝   ██║   ███████╗\033[0m" << endl;
  cout << "\t\033[96m╚═════╝    ╚═╝   ╚══════╝\033[0m" << endl;
  cout << " " << endl;
}

/*********************************************************************
** Function: terror()
** Description: Display text
** Parameters: None
** Pre-Conditions: None
** Post-Conditions: None
***********************************************************************/
void terror() {
  cout << " " << endl;
  cout << "\t\033[91m███████╗██████╗ ██████╗  ██████╗ ██████╗ ██╗\033[0m" << endl;
  cout << "\t\033[91m██╔════╝██╔══██╗██╔══██╗██╔═══██╗██╔══██╗██║\033[0m" << endl;
  cout << "\t\033[91m█████╗  ██████╔╝██████╔╝██║   ██║██████╔╝██║\033[0m" << endl;
  cout << "\t\033[91m██╔══╝  ██╔══██╗██╔══██╗██║   ██║██╔══██╗╚═╝\033[0m" << endl;
  cout << "\t\033[91m███████╗██║  ██║██║  ██║╚██████╔╝██║  ██║██╗\033[0m" << endl;
  cout << "\t\033[91m╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝\033[0m" << endl;
  cout << " " << endl;
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

void star() {
  cout << "\t▄ ██╗▄" << endl;
  cout << "\t ████╗" << endl;
  cout << "\t▀╚██╔▀" << endl;
  cout << "\t  ╚═╝ " << endl;
}

void star2() {
  cout << "\t▄ ██╗▄                                              ▄ ██╗▄" << endl;
  cout << "\t ████╗                                               ████╗" << endl;
  cout << "\t▀╚██╔▀                                              ▀╚██╔▀" << endl;
  cout << "\t  ╚═╝                                                 ╚═╝ " << endl;
}