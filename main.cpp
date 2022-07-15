/* References
shuffle vector      https://en.cppreference.com/w/cpp/algorithm/random_shuffle
check input stream  https://stackoverflow.com/questions/18728754/checking-cin-input-stream-produces-an-integer
*/

#include <vector>
#include <iostream>
#include "display.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include <algorithm>
#include <random>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main(){
    int num_elements;
    system("cls");
    cout << "Number of elements: " << endl;
    cin >> num_elements;
    while(cin.fail()){
        system("cls");
        cout << "Number of elements: " << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> num_elements;
    }

    vector<int> tosort(num_elements);
    std::iota(tosort.begin(), tosort.end(), 0);

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(tosort.begin(), tosort.end(), g);

    vector<vector<int>> steps;
    steps.push_back(tosort);

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
            vector vect = tosort;
            SelectionSort(vect, steps);
            PrintSteps(steps);
            steps.clear();
            system("pause");
        }else if(input == "2"){
            system ("cls");
            vector vect = tosort;
            InsertionSort(vect, steps);
            PrintSteps(steps);
            steps.clear();
            system("pause");
        }else if(input == "3"){
            system ("cls");
            //MergeSort(vect, steps);
            system("pause");
        }else if(input == "4"){
            system ("cls");
            //QuickSort(vect, steps);
            system("pause");
        }else if(input == "q")
            break;
    }
    system ("cls");
    return 0;
}