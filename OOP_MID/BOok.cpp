#include "BOok.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

	BOok::BOok() { }
	BOok::BOok(string name, string title, string publicationYear) : name(name), title(title), publicationYear(publicationYear)
	{
	}
	void BOok:: addBook(string name, string title, string publicationYear)
	{
		this->name = name;
		this->title = title;
		this->publicationYear = publicationYear;
		cout << "Book added" << endl;

	}
	string BOok::getName() const { return name; }
	string BOok::getTitle() const { return title; }
	string BOok::getPublicationYear() const { return publicationYear; }
