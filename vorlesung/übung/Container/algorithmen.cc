#include <vector>
#include <algorithm>
#include <iostream>

int main(){
    std::vector<int> a {2,4,3,1};
    std::sort(a.begin(), a.end());  //geben an, das der gesamte Vector sortiert werden soll
    
    for (int x : a)
        std::cout << x << " ";
    std::cout << std::endl;
}