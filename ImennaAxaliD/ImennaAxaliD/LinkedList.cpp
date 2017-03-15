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

int LinkedList::length() const{
	LinkedList::NodePointer current = head;
	int l = 0;
	while (current != 0) {
		l++;
		current = current->next;
	}

	return l;


}

LinkedList::NodePointer LinkedList:: split() //The definition did not work any other way.
{
	int length = this->length();
	int counter = 0;
	LinkedList::NodePointer current = head, returnPointer;
	//assert(length < 2);

	// Length of first half that will be left in the list, split point.
	length = (length + 1) / 2;
	current = head;
	while (counter < length - 1) {
		current = current->next;
		counter++;
	}
	returnPointer = current->next;
	current->next = 0;
	return returnPointer;
}


//Split function



//Default Constructor
LinkedList::LinkedList()
	: head(0)
{}

//Inserts value at the end of linked list.
void LinkedList::insert(const ListElement value, int position) {
	int length = this->length();
	assert(position > length - 1);
	LinkedList::NodePointer current = head, temp;
	int currentPosition = 0;
	if (position == 0) {
		head = new LinkedList::Node(value);
		if (this->empty()) {
			head->next = current;
		}
	}
	else {
		while (currentPosition != position - 1) {
			current = current->next;
			currentPosition++;
		}
		temp = current->next;
		current->next = new LinkedList::Node(value);
		current = current->next;
		current->next = temp;
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

const LinkedList & LinkedList:: operator=(const LinkedList::NodePointer rightHandSide) {
	if (this->head != rightHandSide) {
		this->~LinkedList();                  // destroy current linked list to free memory.
		if (rightHandSide->next == 0)	     // empty list
			head = 0;
		else {                            
			this->head = rightHandSide;
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

void LinkedList::remove(ListElement a){
	// We did not use length function here because length changes if one item is removed
	// Our list allows multiple instances for same values to be inserted.
	LinkedList::NodePointer current = head, previous;
	if (head == 0)
		return;
	// While values in head node are what we want to remove, remove.
	// Second condition makes sure that list is not emptied while removing element.
	while (head->data == a && head!= 0) { 		
		previous = head;
		head = head->next;
		delete previous;
	}
	// If list became empty while removing values at head, return
	if (head == 0)
		return;
	//Continue for non-head members;
	previous = head;
	current = head->next;
	//While end of list not reached.
	while(current != 0){
		while (current != 0 && current->data == a) { //while value at node at current position equals value to be removed and second condition if value already removed.
			previous->next = current->next;
			delete current;
			current = previous->next;
		}
		if (current == 0)
			return;

		previous = previous->next;
		current = current->next;

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
