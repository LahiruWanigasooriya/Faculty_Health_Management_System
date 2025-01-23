#pragma once
#include <iostream>
#include <cstring>
#include "StudentDetails.h"

using namespace std;

class StudentLinkedList
{
private:
	StudentDetails* head;
	StudentDetails* tail;
	int size;

public:
	StudentLinkedList();
	~StudentLinkedList();
	StudentDetails* searchStudentDetails(int index);
	void insertStudentDetails(int index);
	void displayStudentDetails(StudentDetails* displayDetails);
	void updatestudentHealthDetails(StudentDetails* updateDetails);
};

