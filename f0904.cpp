
#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class Date{
      int year, month, day;
      void init();
public:
      Date(const string& s);
      Date(int year = 2000, int month = 1, int day = 1);
      bool isLeapYear()const;
      friend ostream& operator<<(ostream& o,const Date& d);

};
void Date::init(){
     if(year > 5000 || year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
     exit (1);
}
Date::Date(const string& s){
      year = atoi(s.substr(0,4).c_str());
      month = atoi(s.substr(5,2).c_str());
      day = atoi(s.substr(8,2).c_str());
      init();

}
Date::Date(int y,int m,int d){
      year = y,month = m, day = d;
      init();

}
bool Date::isLeapYear()const{
     return (year % 4 == 0&&year % 100 != 0) || (year %400 == 0 );


}
ostream& operator << (ostream& o,const Date &d){
    o<<setfill('0')<< setw(4)<<d.year<<'-'<<setw(2)<<d.month<<'-';
    return o<< setw(2)<<d.day<<'\n'<<setfill(' ');

}
int main(){
    Date c("2005-12-28");
    Date d(2003,12,6);
    Date e(2002);
    Date f(2002,12);
    Date g;
    cout<<c<<d<<e<<f<<g;
}
