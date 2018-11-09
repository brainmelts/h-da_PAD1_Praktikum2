#include <string>

class Invoice {
public:
    Invoice(std::string, std::string, int, double);

    void setPartNumber(std::string);
    std::string getPartNumber() const;

    void setPartDescription(std::string);
    std::string getPartDescription() const;

    void setQuantity(int);
    int getQuantity() const;

    void setPricePerItem(double);
    double getPricePerItem() const;

    double computeInvoiceAmount() const;
    std::string toString() const;

private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    double pricePerItem;
};