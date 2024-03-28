#include<iostream>
#include<vector>
#include<string>
using namespace std;
class BOok {
private:
	string name, title, publicationYear;
public:
	BOok();
	BOok(string name, string title, string publicationYear);
	void addBook(string name, string title, string publicationYear);
	string getName() const;
	string getTitle() const;
	string getPublicationYear() const;
};


