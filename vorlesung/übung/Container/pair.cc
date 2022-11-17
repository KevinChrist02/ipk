#include <iostream>
#include <utility>

int main(){

    std::pair<std::string, int> name_grade = std::make_pair("Max",2 );
    std::cout << "Name: " << name_grade.first << std::endl;
    std::cout << "Note: " << name_grade.second << std::endl;
    

}