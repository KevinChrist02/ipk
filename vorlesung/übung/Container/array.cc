//Arrays sind Lineare Menge von Elementen, deren Größe zur Compile-Zeit bekannt sind

#include <array>
#include <iostream>

int main(){

    std::array<int,4> a{1,2,3,4};
    std::cout << a.size() << std::endl;
    a[2] = 4;
    std::cout << a[0] << std::endl;
}