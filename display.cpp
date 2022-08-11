//References
//clear screen    https://cplusplus.com/forum/beginner/18191/

#include "display.h"

// pass by value to retain blank display
vector<vector<char>> GetDisplay(vector<vector<char>> Display, vector<int>& step){
    for(long long unsigned int i = 0; i < step.size(); i++){
        int k = step.size()-1-i;
        for(int j = 0; j < step[i]; j++){
            Display[i+k][i] = '*';
            k--;
        }
    }
    return Display;
}

void PrintDisplay(vector<vector<char>>& Display){
    int length = Display[1].size();
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            std::cout << Display[i][j] << ' ';
        }
        std::cout << "\n";
    }
}

void Printvect(vector<int>& vect){
    auto iter = vect.begin();
    while(iter != vect.end()){
        std::cout << *iter << ", ";
        iter++;
    }
    std::cout << "\n";
}

void PrintSteps(vector<vector<int>>& steps){
    vector<vector<char>> Display(steps[0].size(), vector<char>(steps[0].size(), ' '));
    auto iter = steps.begin();
    vector<vector<vector<char>>> Displays;
    while(iter != steps.end()){
        Displays.push_back(GetDisplay(Display, *iter));
        iter++;
    }

    auto iter2 = Displays.begin();
    while(iter2 != Displays.end()){
        ClearScreen();
        PrintDisplay(*iter2);
        Sleep(100);
        iter2++;
    }
}

void ClearScreen(){
    HANDLE hOut;
    COORD Position;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void setCursor(bool visible){
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = visible;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}