#ifndef NUMLIST_H
#define NUMLIST_H
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>

class NumList{
    public:
	static const size_t CAPACITY = 150;
	
	// Default constructor
	NumList();

	// Precondition:  none
	// Postcondition: num is placed at the end of the list, 
	//				  if there is sufficient Capacity
	void insert(int num);
	size_t size()const {return used;}

	// Precondition:  istream is a stream that has already been connected to 
	//                a successfully opened file
	// Postcondition: integers from the file are loaded into the object
	void load_from_file(std::istream& ins);

	// Preconditon:  ostream is connected to a successfully open file
	// Postconditon: numbers in the object are written to the file
	void save_to_file(std::ostream& outs);

	void b_sort();                                                                                  ///sorts the data in the object
	int get_item(size_t index)const;
	void see_all()const;                                                                            ///lists all items in the object
    private:
	int data[CAPACITY];
	size_t used;                                                                                    ///the number of used spots in the alotted CAPACITY
};

#endif