// count.h (for 16.52)
// 定义函数模版count计算一个vector中的某些值的出现次数
#ifndef COUNT_H
#define COUNT_H

#include <vector>
#include <algorithm>
#include <string>
#include <cstddef>
using std::vector;
using std::string;
using std::size_t;

template <typename Type>
size_t count(const vector<Type> &vec, const vector<Type> &sought)
{
	size_t result = 0;
	for (typename vector<Type>::const_iterator
			iter = sought.begin(); iter != sought.end(); ++iter)
		result += std::count(vec.begin(), vec.end(), *iter);
		
	return result;
}	

template <>
size_t count<string>(const vector<string> &vec, const vector<string> &sought)
{
	size_t result = 0;
	for (vector<string>::const_iterator
			iter = sought.begin(); iter != sought.end(); ++iter)
		result += std::count(vec.begin(), vec.end(), *iter);
		
	return result;
}	
#endif
