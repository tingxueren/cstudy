// Sales_item.hpp
// 自定义的Sales_items类的头文件
// 自定义Sales_items类,
// 添加两个public成员input和output用于读和写Sales_item对象
#ifndef SALESITEM_H
#define SALESITEM_H
#include <iostream>
#include <string>

class Sales_item {
public:
	// Sales_items对象的操作
	std::istream &input(std::istream &in);
	std::ostream &output(std::ostream &out) const;
	double avg_price() const;
	bool same_isbn(const Sales_item &rhs) const {
		return isbn == rhs.isbn;
	}

	// 默认构造函数需要初始化内置类型的数据成员
	// 这个前面不要加Sale_item():: 加上会报错
	Sales_item(): units_sold(0), revenue(0.0) {} 

private:
	std::string isbn;
	unsigned units_sold;
	double revenue;

}; // 类定义不要忘记;

#endif
