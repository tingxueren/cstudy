#include"iostream"
#include"cmath"
using namespace std;

bool isprime(int n)
{
  int sqrtn=sqrt(n*1.0);
  for(int i=2;i<=sqrtn;++i)
  if(n%i==0) return false;
  return true;

}

int main()
{
  cout<<"求1~255中的素数:";
  int num=0;
  for (int m=1;m<=255;++m)
  {
     if(isprime(m))
     {cout<<m<<" ";
       ++num;

      if(num%5==0) cout<<"\n";
     }
   }
   cout<<endl;
}

