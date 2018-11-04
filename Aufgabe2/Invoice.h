#include <string>

class Invoice {
public:
    Invoice(std::string, std::string, int, double);

    void setPartNumber(std::string);
    std::string getPartNumber();

    void setPartDescription(std::string);
    std::string getPartDescription();

    void setQuantity(int);
    int getQuantity();

    void setPricePerItem(double);
    double getPricePerItem();

    double computeInvoiceAmount();
    std::string toString();

private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    double pricePerItem;
};