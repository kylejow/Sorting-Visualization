/* References
shuffle vector      https://en.cppreference.com/w/cpp/algorithm/random_shuffle
check input stream  https://stackoverflow.com/questions/18728754/checking-cin-input-stream-produces-an-integer
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
#include "display.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include "bubblesort.h"
#include "cputimer.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int GetElements(void);
vector<int> CreateRand(int length);

int main(){
    int num_elements = GetElements();    

    vector<int> tosort = CreateRand(num_elements);
    vector<vector<int>> steps;
    steps.push_back(tosort);

    std::string input;
    cputimer cputimer;

    while(1){
        system("cls");
        cout << "1. Selection Sort\n"
             << "2. Insertion Sort\n"
             << "3. Merge Sort\n"
             << "4. Quick Sort\n"
             << "5. Bubble Sort\n"
             << "6. Choose number of elements\n"
             << "\n\nq to exit" << endl;
        cin >> input;
        system ("cls");
        vector vect = tosort;
        if(input == "1"){
            cputimer.Reset();
            SelectionSort(vect, steps);
        }else if(input == "2"){
            cputimer.Reset();
            InsertionSort(vect, steps);
        }else if(input == "3"){
            cputimer.Reset();
            MergeSort(vect, steps);
        }else if(input == "4"){
            cputimer.Reset();
            QuickSort(vect, steps);
        }else if(input == "5"){
            cputimer.Reset();
            BubbleSort(vect, steps);
        }else if(input == "6"){
            num_elements = GetElements();
            tosort.clear();
            steps.clear();
            tosort = CreateRand(num_elements);
            steps.push_back(tosort);
            continue;
        }else if(input == "q")
            break;
        else{
            continue;
        }
        cputimer.Stop();
        PrintSteps(steps);
        steps.clear();
        cout << "Sorting completed in " << cputimer.Elapsed() << " milliseconds.\n" << endl;
        system("pause");
    }
    system ("cls");
    return 0;
}

int GetElements(void){
    int num_elements;
    system("cls");
    cout << "Number of elements: ";
    cin >> num_elements;
    while(cin.fail()){
        system("cls");
        cout << "Number of elements: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> num_elements;
    }
    return num_elements;
}

vector<int> CreateRand(int length){
    vector<int> tosort(length);
    std::iota(tosort.begin(), tosort.end(), 0);
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(tosort.begin(), tosort.end(), g);
    return tosort;
}