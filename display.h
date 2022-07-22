//References
//clear screen    https://cplusplus.com/forum/beginner/18191/

#ifndef DISPLAY_H
#define DISPLAY_H

#include <vector>
#include <iostream>
#include <windows.h>

using std::vector;

vector<vector<char>> GetDisplay(vector<vector<char>> Display, vector<int>& step);
void PrintDisplay(vector<vector<char>>& Display);
void Printvect(vector<int>& vect);
void PrintSteps(vector<vector<int>>& steps);
void ClearScreen();

#endif