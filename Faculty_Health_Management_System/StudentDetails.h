#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class StudentDetails
{
public:
    StudentDetails* next;
    StudentDetails* prev;
    int index_No;
    string name;
    int age;
    string batch;
    string telephone;
    string homeAddress;
    string healthRecords;

    StudentDetails(int index);
};

