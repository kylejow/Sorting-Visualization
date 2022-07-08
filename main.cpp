#include <vector>
#include <iostream>

using std::cout;
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
    return 0;
}