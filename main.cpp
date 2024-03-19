//By Fabian Di Mento
#include <iostream>
#include <cstdlib>

using namespace std;

int calculateOdds() {
    int random {};
    double val = (double)rand() / RAND_MAX;
    
    if(val < 0.05) {
        random = 100;
    }
    if(val < 0.1) {
        random = 40;
    }
    else if (val < 0.25){
        random = 1;
    }
    else if(val < 0.55) {
        random = 2;
    }
    else {
        random = 0;
    }
return random;
}

int playerInput(int bet) {
    std::cout << "What bet would you like to place? ";
    std::cin >> bet;
    return bet;
}



int main() {
}