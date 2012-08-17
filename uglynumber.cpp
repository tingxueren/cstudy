#include <iostream>
using namespace std;

int isugly(int num)
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

int main()
{
    for(int i = 1; i <= 1000; i++)
    {
        if(isugly(i) == 1)
        cout << i << "is ugly number.\n";
    }
    return 0;
}
