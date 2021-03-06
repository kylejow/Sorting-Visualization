// Insertion Sort
// 
// Author: Rob Gysel
// ECS60, UC Davis
// Adapted from: Lysecky & Vahid "Data Structures Essentials", zyBooks

#include "insertionsort.h"

void InsertionSort(std::vector<int>& numbers, std::vector<std::vector<int>>& steps) {
   int i = 0;
   int j = 0;
   int temp = 0;  // Temporary variable for swap
   
   for (i = 1; i < (int)numbers.size(); ++i) {
      j = i;
      // Insert numbers[i] into sorted part
      // stopping once numbers[i] in correct position
      
      while (j > 0 && numbers[j] < numbers[j - 1]) { // increment counts right before comparison is made
         // Swap numbers[j] and numbers[j - 1]
         temp = numbers[j];
         numbers[j] = numbers[j - 1];
         numbers[j - 1] = temp;
         --j;
      }
      steps.push_back(numbers);
   }
   
   return;
}