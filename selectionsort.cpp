#include "selectionsort.h"
#include "display.h"

void SelectionSort(std::vector<int>& numbers, std::vector<std::vector<int>>& steps){
    int length = numbers.size();
    for(int i = 0; i < length-1; i++){
        int min = i;
        for(int j = i+1; j < length; j++){
            if(numbers[j] < numbers[min]){
                min = j;
            }
        }
        int temp = numbers[min];
        numbers[min] = numbers[i];
        numbers[i] = temp;
        steps.push_back(numbers);
    }
}