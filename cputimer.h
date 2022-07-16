// Reference: ECS 36C, UC Davis

#ifndef CPUTIMER_H
#define CPUTIMER_H

#include <chrono>

class cputimer{
    public:
        void Reset(void);
        void Stop(void);
        double Elapsed(void);
    private:
        std::chrono::high_resolution_clock::time_point begin;
        double elapsed;
};

#endif