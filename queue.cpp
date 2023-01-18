#include<iostream>
using namespace std;

class node {
private:
	int priority;
	node* nexterm;
public:
	node()
	{
		nexterm = nullptr;
	}
	node(int k, node* term = nullptr) :priority(k), nexterm(term) {}

	friend class sq;
};

class sq {
private:
	node* first;
public:

	sq() :first(nullptr) {}


	void insertinsorted(int element)
	{
		if (first == nullptr)
		{
			node* inserter = new node(element, first);
			first = inserter;
		}
		else {
			if (element < first->priority)
			{
				node* inserter = new node(element, first);
				first = inserter;
			}
			else
			{
				node* traverser = this->first;
				bool found = false;
				while (traverser->nexterm != nullptr && !found)
				{
					if (traverser->priority == element)
					{
						node* inserter = new node(element, traverser->nexterm);
						traverser->nexterm = inserter;
						found = true;
					}
					else
					{
						if (traverser->nexterm->priority > element)
						{
							node* inserter = new node(element, traverser->nexterm);
							traverser->nexterm = inserter;
							found = true;
						}
						traverser = traverser->nexterm;
					}
				}
				if (!found)
				{
					node* inserter = new node(element, traverser->nexterm);
					traverser->nexterm = inserter;
				}
			}
		}
	}

	void enqeue(int element)
	{
		insertinsorted(element);
		return;
	}

	void print()
	{
		node* traverser = this->first;
		while (traverser != nullptr)
		{
			cout << traverser->priority << "    ";
			traverser = traverser->nexterm;
		}
		cout << endl;
	}

	void deletefirst()
	{
		if (this->first != nullptr)
		{
			if (this->first->nexterm == nullptr)
			{
				node* deleter = this->first;
				delete deleter;
				this->first = nullptr;
			}
			else
			{
				node* deleter = this->first;
				this->first = first->nexterm;
				delete deleter;
				deleter = nullptr;
			}
		}
		return;
	}


	void deqeue()
	{
		this->deletefirst();
	}


};