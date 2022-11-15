//iterieren über Container

#include <vector>
#include <iostream>

int main (int argc, char** argv){
    
    std::vector<int> v{1,2,3,4};

    for (int entry : v) //es werden mir alle Einträge ausgegeben
        std::cout << entry << std::endl;
}