#include <map>
#include <iostream>

int main(){
    std::map<std::string, int> shopping;
    
    //Adding entries by accessing them
    shopping["cookies"] = 3;
    shopping.insert({"chocolate", 5});
    shopping.insert({"chips", 4});

    //Testing wether an entry exists
    if (shopping.count("chips")) //return 0/1
        std::cout << "Gefunden!" << std::endl;

    //Removing entries
    shopping.erase("cookies"); //returns 1
    shopping.erase("biscuits"); //returns 0, weil biscuits kein entry ist

    //Accesing elements
    std::cout <<shopping["cookies"] << std::endl; //returns 0, weil cookies davor erased wurde
    std::cout <<shopping["chips"] << std::endl; //returns die Anzahl der "items" in dem entry

    //Modifying existing entries
    shopping["chips"] += 1;
    std::cout <<shopping["chips"] << std::endl;

    //Removing *all* entries
    shopping.clear();
}