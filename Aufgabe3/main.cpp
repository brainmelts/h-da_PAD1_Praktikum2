#include <iostream>
#include <string>
using namespace std;
#include "Date.h"

int main() {
    Date datum(33, 13, 2018);

    cout << datum.toString();
}