#include "StudentLinkedList.h"


StudentLinkedList::StudentLinkedList()
{
	head = NULL;
	tail = NULL;
	size = 0;
}

StudentLinkedList::~StudentLinkedList()
{
    while (head != nullptr)
    {
        StudentDetails* temp = head;
        head = head->next;
        delete temp;
    }
}

StudentDetails* StudentLinkedList::searchStudentDetails(int index)
{
    StudentDetails* current = head;
    while (current != nullptr)
    {
        if (current->index_No == index)
        {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

void StudentLinkedList::insertStudentDetails(int index)
{
    StudentDetails* temp = new StudentDetails(index);

    cout << "Please enter your details:" << endl;

    // Get student details
    cout << "Enter student name: ";
    cin >> temp->name;
    cout << "Enter student age: ";
    cin >> temp->age;
    cout << "Enter student batch: ";
    cin >> temp->batch;
    cout << "Enter telephone number 1: ";
    cin >> temp->telephone;
    cout << "Enter home address: ";
    cin >> temp->homeAddress;
    cout << endl;
    cout << "Enter health records: ";
    cin >> temp->healthRecords;
    cout << endl;
    temp->next = head;
    head = temp;
    size++;

}

void StudentLinkedList::displayStudentDetails(StudentDetails* displayDetails)
{
    cout << "Name: " << displayDetails->name << endl;
    cout << "Age: " << displayDetails->age << endl;
    cout << "Batch: " << displayDetails->batch << endl;
    cout << "Telephone: " << displayDetails->telephone << endl;
    cout << "Home Address: " << displayDetails->homeAddress << endl;
    cout << endl;
    cout << "Health Records: " << displayDetails->healthRecords << endl;
}

void StudentLinkedList::updatestudentHealthDetails(StudentDetails* updateDetails)
{
    string updatestring;
    cout << "Enter new health records:";
    cin >> updatestring;
    updateDetails->healthRecords.append(updatestring);
}
