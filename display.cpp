#include "display.h"

void printDisplay(std::vector<std::vector<char>>& Display){
    for(long long unsigned int i = 0; i < Display[1].size(); i++){
        for(long long unsigned int j = 0; j < Display[1].size(); j++){
            std::cout << Display[i][j] << ' ';
        }
        std::cout << "\n";
    }
}

void printvect(std::vector<int>* vect){
    auto iter = (*vect).begin();
    while(iter != (*vect).end()){
        std::cout << *iter << ", ";
        iter++;
    }
    std::cout << "\n";
}