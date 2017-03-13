#include <new>
using namespace std;
#include "LinkedList.h"


// Get Nth function
ListElement LinkedList::GetNth(int a)const
{
	int counter = 0;
	LinkedList::NodePointer current = head;
	while ((counter++ < a) && ((current = current->next) != 0)) {

	}
	assert(counter != a);



	return current->data;
}


//Split function

void LinkedList::split(LinkedList & secondList)
{	
	//assert(empty());
	int length = 1, counter = 0;

	LinkedList::NodePointer current = head, temp;
	//Countes the length of calling list.
	while (current->next != 0) {
		length++;
		current = current->next;
	}	
	//Assert for case when length is less than 2
	//assert(length < 2);
	/*If the list that we are going to store second part in is not empty, 
	we first destroy it to free memory.
	*/
	if (!(secondList.empty()))
		secondList.~LinkedList();

	// Length of first half that will be left in the list, split point.
	length = (length + 1) / 2;
	current = head;
	while (counter < length-1) {
		current = current->next;
		counter++;
	}
	secondList.head = current->next;
	current->next = 0;
}

//Default Constructor
LinkedList::LinkedList()
	: head(0)
{}

//Inserts value at the end of linked list.
void LinkedList::insert(const ListElement & value)  {
	if (empty()) {
		head = new LinkedList::Node(value);
	}else {
		LinkedList::NodePointer current;
		current = head;
		while ((current->next) != 0) {
			current = current->next;
		}
		current->next = new LinkedList::Node(value);

	}
}


//Check if empty
bool LinkedList::empty() const {
	return (head == 0);
}

//Display contents of the linked list
void LinkedList::display(ostream & out) const {
	LinkedList::NodePointer pointer;
	for (pointer = head; pointer != 0; pointer = pointer->next)
		out << pointer->data << endl;
}

//Assignment Operation for LinkedList objects.
const LinkedList & LinkedList:: operator=(const LinkedList & rightHandSide) {
	if (this != &rightHandSide) {
		this->~LinkedList();                  // destroy current linked list
		if (rightHandSide.empty())       // empty stack
			head = 0;
		else {                                // copy rightHandSide's list
			LinkedList::NodePointer current;
			current = rightHandSide.head;
			head = new LinkedList::Node(current->data);
			LinkedList::NodePointer lastPtr = head,
				rhsPtr = rightHandSide.head->next;
			while (rhsPtr != 0) {
				lastPtr->next = new LinkedList::Node(rhsPtr->data);
				lastPtr = lastPtr->next;
				rhsPtr = rhsPtr->next;
			}
		}
	}
	return *this;
}

//Destructor
LinkedList::~LinkedList() {
	LinkedList::NodePointer currNode = head,
		nextNode;
	while (currNode != 0) {
		nextNode = currNode->next;
		delete currNode;
		currNode = nextNode;
	}
}

//Copy Constructor
LinkedList::LinkedList(const LinkedList & original) {
	head = 0;
	if (!original.empty()) {
		LinkedList::NodePointer currentOriginal = original.head, currentThis;
		head = new LinkedList::Node(currentOriginal->data);
		currentThis = head;
		
		while ((currentOriginal = currentOriginal->next) != 0) {
			currentThis->next = new LinkedList::Node(currentOriginal->data);
			currentThis = currentThis->next;
		}
	}
}
