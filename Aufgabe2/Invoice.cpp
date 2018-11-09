#include <iostream>
using namespace std;
#include "Invoice.h"

Invoice::Invoice(string num, string desc, int qt, double prc) {
    setPartNumber(num);
    setPartDescription(desc);
    setQuantity(qt);
    setPricePerItem(prc);
}

void Invoice::setPartNumber(string num) { partNumber = num; }
std::string Invoice::getPartNumber() const { return partNumber; }

void Invoice::setPartDescription(string desc) { partDescription = desc; }
std::string Invoice::getPartDescription() const { return partDescription; }

void Invoice::setQuantity(int qt) {
    if (qt < 0) quantity = 0;
    else quantity = qt;
}
int Invoice::getQuantity() const { return quantity; }

void Invoice::setPricePerItem(double prc) {
    if (prc < 0) pricePerItem = 0;
    else pricePerItem = prc;
}
double Invoice::getPricePerItem() const { return pricePerItem; }

double Invoice::computeInvoiceAmount() const {
    return pricePerItem * quantity;
}
string Invoice::toString() const {
    return "Teilnummer\t" + partNumber + "\nBeschreibung\t" + partDescription + "\nAnzahl\t\t" + to_string(quantity) + "\nStückpreis\t" + to_string(pricePerItem) + "\nGesamtpreis\t" + to_string(computeInvoiceAmount()) + "\n";
}