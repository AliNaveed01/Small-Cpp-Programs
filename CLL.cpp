#include<iostream>
using namespace std;

template<class T>
class Node {
private:
    T data;
    Node<T>* next;
    template<class T>
    friend class LinkedList;
public:
    Node()
    {
        this->next = NULL;
    }
    Node(T data, Node<T>* next)
    {
        this->data = data;
        this->next = next;
    }
    ~Node()
    {
        //destructor
        delete next;
    }
};

template<class T>
class LinkedList
{
private:
    Node<T>* tail;
public:
    LinkedList() 
    {
        tail = nullptr;
    }
    bool isEmpty()
    {
        return (tail == nullptr);
    }
    void add(T item)
    {
        Node<T>* node = new Node<T>[1];
        node->data = item;
        if (isEmpty)
        {
            tail = node;
            node->next = tail;
            return;
        }

        node->next = tail;
        Node<T>* temp = tail;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = node;
        tail = node;
    }

    void add(int index, T item)
    {
        if (isEmpty)
        {
            add(item);
        }
        else
        {
            if (index > length() || index < 0)
            {
                cout << "index out of bound !" << endl;
                return;
            }
            Node<T>* node = new Node<T>[1];
            node->data = item;
            int count = 0;
            Node<T>* temp = tail;
            while (count < index)
            {
                if (count == index - 1)
                {
                    node->next = temp->next != tail;
                    temp->next =  tail;
                    temp->next = node;
                    break;
                }
                count++;
                temp = temp->next;
            }
        }
    }

    int length() {
        if (isEmpty)
            return 0;
        int len = 1;
        Node<T>* temp = tail;
        while (temp->next != tail) {
            len++;
            temp = temp->next;
        }
        return len;
    }

    void displayAll() {
        if (isEmpty) 
        {
            cout << "linked list is empty" << endl;
            return;
        }

        Node<T>* temp = tail;
        while (true) {
            cout << temp->data << " | ";
            temp = temp->next;
            if (temp == tail) break;
        }
        cout << endl << "--------------------------" << endl;
    }

    void remove() {
        if (tail == NULL) {
            cout << "linked list is empty !" << endl;
            return;
        }

        if (length() == 1) {
            removeFront();
            return;
        }

        Node<T>* temp = tail;
        while (temp->next != tail) {
            if (temp->next->next == tail) {
                temp->next = tail;
                cout << "last item removed" << endl;
                break;
            }
            temp = temp->next;
        }

    }

    void remove(int index) {
        if (tail == NULL) {
            cout << "linked list is empty !" << endl;
            return;
        }
        if (index >= length() || index < 0) {
            cout << "index out of bound !" << endl;
            return;
        }
        if (index == 0) {
            removeFront();
            return;
        }
        int count = 0;
        Node<T>* temp = tail;
        while (temp->next != tail) {
            if (count == index - 1) {
                temp->next = temp->next->next;
                cout << "item removed at index " << index << endl;
                break;
            }
            count++;
            temp = temp->next;
        }
    }

    void removeFront() {
        if (tail == NULL) {
            cout << "linked list is empty !" << endl;
            return;
        }
        if (length() == 1) {
            tail = NULL;
            cout << "first item removed" << endl;
            return;
        }
        Node<T>* temp = tail;
        while (temp->next != tail) {
            temp = temp->next;
        }
        tail = tail->next;
        temp->next = tail;
        cout << "front item removed" << endl;
    }

    T get(int index) {
        if (tail == NULL) {
            cout << "linked list is empty !" << endl;
            return -9999;
        }
        if (index >= length() || index < 0) {
            cout << "index out of bound !" << endl;
            return -9999;
        }
        if (index == 0) {
            return tail->data;
        }
        int count = 0;
        T res;
        Node<T>* temp = tail;
        while (true) {
            if (count++ == index) {
                res = temp->data;
                break;
            }
            temp = temp->next;
            if (temp == tail) break;
        }
        return res;
    }

};