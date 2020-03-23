
struct nodeType
{
	int info;
	nodeType* link;
};

nodeType* head;

class Linkedlist
{
private:
	int num;
public:
	void insertion(int a); // insert an item to the list
	void print();
	void deletion(int a); // delete an item from the list
	int getNum(); // return the number of the nodes in the list
	Linkedlist(); // constructor, num = 0 
};

Linkedlist::Linkedlist()
{
	num = 0;
}


int Linkedlist::getNum()
{
	return num;
}

void Linkedlist::insertion(int a)
{
	// create a new node
	nodeType* p;
	p = new nodeType;
	p->info = a;
	p->link = NULL;

	//insert it to the list
	if (num == 0)
		head = p;
	else
	{
		p->link = head;
		head = p;
	}
	num = num + 1;

}
// delete function
void Linkedlist::deletion(int a)
{
	nodeType* p, * q;

	if (num == 0)
		cout << "Empty list";
	else
	{
		p = head;
		if (p->info == a)
		{
			head = p->link;
			delete p;
		}
		else
		{
			q = head;
			p = p->link;

			while (p != NULL)
			{
				if (p->info == a)
				{
					q->link = p->link;
					delete p;
					//cout << "";
				}
				else
				{
					q = q->link;
					p = p->link;
				}

			}
			cout << "Not found";
		}
	}
}
void Linkedlist::print()
{
	nodeType* q;

	if (num == 0)
		cout << "Empty list" << endl;

	else
	{
		q = head;
		while (q != NULL)
		{
			cout << q->info << endl;
			q = q->link;
		}
	}

}
