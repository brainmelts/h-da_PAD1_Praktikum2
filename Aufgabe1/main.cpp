#include <iostream>
#include <string>
using namespace std;
#include "GradeBook.h"

int main() {
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Weber, H.P.");
    GradeBook gradeBook2("CS102 Data Structures in C++", "Weber, H.P.");

    cout << gradeBook1.message() << endl;
    cout << gradeBook2.message() << endl;
}
