// Reference: ECS 36C, UC Davis

#include "cputimer.h"

void cputimer::Reset(void){
    begin = std::chrono::high_resolution_clock::now();
}

void cputimer::Stop(void){
    auto end = std::chrono::high_resolution_clock::now();
    elapsed = std::chrono::duration<double, std::nano>(end - begin).count();
}

double cputimer::Elapsed(void){
    return elapsed;
}