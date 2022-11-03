
#include <iostream>
#include <string>
#include "roster.hpp"



using namespace std;

int main(){


    const string studentData[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Sophie,Dang,sdang10@wgu.edu,26,30,45,50,SOFTWARE"
    };
    
    const int numOfStudents = 5;
    
    
    cout << "Course Title: Scripting & Programming - Applications" << endl;
    cout << "Programming Language: C++" << endl;
    cout << "Student Name: Sophie Dang" << " and Student ID: 009522974 " << endl;
    
    
    Roster classRoster(numOfStudents);
    
    for (int i = 0; i < numOfStudents; i++) {
        classRoster.parseAndAdd(studentData[i]);
    }
    
    cout << endl;
    
    //print all students from the roster.
    cout << "Displaying all students: " << endl;
    classRoster.printAll();
    
    cout << endl;
    
    classRoster.printInvalidEmails();
    
    cout << endl;
    
    cout << "Average days in course for each student: " << endl;
    for(int i = 0; i < numOfStudents;i++){
        classRoster.printAverageDaysInCourse(classRoster.getStudentAt(i)->getStudentID());
    }
    
    cout << endl;
    
    //print students enrolled in software degree program
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    
    cout << endl;
    
    //delete a student from the class roster.
    classRoster.remove("A3");
    
    cout << endl;
    
    //print all student data agian.
    classRoster.printAll();
    
    cout << endl;
    
    //remove student A3 from Roster again.
    classRoster.remove("A3");
    
    cout << endl;
    
    return 0;
}







         /*                                           References
         
         Vahid,F.Introduction to C++.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,F.Variables/Assignments.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,F.Branches.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,F.Loops.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,F.Arrays/Vectors.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,F.User-Defined Functions. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,F.Objects and Classes.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,Pointers.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Vahid,F.Streams.zyBooks. Programming in C++.https://learn.zybooks.com/zybook/WGUC867v4.
         
         Buchalka, T. Mitropoulos,F.Beginning C++ Programming - From Beginner to Beyond.https://wgualumni.udemy.com
         
        */
