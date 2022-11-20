#include <iostream>
#include <array>
#include <vector>

int main(){

    std::vector<int> v(10);

    for(int i:v ){
        std::cout << i << std::endl;
    }
}   