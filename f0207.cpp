
#include"iostream"
using namespace std;

int main()
{
  cout<<"Please input a number:";
  int m;
  cin>> m;
  for(int i=2;i<m;++i)
  if (m%i==0)
     {
	   cout << m  <<"is not a prime.\n";
	   return 1;

	   }
  cout << m  << "is a prime.\n";
}
