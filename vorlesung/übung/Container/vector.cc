//Vectoren sind Lineare Mengen von Elementen, deren Größe zur Laufzeit gesetzt werden

#include <vector>
#include <iostream>

int main(int argc, char** argv){
    std::vector<int> a; //leere Liste
    std::vector<int> b{1,2,3,4,5};
    std::vector<int> c(20);  //Liste mit 20 Einträgen
    std::cout << b.size() << std::endl; // .size gibt mir die Größe der liste
    b[0] = 4;
    c.resize(100); //Größe anpassen
    b.push_back(1); //Wert 1 hinten anfügen
    c.pop_back();   //Letztes Element entfernen
    std::cout << b.size() << std::endl;
    std::cout << c.size() << std::endl;
}
