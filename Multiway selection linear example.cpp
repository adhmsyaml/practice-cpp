# include <iostream>

using namespace std;

int main ()
{
	float amount, paymentAfterDiscount, discount;
	
	cout << "Amount : ";
	cin >> amount;
	
	if (amount >= 1001){discount = 5.5;
	}
	else if (amount <= 1000 && amount >=501){discount = 3.5;
	}
	else if (amount <= 500 && amount >= 101){discount = 2.5;
	}
	else if (amount <= 100 && amount >= 50){discount = 1.0;
	}
	else {discount = 0;
	}
	cout << "\nYou get " << discount << "%" << endl;
	discount = (discount/100)*amount;
	paymentAfterDiscount = amount - discount;
	cout << "\nRM "<< paymentAfterDiscount << endl;
	return 0;
}
