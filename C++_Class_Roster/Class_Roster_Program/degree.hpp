#pragma once
#include <iostream>
#include <string>

using namespace std;


    //enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.

    enum DegreeProgram{SECURITY, NETWORK, SOFTWARE};
    //there are three program types available
    
    //this string array will print labels equivalent to enumerated values
    static const string degreeStrs[] = {"SECURITY","NETWORK","SOFTWARE"};


#ifndef degree_hpp
#define degree_hpp
#include <stdio.h>
#endif /* degree_hpp */
