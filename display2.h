#ifndef DISPLAY_H
#define DISPLAY_H

#include <vector>
#include <iostream>
#include <windows.h>

std::vector<std::vector<char>> PrintDisplay(std::vector<std::vector<char>> Display, std::vector<int>& vect);
void Printvect(std::vector<int>& vect);
void PrintSteps(std::vector<std::vector<int>>& steps);

#endif