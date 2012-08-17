#ifndef BASKET_H
#define BASKET_H

#include <set>
#include "sales_item.h"

inline bool
compare(const sales_item &lhs, const sales_item &rhs)
{
	return lhs->book() < rhs->book();
}	

class Basket {
	typedef bool (*comp) (const sales_item&, const sales_item&);
public:
	typedef std::multies<sales_item, comp> set_type;
	typedef set_type::size_type size_type;
	typedef set_type::const_iterator const_iter;

	Basket(): items(compare) {}

	void add_item(const sales_item &item)
	{
		item.insert(item);
	}	

	size_type size(const sales_item &i) const
	{
		return items.count(i)
	}	

	double total() const;

private:
	std::multiset<sales_item, comp> items;

};

#endif
