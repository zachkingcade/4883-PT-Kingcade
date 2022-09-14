/**
* Zachary Kingcade
* CMPS 4883
* 08/30/2022
*/
#include <iostream>

int main() {
    long hArmy = 0,oArmy = 0;
    
    while (std::cin >> hArmy >> oArmy) {
    	std::cout << std::abs(hArmy - oArmy) << '\n';
    }
    return 0;
}