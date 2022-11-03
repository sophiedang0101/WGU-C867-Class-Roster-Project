#pragma once
#include <iostream>
#include <string>
#include "degree.hpp"
#include "student.hpp"

using namespace std;


class Roster {
public:

    int i;

    Roster(int studentsInRoster);
   
    
    void parseAndAdd(string row);
    void add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram DegreeProgram);
    void printAll();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    void printInvalidEmails();
    void printAverageDaysInCourse(string studentID);
    void remove(string studentID);
    Student* getStudentAt(int i);
    ~Roster();

    
private:
    Student** classRosterArray;
    int numOfStudents;
    
    
    
};


#ifndef roster_hpp
#define roster_hpp

#include <stdio.h>

#endif /* roster_hpp */
