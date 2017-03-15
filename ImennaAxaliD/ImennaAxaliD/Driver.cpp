#include <iostream>
using namespace std;

#include "LinkedList.h"


int main()
{
	char c;
	LinkedList s;
	cout << "List created.  Empty? " << boolalpha << s.empty() << endl;
	s.insert(2,0);
	cout << "List created.  Empty? " << boolalpha << s.empty() << endl;
	s.display(cout);
	s.insert(3,1);
	s.insert(5,2);
	s.insert(7,3);
	s.insert(11,4);
	s.insert(26,5);
	s.insert(27,6);

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
	cout << k.GetNth(4) << endl;
	
	cout << "splitting k and storing second half in t." << endl;
	t = k.split();
	cout << "displaying k" << endl;
	k.display(cout);
	cout << "displaying t." << endl;
	t.display(cout);
	k.remove(7);
	t.remove(27);

	cout << "displaying k and t with 7 and 27 removed." << endl;
	k.display(cout);
	t.display(cout);



	c = getchar();


	return 0;
}