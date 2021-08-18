#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stuid, char stname[20]) {
  studentId = stuid;
  strcpy(name, stname);
}

// Display StudentId and Name
void Student::display() 
{

  cout<< "student id: "<< studentId<<endl;
  cout<<"name: "<< name<<endl;
  
}
