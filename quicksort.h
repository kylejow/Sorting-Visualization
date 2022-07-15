// Quicksort
// 
// Author: Rob Gysel
// ECS60, UC Davis
// Adapted from: Lysecky & Vahid "Data Structures Essentials", zyBooks

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

void QuickSort(std::vector<int>& numbers, std::vector<std::vector<int>>& steps);
void QuickSortRecurse(std::vector<int>& numbers, int i, int k, std::vector<std::vector<int>>& steps);
int Partition(std::vector<int>& numbers, int i, int k);

#endif