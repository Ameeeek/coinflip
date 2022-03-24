#include <ctime>
#include <iostream>

int main(){
    srand(time(NULL));
    int coin = rand() %2;

    if (coin == 0){
        std::cout << "kepala";
    } else {
        std::cout << "ekor";
    }
    return 0;
}