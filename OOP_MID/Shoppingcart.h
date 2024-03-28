#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Shoppingcart {
	//to add books to the cart, view cart contents, and proceed with checkout.
private:
	vector<BOok> books;
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
	BOok* book;

	Shoppingcart();
	Shoppingcart(vector<BOok> books, int totalPrice, int totalQuantity, int discount, int tax, int totalTax, int totalDiscount, int total, int quantity) : books(books), totalPrice(totalPrice), totalQuantity(totalQuantity), discount(discount), tax(tax), totalTax(totalTax), totalDiscount(totalDiscount), total(total), quantity(quantity)
	{ };

	void viewCart();

	void setPrice(int price, int quantity, int tax, int discount);
	void proceedCheckout();

};

