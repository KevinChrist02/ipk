#include <iostream>
#include <string>

std::string user;

int main(){
    std::string day = "friday";
    std::cout << "What day is today ? ";
    std::cin >> user;

    if (user == day){
        std::cout << "Today is ipk !" << std::endl;
    }
    else{
        std::cout << "Go back to sleep " << std::endl;
    }
    return 0;
}