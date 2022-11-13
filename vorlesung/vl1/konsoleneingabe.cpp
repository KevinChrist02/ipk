#include <iostream>

std::string user;   //definiere user als string

int main (){
    
    std::cout << "Enter your name: " << std::endl;
    std::cin >> user;   //user input durch stdin
    std::cout << "Hi " << user << std::endl; // input des users wird genutzt für die ausgabe
    return 0;
}