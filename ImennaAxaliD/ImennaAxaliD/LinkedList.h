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

	//Assignment Operation for LinkedList objects.
	const LinkedList & operator= (const LinkedList & rightHandSide);

	//Get Nth Function
	ListElement GetNth(int a)const;


	/*-----------------------------------------------------------------
	First half will be left in the list that is calling the function.
	Second half will be stored in the list that is calling the function.
	------------------------------------------------------------------*/
	void split(LinkedList & secondList);

	//Check if empty
	bool empty() const;

	//Inserts value at the end of linked list.
	void insert(const ListElement & value);

	//Display contents of the linked list
	void display(ostream & out) const;

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
};

#endif
