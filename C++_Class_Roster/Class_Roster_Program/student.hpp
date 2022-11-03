
#pragma once
#include <iostream>
#include <string>
#include "degree.hpp"

using namespace std;

/*Requirements
contains class definition,including data members/member function declarations.
create class containing the vars: studentID,fname,lname,email,age,array of nums of days to complete each course, and degree program.*/

class Student
{

public:

    int i;
    
   //constructors

   Student(); //empty constructor

   //full constructors with provided parameters
   Student(string studentID, string firstName, string lastName, string email,
           int age, int daysToCompleteArray[3], DegreeProgram degreeProgram);

   //destructor
   ~Student();

   //accessors or getters for each instance variables from D1
   string getStudentID();
   string getFirstName();
   string getLastName();
   string getEmail();
   int getAge();
   int *getDaysToCompleteArray();
   DegreeProgram getDegreeProgram();

   //mutators or setters for each instance variables from D1. Each returns void and accepts a parameter

   void setStudentID(string studentID);
   void setFirstName(string firstName);
   void setLastName(string lastName);
   void setEmail(string email);
   void setAge(int studentAge);
   void setDaysToCompleteArray(int daysToCompleteArray[]);
   void setDegreeProgram(DegreeProgram degreeToSet);

   void print(); //print specific student data

private:
   string studentID;
   string firstName;
   string lastName;
   string email;
   int age;
   int daysToCompleteArray[3];  //num of days per class array
   DegreeProgram degreeProgram; //enumerated degree program
};

#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#endif /* student_hpp */
