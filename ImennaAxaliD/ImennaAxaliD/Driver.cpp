#include <iostream>
using namespace std;

#include "LinkedList.h"


int main()
{
	char c;
	LinkedList s;
	cout << "List created.  Empty? " << boolalpha << s.empty() << endl;
	s.insert(2,0);
	cout << "Value 2 inserted and checking list again. Empty? " << boolalpha << s.empty() << endl;
	cout << "Inserting value 3 splitting list(2, 3), length = 2 and displaying:" << endl;
	s.insert(3,1);
	LinkedList t;
	t = s.split();
	cout << "Diplaying list 1: ";
	s.display(cout);
	cout << endl;
	cout << "Displaying list 2.";
	cout << endl;
	t.display(cout);

	cout << "Testing Split again for length = 3,     List - 2, 3, 5" << endl;
	s.insert(3, 1);
	s.insert(5, 2);
	t = s.split();
	cout << "Displaying list 1 : ";
	s.display(cout); 
	cout << "Displaying list 2 : ";
	t.display(cout);
	cout << endl;

	cout << "Testing Split again for length = 4,     List - 2, 3, 5, 7" << endl;
	s.insert(5, 2);
	s.insert(7, 3);
	t = s.split();
	cout << "Displaying list 1 :";
	s.display(cout);
	cout << "Displaying list 2 : ";
	t.display(cout);
	cout << endl;


	cout << "Declaring list k and copying contents of s to it and displaying:";
	LinkedList k(s);
	k.display(cout);
	cout << endl;

	k.insert(5, 2);
	k.insert(7, 3);
	k.insert(11, 4);
	k.insert(17, 5);

	cout << "Testing GetNth for index 0, 1, 2, 3, 5 in k:" << endl;
	cout << "Index: 0	1	2	3	4	5" << endl << endl;
	cout << "Value: " << k.GetNth(0) << "	" << k.GetNth(1) << "	" << k.GetNth(2);
	cout << "	" << k.GetNth(3) << "	" << k.GetNth(4) << "	" << k.GetNth(5) << endl << endl;

	
	cout << "Testing remove function, removing values 2(first), 17(last) and 5(middle) from k and displaying: ";
	k.remove(2);
	k.remove(17);
	k.remove(5);
	k.display(cout);

	c = getchar();

	cout << "We have used GetNth, split, default constructor, copy constructor, destructor(if list is not empty before assigning something to it it is destroyed.)" << endl;
	cout << "insert, remove, empty, assignment overloading, display, length(counts length of linked listm used inside split and other funcs.)" << endl;
	cout << "We use assert to make sure that GetNth and Split have appropriate parameters and/or list using them." << endl;
	return 0;
}