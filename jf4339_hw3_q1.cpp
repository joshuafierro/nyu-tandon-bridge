#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    double item1Price, item2Price;
    double discount = 2;
    string clubCardHolder;
    double tax;
    cout<<"Enter price of first item: ";
    cin >> item1Price;
    cout<<"Enter price of second item: ";
    cin >> item2Price;
    cout<<"Does customer have a club card? (Y/N): ";
    cin>> clubCardHolder;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>> tax;

    double totalPriceBeforeTaxAndDiscounts = item1Price + item2Price;
    cout << "Base Price: " << totalPriceBeforeTaxAndDiscounts <<endl;

    // determine which price is lower. lower price gets the discount
    if(item1Price < item2Price) {
        item1Price = item1Price / discount;
    }
    else if((item2Price < item1Price) || (item2Price == item1Price)) {
        item2Price = item2Price / discount;
    }

    double withDiscountsBeforeTaxPrice = item1Price + item2Price;
    const double cardHolderDiscount = .10;

    // determine if card holder.
    // if card holder then customer gets additional 10% off
    if(clubCardHolder == "y" || clubCardHolder == "Y" || clubCardHolder == "yes") {
        withDiscountsBeforeTaxPrice -= withDiscountsBeforeTaxPrice * cardHolderDiscount;
    }
    double taxPrecentage = tax/100;
    double totalPrice = (withDiscountsBeforeTaxPrice * taxPrecentage) + withDiscountsBeforeTaxPrice;

    cout<<"Price after discounts: " << withDiscountsBeforeTaxPrice <<endl;
    cout<<"Total price: " << totalPrice <<endl;
    return 0;
}