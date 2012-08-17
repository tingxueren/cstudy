#include <iostream>
#include "basket.h"
#include "sales_item.h"
using namespace std;

int main()
{
	Basket basket;
	Sales_item item1(Bulk_item("7-115-14554-7", 99, 20, 0.2));
	Sales_item item2(Item_base("7-115-14554-8", 39));
	Sales_item item3(Lds_item("7-115-14554-9", 50, 200, 0.2));
	Sales_item item4(Bulk_item("7-115-14554-7", 99, 20, 0.2));

	basket.add_item(item1);
	basket.add_item(item2);
	basket.add_item(item3);
	basket.add_item(item4);

	cout << basket.total() << endl;
	return 0;

}	
