#include "display.h"

// pass by value to retain blank display
void PrintDisplay(std::vector<std::vector<char>> Display, std::vector<int>& vect){
    for(long long unsigned int i = 0; i < vect.size(); i++){
        int k = vect.size()-1-i;
        //cout << i << endl;
        for(int j = 0; j < vect[i]; j++){
            Display[i+k][i] = '*';
            k--;
        }
    }

    for(long long unsigned int i = 0; i < Display[1].size(); i++){
        for(long long unsigned int j = 0; j < Display[1].size(); j++){
            std::cout << Display[i][j] << ' ';
        }
        std::cout << "\n";
    }
}

void Printvect(std::vector<int>& vect){
    auto iter = vect.begin();
    while(iter != vect.end()){
        std::cout << *iter << ", ";
        iter++;
    }
    std::cout << "\n";
}

void PrintSteps(std::vector<std::vector<int>>& steps){
    std::vector<std::vector<char>> Display(steps[0].size(), std::vector<char>(steps[0].size(), ' '));
    auto iter = steps.begin();
    while(iter != steps.end()){
        system("cls");
        PrintDisplay(Display, *iter);
        Sleep(100);
        iter++;
    }
    std::cout << '\n';
}