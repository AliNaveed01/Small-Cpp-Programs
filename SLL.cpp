#include <iostream>
using namespace std;

// Node class to represent
// a node of the linked list.
template <class T>
class Node {
private:
	T data;
	Node<T>* next;
public:

	// Default constructor
	Node()
	{
		data = 0;
		next = nullptr;
	}

	// Parameterised Constructor
	Node(T data)
	{
		this->data = data;
		this->next = nullptr;
	}

	~Node()
	{
		//destructor

	}
	template <class T>
	friend class Linkedlist;
};

// Linked list class to
// implement a linked list.
template <class T>
class Linkedlist 
{
	Node<T>* head;
public:
	// Default constructor
	Linkedlist() { head = nullptr; }

	// Function to insert a
	// node at the end of the
	// linked list.
	void insertNode(int data)
	{
		// Create the new Node.
		Node<T>* newNode = new Node<T>(data);

		// Assign to head
		if (head == nullptr)
		{
			head = newNode;
			return;
		}

		// Traverse till end of list
		Node<T>* temp = head;
		while (temp->next != nullptr)
		{
			// Update temp
			temp = temp->next;
		}
		// Insert at the last.
		temp->next = newNode;
		
	}

	// Function to print the
	// linked list.
	void printList()
	{
		Node<T>* temp = head;

		// Check for empty list.
		if (head == nullptr) 
		{
			cout << "List empty" << endl;
			return;
		}

		// Traverse the list.
		while (temp != NULL) 
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	// function to find the number of nodes in a linklists (aka length)
	int Length()
	{
		Node<T>* temp1 = head;
		int ListLen = 0;
		// Find length of the linked-list.
		while (temp1 != nullptr)
		{
			temp1 = temp1->next;
			ListLen++;
		}
		return ListLen;
	}

	bool IsEmpty()
	{
		return head == 0;
	}

	bool Find(Node<T> val)
	{
		Node<T>* tmp = head;
		while (tmp != NULL && tmp->data != val)
			tmp = tmp->next;
		return tmp != NULL;
	}

	// Function to delete the
	// node at given position
	void deleteNode(int nodeOffset)
	{
		Node<T>* temp1 = head;
		Node<T>* temp2 = nullptr;
		int len = 0;

		if (head == nullptr) {
			cout << "List empty." << endl;
			return;
		}
		len = Length();

		// Check if the position to be
		// deleted is less than the length
		// of the linked list.
		if (len < nodeOffset) {
			cout << "Index out of range" << endl;
			return;
		}

		// Declare temp1
		temp1 = head;

		// Deleting the head.
		if (nodeOffset == 1) {

			// Update head
			head = head->next;
			delete temp1;
			return;
		}

		// Traverse the list to
		// find the node to be deleted.
		while (nodeOffset-- > 1) {

			// Update temp2
			temp2 = temp1;

			// Update temp1
			temp1 = temp1->next;
		}

		// Change the next pointer
		// of the previous node.
		temp2->next = temp1->next;

		// Delete the node
		delete temp1;
	}
};


// Driver Code
int main()
{
	Linkedlist<int> list;

	// Inserting nodes
	list.insertNode(1);
	list.insertNode(2);
	list.insertNode(3);
	list.insertNode(4);

	cout << "Elements of the list are: ";

	// Print the list
	list.printList();
	cout << endl;

	// Delete node at position 2.
	list.deleteNode(2);

	cout << "Elements of the list are: ";
	list.printList();
	cout << endl;

	list.deleteNode(9);
	return 0;
}
