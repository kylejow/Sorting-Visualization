#include "display.h"

void printDisplay(std::vector<std::vector<char>>& Display){
    for(int i = 0; i < Display[1].size(); i++){
        for(int j = 0; j < Display[1].size(); j++){
            std::cout << Display[i][j] << ' ';
        }
        std::cout << "\n";
    }
}
