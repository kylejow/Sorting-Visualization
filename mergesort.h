// Merge Sort
// 
// Author: Rob Gysel
// ECS60, UC Davis
// Adapted from: Lysecky & Vahid "Data Structures Essentials", zyBooks

#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

void MergeSort(std::vector<int>& numbers, std::vector<std::vector<int>>& steps);
void MergeSortRecurse(std::vector<int>& numbers, int i, int k, std::vector<std::vector<int>>& steps);
void Merge(std::vector<int>& numbers, int i, int j, int k, std::vector<std::vector<int>>& steps);

#endif