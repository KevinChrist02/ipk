#include <iostream>

int main (){
    
    int a,b;
    std::cout << "Give me two numbers: " << std::endl;
    std::cout << "a = " << std::endl;
    std::cin >> a;
    std::cout << "b = " << std::endl;
    std::cin >> b;

    int add(a + b);
    std::cout << "This is your sum: " << add << std::endl;

    return 0;
}