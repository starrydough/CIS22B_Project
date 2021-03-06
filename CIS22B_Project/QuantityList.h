#pragma once

#ifndef QUANTITY_H
#define QUANTITY_H

#include <iostream>
#include <iomanip>
#include <string>
#include "BookList.h"
#include "ISBNList.h"

class QuantityList : public BookList {

public:
	//two argument constructor that takes a Book array and its size and passes it to the BookList's constructor
	QuantityList(Book[], int);
	//copy constructor that takes a constant reference to a BookList object and passes it to the BookList constructor
	QuantityList(const BookList&);

	//function that uses selection sort to sort all the books in the books array by Quantity 
	void sortBooks();
	//function that prints the ISBN, Title, Author, and Quantity for all the books in the books array
	void printBooks();
};

#endif