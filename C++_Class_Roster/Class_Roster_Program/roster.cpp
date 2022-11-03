
#include <iostream>
#include <iomanip>
#include <string>
#include "roster.hpp"

Roster::Roster(int studentsInRoster)
{

   classRosterArray = new Student *[studentsInRoster];
   numOfStudents = studentsInRoster;

   //set each element in classRosterArray to point to nullptr
   for (i = 0; i < studentsInRoster; i++)
   {
      classRosterArray[i] = nullptr;
   }
}

void Roster::parseAndAdd(string row)
{
   //parse through each student string, extract substrings between commas
    

   //get studentID, and assign it to a temp variable

   int rightLimit = row.find(","); //parse through strings to find commas

   string studentID = row.substr(0, rightLimit);

   //get student first name

   int leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   string firstName = row.substr(leftLimit, rightLimit - leftLimit);

   //get student last name

   leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   string lastName = row.substr(leftLimit, rightLimit - leftLimit);

   //get student email address

   leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   string email = row.substr(leftLimit, rightLimit - leftLimit);

   //get student's age

   leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   int age = stoi(row.substr(leftLimit, rightLimit - leftLimit)); //stoi = string to integer function

   //get daysInCourse1
   leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   int daysInCourse1 = stoi(row.substr(leftLimit, rightLimit - leftLimit));

   //get daysInCourse2
   leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   int daysInCourse2 = stoi(row.substr(leftLimit, rightLimit - leftLimit));

   //get daysInCourse3
   leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   int daysInCourse3 = stoi(row.substr(leftLimit, rightLimit - leftLimit));

   //get degree program
   leftLimit = rightLimit + 1;

   rightLimit = row.find(",", leftLimit);

   DegreeProgram degreeProgram;

   string degreeStrs = row.substr(leftLimit, rightLimit - leftLimit);

   if (degreeStrs == "SECURITY")
   {

      degreeProgram = DegreeProgram::SECURITY;
   }
   else if (degreeStrs == "NETWORK")
   {

      degreeProgram = DegreeProgram::NETWORK;
   }
   else if (degreeStrs == "SOFTWARE")
   {

      degreeProgram = DegreeProgram::SOFTWARE;
   }

   add(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

//this add method sets the parsed values from parseAndAdd method, and updates the roster
void Roster::add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
   int i;

   int daysToCompleteArray[3]; //create array
   daysToCompleteArray[0] = daysInCourse1;
   daysToCompleteArray[1] = daysInCourse2;
   daysToCompleteArray[2] = daysInCourse3;

   Student *student = new Student(studentID, firstName, lastName, email, age, daysToCompleteArray, degreeProgram);

   for (i = 0; i < numOfStudents; i++)
   {
      if (classRosterArray[i] == nullptr)
      {
         classRosterArray[i] = student;
         break;
      }
   }
}

/*method removes students from the roster by student ID. if the studentID doesn't exist,
print error message indicating student was not found.*/
void Roster::remove(string studentID)
{

   cout << "Removing student with ID: " << studentID << "\n";

   for (i = 0; i < numOfStudents; ++i)
   {
      if (classRosterArray[i]->getStudentID() == studentID)
      {
         delete classRosterArray[i];
         for (int j = i; j < numOfStudents - 1; j++)
         {
            classRosterArray[j] = classRosterArray[j + 1];
         }
         classRosterArray[numOfStudents - 1] = nullptr;
         numOfStudents--;
         return;
      }
   }

   cout << "Student with the ID: " << studentID << " was not found." << endl;
}



//method that prints a complete tab-seperated list of student data in a required format stated in PA requirements.
//method loops through all the students and call the print() function for each student.
void Roster::printAll()
{
   cout << endl;
   for (i = 0; i < numOfStudents; ++i)
   {
      classRosterArray[i]->print();
   }
}

//method prints average days in course
void Roster::printAverageDaysInCourse(string studentID)
{

   for (i = 0; i < numOfStudents; i++)
   {
      if (studentID == classRosterArray[i]->getStudentID())
      {
         string sName = classRosterArray[i]->getFirstName() + " " + classRosterArray[i]->getLastName();
         int avgNumOfDays = ((classRosterArray[i]->getDaysToCompleteArray()[0] + classRosterArray[i]->getDaysToCompleteArray()[1] + classRosterArray[i]->getDaysToCompleteArray()[2]) / 3.0);
         cout << "Student ID: " << studentID << ", average days in course: " << avgNumOfDays << endl;
      }
   }

   return;
}

//method verifies student email addresses and shows all invalid email addresses to the user.
//a valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
void Roster::printInvalidEmails()
{
   cout << endl
        << "Invalid emails list includes: " << endl;
   for (i = 0; i < numOfStudents; i++)
   {
      string studentEmail = classRosterArray[i]->getEmail();
      if ((studentEmail.find("@") == string::npos || studentEmail.find(".") == string::npos) || (studentEmail.find(" ") != string::npos))
      {

         cout << studentEmail << " - is invalid. " << endl;
      }
   }
}

//method to print out student info for a degree program specified by an enumerated type.
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
   cout << "Students in the software degree program: " << endl;

   for (i = 0; i < numOfStudents; i++)
   {
      DegreeProgram tempProgram = classRosterArray[i]->getDegreeProgram();
      if (tempProgram == degreeProgram)
      {
         classRosterArray[i]->print();
      }
   }
}

Student *Roster::getStudentAt(int i)
{
   return classRosterArray[i];
}

//destructor
Roster::~Roster()
{

   for (i = 0; i < numOfStudents; i++)
   {
      if (classRosterArray[i] != nullptr)
      {
         delete classRosterArray[i];
      }
   }
   delete[] classRosterArray;
}

#include "roster.hpp"
