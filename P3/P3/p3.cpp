#include <iostream>

using namespace std;

template <typename T>
struct Node
{
	T info;
	Node<T> *link;
};

template <typename T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void print() const;
	void insert(const T& item);
protected:
	int count;
	Node<T> *first;
};
void main()
{
	LinkedList<char> c;
	c.insert('D');
	c.insert('B');
	c.insert('A');
	c.insert('Z');
	c.insert('S');
	c.insert('Z');
	c.insert('C');
	c.print();
	return;
}

template<typename T>
LinkedList<T>::LinkedList()
{
	first = NULL;
	count = 0;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
	Node<T> *t = first;
	while (t != NULL) 
	{
		first = first->link;
		delete t;
		t = first;
	}
	first = NULL;
}

template<typename T>
void LinkedList<T>::print() const
{
	Node<T> *temp = first;
	while (temp != NULL)
	{
		cout << temp->info << endl;
		temp = temp->link;
	}
}

template<typename T>
void LinkedList<T>::insert(const T & item)
{
	Node<T> *back = NULL, *temp = first;
	Node<T> *n = new Node<T>;
	n->info = item;
	n->link = NULL;
	if (first == NULL)
		first = n;
	else
	{
		while ((temp != NULL) && (temp->info < n->info))
		{
			back = temp;
			temp = temp->link;
		}
		if (back == NULL)
		{
			n->link = first;
			first = n;
		}
		else
		{
			n->link = temp;
			back->link = n;
		}
	}

}
