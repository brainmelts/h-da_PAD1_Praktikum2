#include <iostream>
using namespace std;
#include "GradeBook.h"

GradeBook::GradeBook(string name, string dozent) : courseName(name), dozentName(dozent) {}

void GradeBook::setCourseName(string name) { courseName = name; }
void GradeBook::setDozentName(string dozent) { dozentName = dozent; }

string GradeBook::getCourseName() const { return courseName; }
string GradeBook::getDozentName() const { return dozentName; }

string GradeBook::message() const {
    return "Notenliste für die Vorlesung " + courseName + ". Die Vorlesung wird gehalten von " + dozentName;
}