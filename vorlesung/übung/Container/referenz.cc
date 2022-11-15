//Referenzen sind zusätzliche Name für existierende Variablen

#include <iostream>

int main(){
    int a = 12;
    int& b = a; //definiert Referenz 
    int& c = b; //Referenz auf Referenz
    //float& d = a; //compiler fehler, weil flascher typ
    int e = b;
    b = 2;  /* dadurch das b den wert 2 bekommt und eine Refernz ist, erhalten alle variablen
                welche in einer Referenz zu b stehen den Wert 2 */
    c = a * b;  //a * b = 2 * 2 = 4; alle Variablen erhalten mit ref erhalten den Wert 4
    std::cout << a << std::endl;
    std::cout << e << std::endl;
}