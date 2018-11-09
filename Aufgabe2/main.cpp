#include <iostream>
#include <string>
using namespace std;
#include "Invoice.h"

int main() {
    Invoice receipt1("123.h3", "Hammer Typ 3", 23, 12.95);
    Invoice receipt2("117.38", "Der Schnitzler", 21, -69.21);
    Invoice receipt3("420.x3", "Big Yikes", -2, 210.30);
    Invoice receipt4("1error", "Ach Mist", 0, 0);

    cout << receipt1.toString() << endl;
    cout << receipt2.toString() << endl;
    cout << receipt3.toString() << endl;
    cout << receipt4.toString() << endl;
}
