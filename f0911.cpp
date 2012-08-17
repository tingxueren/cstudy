#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Person
{
      char*pName;

public:
       Person(char*pN="noName")
       {
         cout<<"Constructing"<<pN<<"\n";
         pName = new char[strlen(pN)+1];
         if(pName) strcpy(pName,pN);


       }
      ~Person()
      {
         cout<<"Destructiong"<<pName<<"\n";
         delete[] pName;

      }

};
int main()
{

    Person P1("Randy");
    Person P2;
}



