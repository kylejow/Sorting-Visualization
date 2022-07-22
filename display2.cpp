#include "display2.h"

// pass by value to retain blank display
std::vector<std::vector<char>> PrintDisplay(std::vector<std::vector<char>> Display, std::vector<int>& vect){
    for(long long unsigned int i = 0; i < vect.size(); i++){
        int k = vect.size()-1-i;
        //cout << i << endl;
        for(int j = 0; j < vect[i]; j++){
            Display[i+k][i] = '*';
            k--;
        }
    }
    return Display;

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
    std::vector<std::vector<std::vector<char>>> asdad;
    while(iter != steps.end()){
        asdad.push_back(PrintDisplay(Display, *iter));
        iter++;
    }

    auto iter2 = asdad.begin();
    while(iter2 != asdad.end()){
        system("cls");
        for(long long unsigned int i = 0; i < asdad[1][1].size(); i++){
            for(long long unsigned int j = 0; j < asdad[1][1].size(); j++){
                std::cout << (*iter2)[i][j] << ' ';
            }
            std::cout << "\n";
        }
        Sleep(100);
        iter2++;
    }
}