#include <iostream>
#include <assert.h>
using namespace std;

#ifndef LLIST
#define LLIST
typedef int ListElement;

class LinkedList
{
public:
	//Default Constructor
	LinkedList();
	//Copy Constructor.
	LinkedList(const LinkedList & original);
	//Destructor
	~LinkedList();
	
	//Get Nth Function
	ListElement GetNth(int a)const;

	
	//Check if empty
	bool empty() const;

	//Returns 1 if value removed, returns 0 if not.
	void remove(ListElement a);

	//Inserts value at the end of linked list.
	void insert(const ListElement value, int position);

	//Display contents of the linked list
	void display(ostream & out) const;

	int length() const;


	//Node Clas
	class Node
	{
	public:
		ListElement data;
		Node * next;
		Node(ListElement value, Node * address = 0)
			: data(value), next(address)
		{}
	};
	typedef Node * NodePointer;
	NodePointer head;

	// Splits the current list and returns the second half.
	NodePointer split();

	//Assignment Operation for LinkedList objects.
	const LinkedList & operator= (const LinkedList::NodePointer rightHandSide);
};


#endif
