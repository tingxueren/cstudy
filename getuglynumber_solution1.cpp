#include <iostream>
using namespace std;

int IsUgly(int num)
{
    while(num % 2 == 0)
    {
        num /= 2;
    }
    while(num % 3 == 0)
    {
        num /= 3;
    }
    while(num % 5 == 0)
    {
        num /= 5;
    }
    while(num % 7 == 0)
    {
        num /= 7;
    }
    if(num == 1)
       return 1;
    else
       return 0;


}

int GetUglyNumber_Solution1(int index)
{
    if(index <= 0)
        return 0;

    int number = 0;
    int uglyFound = 0;
    while(uglyFound < index)
    {
        ++number;

        if(IsUgly(number))
        {
            ++uglyFound;
        }
    }

    return number;
}

int main() //找到规定位置的丑数
{   int time;
    cout << "请输入丑数的位置: ";
    cin >> time;
    if (time <= 0)
    {
        cout << "输入不符合要求请重新输入: ";
        cin >> time;
    }
    cout << GetUglyNumber_Solution1(time) << endl;

    return 0;

}
