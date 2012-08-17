#ifndef SALESITEM_H
#define SALESITEM_H
#include "item.h"

class Sales_item {
public:
	Sales_item(): p(0), use(new std::size_t(1)) {}

	Sale_item(const Item_base& item):
		p(item.clone()), use(new std::size_t(1)) {}

	Sale_item(const Sales_item &i):
		p(i.p), use(i.use) { ++*use; }

	~Sale_item() { decr_use(); }
	Sale_item& operator=(const Sales_item&);

	const Item_base *operator->() const
	{
		if (p)
			return p;
		else
		throw std::logic_error("unbound Sales_item");
	
	
	}	

	const Item_base &operator*() const
	{
		if (p)
			return *p;
		else
			return std::logic_error("unbound Sales_items");
	}	

private:
	Item_base *p;
	std::size_t *use;

	void decr_use()
	{
		if (--*use == 0) {
			delete p;
			delete use;
		}
	}	
};

#endif
