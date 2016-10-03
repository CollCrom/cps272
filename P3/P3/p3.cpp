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
	cout << "dicks";
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
}

template<typename T>
LinkedList<T>::~LinkedList()
{}

template<typename T>
void LinkedList<T>::print() const
{
	while (first->link != NULL)
	{
		cout << first->info << endl;
	}
}

template<typename T>
void LinkedList<T>::insert(const T & item)
{
	Node<T> *temp = new Node<T>;
	temp->link = NULL;
	temp->info = item;
	first = temp;
}
