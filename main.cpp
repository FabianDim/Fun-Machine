//By Fabian Di Mento
#include <iostream>
#include <cstdlib>

using namespace std;

int calculateOdds() {
    int random {};
    double val = (double)rand() / RAND_MAX;
    
    if(val < 0.05) {
        random = 0;
    }
    else if (val < 0.25){
        random = 1;
    }
    else if(val < 0.55) {
        random = 2;
    }
    else {
        random = 3;
    }
return random;
}

int main() {
}