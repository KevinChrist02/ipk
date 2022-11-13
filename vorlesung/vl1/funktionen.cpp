#include <iostream>
#include <string>

//print als selbst defnierte Funktion
void print (std::string msg){ //void gibt keinen Rückgabewert
    std::cout << msg << std::endl;
}

//aufrufen der main function
int main(int argc, char** argv){
    std::string greeting = "Hello, World";
    print(greeting); //funktion print wird aufgerufen
    return 0;
}