#include <iostream>
// impletemt linked list as template

template <class TYPE>										// struct link<TYPE>
struct link													// one element of the list
{															// with this struct definition link means link<TYPE>
	TYPE data;												// data item
	link* next;												// pointer to next link
};

template <class TYPE>										// class linklist<TYPE>
class linklist												// a list of links
{															// within this class definition linklist means linklist<TYPE>
private:
	link<TYPE>* first;										// pointer to first link
public:
	linklist()												// no argument constructor
	{
		first = NULL;
	}
	void addItem(TYPE d);									// add data item one link
	void display();											// display all links
};

template <class TYPE>
void linklist<TYPE>::addItem(TYPE d)						// add data item
{
	link<TYPE>* newlink = new link<TYPE>; 					// make a new link
	newlink->data = d;										// give it data
	newlink->next = first;									// it points to next link
	first = newlink;
}
template <class TYPE>
void linklist<TYPE>::display()								// display all links
{
	link<TYPE>* current = first;							// set pointer to first link
	while(current != NULL)
	{
		std::cout << std::endl << current->data;			// print data
		current = current->next;
	}
}

int main() {
	linklist<double> linklistDouble;						// linklistDouble is object of class linklist<double>

	linklistDouble.addItem(151.5);							// add three doubles to list linklistDouble
	linklistDouble.addItem(262.6);
	linklistDouble.addItem(373.7);

	linklistDouble.display();								// display entire list of linklistDouble

	linklist<char> linklistChar;							// linklistChar is object of class linklist<char>

	linklistChar.addItem('a');
	linklistChar.addItem('b');
	linklistChar.addItem('c');

	linklistChar.display();

	std::cout << std::endl;
	return 0;
}