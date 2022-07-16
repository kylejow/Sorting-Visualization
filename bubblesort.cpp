// Adapted from: https://www.geeksforgeeks.org/bubble-sort/

#include "bubblesort.h"

void BubbleSort(std::vector<int>& numbers, std::vector<std::vector<int>>& steps){
    int n = numbers.size();
    bool swapped;
    for(int i = 0; i < n-1; i++){
        swapped = false;
        for(int j = 0; j < n-i-1; j++) {
            if(numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                swapped = true;
            }
        }
        steps.push_back(numbers);
        if(swapped == false){
            break;
        }
    }       
}