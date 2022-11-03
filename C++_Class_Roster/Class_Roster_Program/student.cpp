
#include <iostream>
#include <string>
#include "student.hpp"


Student::Student()

{ //empty constructor sets instance variables to default values
   this->studentID = "";
   this->firstName = "";
   this->lastName = "";
   this->email = "";
   this->age = 0;
   this->degreeProgram = DegreeProgram::SOFTWARE;

   for (i = 0; i < 3; i++)
   {
      daysToCompleteArray[i] = 0;
   }
}


Student::Student(string studentId, string fName, string lName, string emailAddress,
                 int age, int daysToCompleteArray[3], DegreeProgram degreeProgram)
{//full constructors with parameters

   this->studentID = studentId;
   this->firstName = fName;
   this->lastName = lName;
   this->email = emailAddress;
   this->age = age;

   this->daysToCompleteArray[0] = daysToCompleteArray[0];
   this->daysToCompleteArray[1] = daysToCompleteArray[1];
   this->daysToCompleteArray[2] = daysToCompleteArray[2];

   this->degreeProgram = degreeProgram;
}

//getters or accessors
string Student::getStudentID()
{
   return studentID;
}

string Student::getFirstName()
{
   return firstName;
}

string Student::getLastName()
{
   return lastName;
}

string Student::getEmail()
{
   return email;
}

int Student::getAge()
{
   return age;
}

int *Student::getDaysToCompleteArray()
{
   return daysToCompleteArray;
}

DegreeProgram Student::getDegreeProgram()
{
   return degreeProgram;
}

//setters: each one takes in a parameter and returns void
void Student::setStudentID(string studentId) {
    this->studentID = studentId;

}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;

}

void Student::setLastName(string lastName) {
    this->lastName = lastName;

}

void Student::setEmail(string emailAddress) {
    this->email = emailAddress;

}

void Student::setDaysToCompleteArray(int daysToCompleteArray[])
{
   for (i = 0; i < 3; i++)
      this->daysToCompleteArray[i] = daysToCompleteArray[i];
}

void Student::setAge(int studentAge)
{
   this->age = studentAge;
  
}

void Student::setDegreeProgram(DegreeProgram degreeToSet)
{
   this->degreeProgram = degreeToSet;
}

//print method that shows all fields
void Student::print()
{
   cout << studentID << "\t";
   cout << "First Name: " << firstName << "\t";
   cout << "Last Name: " << lastName << "\t";
   cout << "Age: " << age << "\t";
   cout << "Days Left In Courses: { " << daysToCompleteArray[0] << ", " << daysToCompleteArray[1] << ", " << daysToCompleteArray[2] << "}\t ";
   switch ((degreeProgram))
   {
   case 0: //security
      cout << "Degree Program: SECURITY" << endl;
      break;
   case 1: //network
      cout << "Degree Program: NETWORK" << endl;
      break;
   case 2: //software
      cout << "Degree Program: SOFTWARE" << endl;
      break;
   }
}

//destructors
Student::~Student()
{
}
#include "student.hpp"
