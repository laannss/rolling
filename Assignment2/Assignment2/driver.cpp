#include <iostream>
using namespace std;

#include "LinkedList.h"


int main()
{
	char c;
	LinkedList s;
	cout << "List created.  Empty? " << boolalpha << s.empty() << endl;
	s.insert(2);
	cout << "List created.  Empty? " << boolalpha << s.empty() << endl;
	s.display(cout);
	s.insert(3);
	s.insert(5);
	s.insert(7);
	s.insert(11);

	s.display(cout);

	LinkedList t;
	cout << "copying content of list s  to t while assigning" << endl;
	t = s;
	cout << "displaying t:" << endl;

	t.display(cout);
	cout << "now copying contents of t to new list k while declaring and displaying:." << endl;

	LinkedList k(t);
	k.display(cout);
	cout << "testing GetNth for index numbers 0, 1, 2, 3, 4 on object k." << endl;
	cout << k.GetNth(0) << endl;
	cout << k.GetNth(1) << endl;
	cout << k.GetNth(2) << endl;
	cout << k.GetNth(3) << endl;


	cout << "splitting k and storing second half in t." << endl;
	k.split(t);
	cout << "displaying k" << endl;
	k.display(cout);
	cout << "displaying t." << endl;
	t.display(cout);

	c = getchar();
	return 0;
}