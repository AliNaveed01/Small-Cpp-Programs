#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

template <class T>
class Node
{
public:
	T data;
	Node<T>* next;
	Node()
	{
		// default constructor
		next = nullptr;
	}

	///////////Overloaded constructor/////////////
	Node(T d = 0, Node<T>* n = nullptr) : data(d), next(n)
	{
		//////////////////
	}
};

template <class T>
class Stack
{
private:
	Node<T>* top; //it will behave as a head of the linklist( considering the stack as a SLL)

public:
	Stack()
	{
		//default constructor
		top = nullptr;
	}

	bool IsEmpty()
	{
		// this function checks whether the stack is empty  or not
		return top == nullptr;
	}

	bool push(const T& val)
	{
		// this function will push the element inside the stack
		top = new Node<T>(val, top);
		return true;
	}

	bool pop()
	{
		// this function will delete or return the topmost element from the stack
		if (IsEmpty())
		{
			return false;
		}
		else
		{
			Node<T>* temp = top;
			top = top->next;
			delete temp;
			return true;
		}

	}

	T peek()
	{
		// this function will return  the element from the top of the stack
		return top->data;
	}

	void print()
	{
		// this function will print the entire stack in LIFO order (last in first out)
		if (IsEmpty())
		{
			cout << "The Stack is empty..!" << endl;
		}

		else
		{
			Node<T>* temp = top;
			while (temp != nullptr)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
			//traversion of loop
		}
	}

	~Stack()
	{
		while (!IsEmpty())
		{
			//destructor
			pop();
		}

	}
};

bool Headcheck(string S1)		//helper function
{
	int size;
	size = S1.length();	 //it will check the length 

	int n = 0;
	bool flag = true;
	if (S1[n] == '<' && S1[n + 1] == '?')
	{
		for (int i = n + 2; i < size; i++)
		{
			if (S1[i] == '=')
			{
				i++;
				if (S1[i] == '"')
				{
					i++;
					while (S1[i] != '"')
					{
						i++;
						if (S1[i] == size || S1[i] == '=')
						{

							cout << "Openeing braces are missing ..:/" << endl;
							cout << "There must be a closing bracket " << endl;
							flag = false;
							break;
						}
					}
				}
				else
				{

					cout << "opening braces are not found ...!" << endl;
					cout << "There must be an opening bracket .:)" << endl;
					flag = false;
				}
			}
		}
	}

	///////////////////////////////////////////////////////////////////////

	if (flag == false)
	{
		return flag;
	}

	else if (S1[size - 2] == '?' && S1[size - 1] == '>')
	{
		return true;
	}
	else
	{
		cout << "Syntax error: Closing tag of prolouge is missing ../" << endl;
		cout << "There must be the closing tag of proluge to remove the error..:)" << endl;
		return false;
	}
}

void Compiler()
{
	string S1;
	ifstream fin("Xml.txt");
	int line = 0;
	Stack<string> tags;

	// to check if the file exists or not
	if (!fin)
	{
		cout << "No File Exists" << endl;
	}
	else
	{
		while (getline(fin, S1))
		{
			int len = S1.length();
			line++;
			if (line == 1)
			{
				bool c = Headcheck(S1);
			}
			else if (S1[0] == '<')
			{
				if (S1[1] == '!')
				{
					if (S1[2] == '-')
					{
						if (S1[3] == '-')
						{
							if (S1[len - 1] == '>')
							{
								if (S1[len - 2] == '-')
								{
									if (S1[len - 3] == '-')
									{
										//perfection in the xml file  so far :P
									}
									else
										cout << "Error in closing of comment on line no." << line << endl;
								}
								else
									cout << "Error in closing of comment on line no." << line << endl;
							}
							else
								cout << "Error in closing of comment on line no." << line << endl;
						}
						else
							cout << "Error in opening of comment on line no." << line << endl;
					}
					else
						cout << "Error in opening of comment on line no." << line << endl;
				}
				else if (S1[1] == '/')
				{
					string name;
					for (int i = 2; S1[i] != '>'; i++)
					{
						name += S1[i];
					}
					if (tags.peek() == name)
						tags.pop();
					else
					{
						cout << "Closing tag for " << tags.peek() << " not found on line no." << line << endl;
						tags.pop();
					}
				}
				else
				{
					S1 += '\n';
					string name;
					int i = 0;
					for (i = 1; S1[i] != '>'; i++)
					{
						name += S1[i];
					}
					tags.push(name);
					for (; i < len; i++)
					{
						if (S1[i] == '/')
						{
							i++;
							string n;
							for (; S1[i] != '>'; i++)
							{
								n += S1[i];
								if (S1[i] == '\n')
								{
									cout << "Error in closing tag on line no." << line << endl;
									break;
								}
							}
							if (tags.peek() == n)
							{
								tags.pop();
								break;
							}
							else
							{
								cout << "Closing tag for " << tags.peek() << " not found on line no." << line << endl;
								tags.pop();
								break;
							}
						}
					}
				}
			}
			else
				cout << "Error in opening of tag on line no." << line << endl;
		}
	}
	if (!tags.IsEmpty())
		cout << "Errors found in code" << endl;
	else
		cout << "Compiling ended .....! Good Job" << endl;
}

int main()
{
	//Stack<XML> file;
	cout << "#====================================================================================== = \n\n";
	cout << " This program will work as a compiler that will check syntax errors of XML language." << endl;
	cout << " Your program will get an XML code in an input file, and it should figure out if tags" << endl;
	cout << " and quotes are properly matched or not using stack." << endl;
	cout << "\n\n #====================================================================================== \n\n";


	system("pause");
	system("cls");

	////////////////////////////////////////////////////////////////////////////////////////////////////////

Start:
	Compiler();

	cout << "\n\n #====================================================================================== \n\n";
	int c;
Again:
	cout << "Do you want to continue? (1 for yes, 2 for no)" << endl;
	cin >> c;
	if (c == 1)
	{
		goto Start;
	}
	else if (c == 2)
	{
		goto End;
	}
	else
	{
		cout << "invalid input.. enter valid input." << endl;
		goto Again;
	}
End:
	system("pause");
	return 0;
}