#include <vector>
#include <iostream>
#include "display.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "mergesort.h"
#include "quicksort.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
#define SizeDisplay 5

int main(){
    vector<int> randarray = {4, 2, 3, 0, 1};
    vector<vector<int>> steps;
    steps.push_back(randarray);
    std::string input;
    while(1){
        system("cls");
        cout << "1. Selection Sort\n"
             << "2. Insertion Sort\n"
             << "3. Merge Sort\n"
             << "4. Quick Sort\n"
             << "\n\nq to exit" << endl;
        cin >> input;
        if(input == "1"){
            system ("cls");
            auto tosort = randarray;
            SelectionSort(tosort, steps);
            PrintSteps(steps);
            steps.clear();
            system("pause");
        }else if(input == "2"){
            system ("cls");
            //InsertionSort(tosort, steps);
            system("pause");
        }else if(input == "3"){
            system ("cls");
            //MergeSort(tosort, steps);
            system("pause");
        }else if(input == "4"){
            system ("cls");
            //QuickSort(tosort, steps);
            system("pause");
        }else if(input == "q")
            break;
    }
    system ("cls");
    return 0;
}