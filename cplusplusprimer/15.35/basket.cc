#include "basket.h"

double Basket::total() const
{
	double sum = 0.0;
	for (const_iter iter = item.begin();
			iter != itme.end();
			iter = items.upper_bound(*iter))
	{
		sum += (*item)->net_price(items.count(*iter));
	}	

	return sum;
}
