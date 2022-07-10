#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
#define SizeDisplay 50

static vector<vector<char>> Display;

void printDisplay(vector<vector<char>>& Display){
    for(int i = 0; i < SizeDisplay; i++){
        for(int j = 0; j < SizeDisplay; j++){
            cout << Display[i][j] << ' ';
        }
        cout << "\n";
    }
}

int main(){
    vector<char> line(SizeDisplay, ' ');
    for(int i = 0; i < SizeDisplay; i++){
        Display.push_back(line);
    }
    printDisplay(Display);

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