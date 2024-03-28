#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Book {
private:
	string name, title, publicationYear;
public:
	Book() { }
	Book(string name, string title, string publicationYear) : name(name), title(title), publicationYear(publicationYear)
	{

	}
	void addBook(string name, string title, string publicationYear)
	{
		this->name = name;
		this->title = title;
		this->publicationYear = publicationYear;
		cout << "Book added" << endl;

	}
	string getName() const { return name; }
	string getTitle() const { return title; }
	string getPublicationYear() const { return publicationYear; }
};
class ShoppingCart {
	//to add books to the cart, view cart contents, and proceed with checkout.
private:
	vector<Book> books;
	int totalPrice;
	int totalQuantity;
	int discount;
	int tax;
	int totalTax;
	int totalDiscount;
	int total;
	int quantity;
	//int totalQuantity;
public:
	Book* book;

	ShoppingCart() { }
	ShoppingCart(vector<Book> books, int totalPrice, int totalQuantity, int discount, int tax, int totalTax, int totalDiscount, int total, int quantity) : books(books), totalPrice(totalPrice), totalQuantity(totalQuantity), discount(discount), tax(tax), totalTax(totalTax), totalDiscount(totalDiscount), total(total), quantity(quantity)
	{ }

	void viewCart()
	{ 
		for (int i = 0; i < books.size(); i++)
			cout << books[i].getName() << " " << books[i].getTitle() << " " << books[i].getPublicationYear() << endl;

		cout << "Total Price: " << totalPrice << endl;
		cout << "Total Quantity: " << totalQuantity << endl;
		cout << "Discount: " << discount << endl;
		cout << "Tax: " << tax << endl;
		cout << endl;
		

	}
	void setPrice(int price, int quantity, int tax, int discount)
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
	void proceedCheckout()
	{
		string name, address,city,phone,email,cardNumber, expirationDate, securityCode;
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

};
void bookDetails(string name, string title, string publicationYear)
{

	cout << "Name: " << name << endl;
	cout << "Title: " << title << endl;
	cout << "Publication Year: " << publicationYear << endl;
	cout << endl;
}
int main()
{
	Book book;
	ShoppingCart cart;
	int choice = 0;
	string name, title, publicationyear;
	do {
		cout << "Welcome to the shopping cart: ";
		cout << "\n1. Add book to the chart:  ";
		cout << "\n2. View cart contents:  ";
		cout << "\n3. Proceed to checkout:  ";
		cout << "\n4. Exit:  ";
		cout << "\nEnter your choice:  ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter your name:";
			cin.ignore();
			getline(cin, name);
			cout << "Enter your title:";
			cin.ignore();
			getline(cin, title);
			cout << "Enter your publication year:";
			cin.ignore();
			getline(cin, publicationyear);

			book.addBook(name, title, publicationyear);
			cart.setPrice(100, 2, 3.7, 2);

		}
		else if (choice == 2)
		{
			cart.setPrice(145,5,6.7,8);
			cart.viewCart();
		}
		else if (choice == 3)
		{

			cart.proceedCheckout();
			cout << endl;

		}
		else if (choice == 4)
		{
			cout << "EXITING THE PROGRAM:";
		}
		else
			cout << "Invalid choice: ";
	} while (choice!=4);

	return 0;
}