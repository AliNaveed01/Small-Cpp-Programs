#include <iostream>
using namespace std;

template<class T>
class DLLNode
{
private:
	T data;
	DLLNode<T>* prev;
	DLLNode<T>* next;
public:
	DLLNode()
	{
		next = prev = nullptr;
	}
	DLLNode(const T& el, DLLNode* p = 0, DLLNode* n = 0)
	{
		data = el; next = n; prev = p;
	}
	template<class T>
	Friend class DoublyLinkedList; //=>list class can access private members of Node class
	
};
template<class T>
class DoublyLinkedList
{
private:
	DLLNode<T>* head, * tail;
public:
	DoublyLinkedList()
	{
		head = tail = 0;
	}
	void addToDLLTail(const T& val) {
		if (tail != 0)
		{
			DLLNode<T>* newnode = new DLLNode<T>(val, tail, 0);
			// prev = tail, next = 0
			tail->next = newnode;
			tail = newnode;
		}
		else
			head = tail = new DLLNode<T>(val);
	}

	T deleteFromDLLTail()
	{
		if (head != NULL)
		{
			//not empty
			if (head == tail) { // if only one node in the list;
				delete head;
				head = tail = 0;
			}
			else
			{ // if more than one node in the list;
				tail = tail->prev;
				delete tail->next;
				tail->next = 0;
			}
		}
	}
	void deleteNode(DLLNode<T>* ptr)
	{
		if (head != NULL && ptr != NULL) {//not empty
			if (head == tail && head == ptr) {//if only one node in the list and delete it
				delete head;
				head = tail = 0;
			}
			else 
			{   // if more than one node in the list;
				if (ptr->prev != NULL)
					ptr->prev->next = ptr->next; // not the first element
				else
					head = ptr->next; // the first element
				if (ptr->next != NULL)
					ptr->next->prev = ptr->prev; // not the last element
				else
					tail = ptr->prev; // the last element
				delete ptr;
			}
		}
	}

	int length()
	{
		int len = 0;
		Node<T>* temp = head;
		while (temp != nullptr)
		{
			len++;
			temp = temp->next;
		}
		return len;
	}

	void print()
	{
		if (head == nullptr)
		{
			cout << "linked list is empty" << endl;
			return;
		}
		Node<T>* temp = head;
		while (temp != nullptr) 
		{
			cout << temp->data << "  ";
			temp = temp->next;
		}
		cout << endl;
	}
	bool isEmpty() 
	{ 
		return (head->next == nullptr);
	}
	~DoublyLinkedList() 
	{
		delete head;
		delete tail;
	}
};
