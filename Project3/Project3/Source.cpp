#include <iostream>

using namespace std;

template <typename T>
struct NodeType
{
	T info;
	NodeType<T> *link;
};

template <typename T>
class LinkedList
{
public:
	LinkedList();
	//~LinkedList();
	void print() const;
	void insert(const T& item);
protected:
	int count;
	NodeType<T> *first;
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
}

/*template<typename T>
LinkedList<T>::~LinkedList()
{
	NodeType<T> *temp = new NodeType<T>;
	temp = first;
	first = temp->link;
	delete *temp;
}*/

template<typename T>
void LinkedList<T>::print() const
{
	while (first != NULL)
	{
		cout << first->info << endl;
		first = first->link;
	}
}

template<typename T>
void LinkedList<T>::insert(const T & item)
{
	NodeType<T> *temp = new NodeType<T>;
	temp->info = item;
	temp->link = first;
	first = temp;;
}
