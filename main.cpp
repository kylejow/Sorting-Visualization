#include <vector>
#include <iostream>
#include "display.h"
#include "selectionsort.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
#define SizeDisplay 50

static vector<vector<char>> Display;

void print(vector<int>* vect){
    auto iter = (*vect).begin();
    while(iter != (*vect).end()){
        cout << *iter << ", ";
        iter++;
    }
    cout << "\n";
}

int main(){
    vector<char> line(SizeDisplay, ' ');
    for(int i = 0; i < SizeDisplay; i++){
        Display.push_back(line);
    }
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
            // vector<int> tosort = {5, 2, 4, 7, 6};
            // print(&tosort);
            // SelectionSort(&tosort);
            // print(&tosort);
            // system("pause");
        }else if(input == "2"){
            system ("cls");
        }else if(input == "3"){
            system ("cls");
        }else if(input == "4"){
            system ("cls");
        }else if(input == "q")
         break;
    }
    system ("cls");
    return 0;
}