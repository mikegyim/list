#include <iostream>
using namespace std;
#include "list.h"
int main()
{

	Linkedlist list1;
	list1.print();
	list1.insertion(4);
	list1.deletion(4);

	list1.insertion(20);

	list1.insertion(6);
	list1.print();

	return 0;

}



