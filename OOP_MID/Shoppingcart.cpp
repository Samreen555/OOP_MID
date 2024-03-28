#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include "Shoppingcart.h"
#include "BOok.h"


Shoppingcart::Shoppingcart() { }
Shoppingcart::Shoppingcart(vector<BOok> books, int totalPrice, int totalQuantity, int discount, int tax, int totalTax, int totalDiscount, int total, int quantity) : books(books), totalPrice(totalPrice), totalQuantity(totalQuantity), discount(discount), tax(tax), totalTax(totalTax), totalDiscount(totalDiscount), total(total), quantity(quantity)
	{ }

	void Shoppingcart::viewCart()
	{
		for (int i = 0; i < books.size(); i++)
			cout << books[i].getName() << " " << books[i].getTitle() << " " << books[i].getPublicationYear() << endl;

		cout << "Total Price: " << totalPrice << endl;
		cout << "Total Quantity: " << totalQuantity << endl;
		cout << "Discount: " << discount << endl;
		cout << "Tax: " << tax << endl;
		cout << endl;


	}
	void Shoppingcart::setPrice(int price, int quantity, int tax, int discount)
	{

		totalPrice = price * quantity;
		totalQuantity = quantity;
		this->tax = tax;
		this->discount = discount;
		totalTax = totalPrice * tax / 100;
		totalDiscount = totalPrice * discount / 100;
		total = totalPrice - totalTax - totalDiscount;
		cout << "Total Price: " << totalPrice << endl;
		cout << "Total Quantity: " << totalQuantity << endl;
		cout << "Tax: " << tax << endl;
		cout << "Discount: " << discount << endl;
		cout << "Total Tax: " << totalTax << endl;
		cout << "Total Discount: " << totalDiscount << endl;
		cout << "Total: " << total << endl;
		cout << endl;
	}
	void Shoppingcart::proceedCheckout()
	{
		string name, address, city, phone, email, cardNumber, expirationDate, securityCode;
		cout << "Enter your name: ";
		cin.ignore();
		getline(cin, name);
		cout << "Enter your address: ";
		cin.ignore();
		getline(cin, address);
		cout << "Enter your city: ";
		cin.ignore();
		getline(cin, city);
		cout << "Enter your phone number: ";
		cin.ignore();
		getline(cin, phone);
		cout << "Enter your email: ";
		cin.ignore();
		getline(cin, email);
		cout << "Enter your card number: ";
		cin.ignore();
		getline(cin, cardNumber);
		cout << "Enter your expiration date: ";
		cin.ignore();
		getline(cin, expirationDate);
		cout << "Enter your security code: ";
		cin.ignore();
		getline(cin, securityCode);

	}

