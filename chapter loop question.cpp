#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int discountRate;
    char productType;
    char userContinue =y;
    float price, priceAfterDiscount;

    while (toupper(stop) ==Y)
    {
        cout << “Please enter your product type : “;
        cin >> productType;
        cout << “The price of your product : “;
        cin >> price;

        if (toupper(productType) ==S)
        {
            discountRate = 30;
        }

        else if (toupper(productType) ==’C’)
        {
            discountRate = 10;
        }

        else if (toupper(productType) ==’M’)
        {
            discountRate = 40;
        }

        else
        {
            cout << “Maybe you’ve entered an invalid product type.Please
            try
                again.”
        }

        priceAfterDiscount = price - (discountRate / 100 * price);
        cout << “The price after discount : “ << priceAfterDiscount << endl;
        cout << “Do you want continue ?”<< endl;
        cout << “Y / N : “;
        cin >> stop;
    }
    return 0;
}

