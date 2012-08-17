//===============================================
// graduatestudent.h
//===============================================
#ifndef HEADER_GRADUATESTUDENT
#define HEADER_GRADUATESTUDENT
//-----------------------------------------------
#include <iostream>
#include "student.h"
//-----------------------------------------------

class Advisor
{
     int noOfMeeting;  	
};//---------------------------------------------

class Graduatestudent : public Student
{
	Advisor advisor;
	int qualifierGrade;
public:
Graduatestudent(string pName = "noNmae"):Student(pName),qualifierGrade(0){}
  int getQualifier(){ return qualifierGrade;}
  void display()
  {
	 Student::display();
	 std::cout << " qualifierGrade=" << qualifierGrade << "\n";

	 }
	
	
};//------------------------------------------------
#endif //HEADER_GRADUATESTUDENT

