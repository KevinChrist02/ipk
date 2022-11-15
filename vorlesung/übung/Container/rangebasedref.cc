#include <vector>
#include <iostream>

int main(){
    std::vector<int> v = {1,2,3,4};
    for(int& value : v) //Referenz-Typ für die Variable verwenden
        value *= 2;     //Inhalt wird bei iterieren verändert
}