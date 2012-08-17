#include"stdafx.h"

#include"iostream"

using namespace std ;

void sphere();

int main()
{
 sphere();
 
 } 
 
 void sphere(){
      double radious;
      cout<<"Please input radious:";
      cin>>radious;
      if(radious<0) return;
	  cout<<"The result is "<<radious*radious*3.14*4<<"\n";  
	  
	  }
   	  


