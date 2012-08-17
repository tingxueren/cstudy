#include <iostream>
#include <string.h>
using namespace std;

int stringcheck(char a[])
{
    int len = strlen(a);
    for(int i = 0; i < len/2; i++)
    {
        if(a[i] != a[len - i - 1])
        {
            return -1;
            break;
        }

    }


}


int main()
{
    char str[100];
    cout << "please input string: ";
    cin >> str;
    cout << strlen(str) << "\n" <<sizeof(str) << endl;
    int flag;
    flag = stringcheck(str);
    if(flag != (-1) )
    cout << "this is a goog string" << endl;
    else
    cout << "this is a bad string" <<endl;
    return 0;
}
