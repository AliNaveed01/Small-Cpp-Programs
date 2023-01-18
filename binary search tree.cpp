#include <iostream>
using namespace std;

template<class T>
class node
{
private:
	T data;
	node<T>* right;
	node<T>* left;
public:
	node()
	{
		right = left = nullptr;
		data = 0;
	}
	node(T data)
	{
		this->data = data;
		right = left = nullptr;
	}
	node(T data, node<T>* left, node<T>* right)
	{
		this->data;
		this->left;
		this->right;
	}

	~node()
	{
		//destructor
	}

	template<class T>
	friend class tree;

};


template <class T>
class tree
{
private:
	node<T>* root;
public:
	tree()
	{
		//default constructor
		root = nullptr;
	}
	tree(node<T>* root)
	{
		this->root = root;
	}
	
	bool empty()
	{
		if (root == nullptr);
			return true;

		return false;
	}
	void insert(T val)
	{
		insert(val, root);
	}

	void insert(T val, node<T>* root)
	{
		if (root == nullptr)
		{
			root =  new node<T>*();
			root->data = val;
		}
		if (data > root->data)
		{
			insert(data, root->right);
		}
		else
		{
			insert(data,root->left);
		}			// i need to take the first lecture of this shitty lecture abt trees and then inshallah ill nail it by weekend
	}
	void inorder()
	{
		inorder(root);
	}
	void print(T val)
	{
		cout << root->data << " ";
	}

	void inorder(node<T>* root)
	{
		if (root == nullptr)
			return;
		inorder(root->left);
		print(root->data);
		inorder(root->right);
	}

	void preorder()
	{
		preorder(root);
	}

	void preorder(node<T>* root)
	{
		if (root == nullptr)
			return;
		cout << root->data << " ";
		print(root->data);
		inorder(root->right);
	}
	void postorder()
	{
		postorder(root);
	}

	void postorder(node<T>* root)
	{
		if (root == nullptr)
			return;
		inorder(root->left);
		inorder(root->right);
		print(root->data);
	}

	bool search(T val)
	{
		return search(root,val);
	}

	bool search(node<T>* root, T val)
	{
		if (root == nullptr)
		{
			return false;
		}

		if (val == root->data)
		{
			return true;
		}
		else
		{
			if (val > root->data)
			{
				return search(root->right, val);
			}
			else if (val < root->data)
			{
				return search(root->left, val);
			}
		}
	}

	void iterativeS(T val)
	{
		node<T>* traverser = root;
		while (root != nullptr)
		{
			if (root->data == val)
			{
				return true;
			}
			else if (root->data > val)
			{
				root = root->left;
			}
			else if (root->data < val)
			{
				root = root->right;
			}
		}
		return false;
	}




};





int main()
{
	tree<int> t;
	t.insert(10);
	t.insert(4);
	t.insert(5);
	t.insert(23);
	

	t.inorder();
	cout << endl << endl;
	t.preorder();
	cout << endl << endl;
	t.postorder();
	cout << endl << endl;



	bool check = t.search(4);

	if (check == true)
		cout << "codeworked";
	else
		cout << "didnt work";
	


	system("pause");
	return 0;
}