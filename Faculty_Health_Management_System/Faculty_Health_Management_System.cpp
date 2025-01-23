#include <iostream>
#include <cstring>
#include "StudentLinkedList.h"
#include "StudentDetails.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

using namespace std;

int main()
{
    StudentLinkedList studentList;

    cout << GREEN << "Welcome to the Faculty Health Management System" << RESET << endl;
    cout << endl;

    char selection;
    char choice;
    int lastFourDigits;
    do {
        cout << "Enter the last four digits of your registration number: ";
        cin >> lastFourDigits;

        StudentDetails* searchedResult = studentList.searchStudentDetails(lastFourDigits);

        if (searchedResult == nullptr) {
            cout << "Not registered" << endl;
            cout << endl;
            cout << "\t1. Add new student details" << endl;
            cout << "\t2. Exit" << endl;
            cout << "Enter your choice:";
            cin >> selection;

            switch (selection) {
            case '1':
                studentList.insertStudentDetails(lastFourDigits);
                break;
            case '2':
                cout << "Clossing session" << endl;
                break;
            default:
                cout << "Invalid choice.Closing session." << endl;
            }

        }
        else {
            studentList.displayStudentDetails(searchedResult);
            cout << endl;
            cout << "\tIf you want to add more health details press\t - 1" << endl;
            cout << "\tTo closs the session press\t - 2" << endl;
            cout << endl;
            cout << "Enter your choice:";
            cin >> selection;

            switch (selection) {
            case '1':
                studentList.updatestudentHealthDetails(searchedResult);
                cout << "Health records updated successfully." << endl;
                cout << endl;
                studentList.displayStudentDetails(searchedResult);
                break;
            case '2':
                cout << "Clossing session" << endl;
                break;
            default:
                cout << "Invalid choice.Closing session." << endl;
                break;
            }
        }
        cout << endl;
        cout << "Do you want add/check student details(Yes - y, No - n):";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');// Ignore until a newline character is found

    } while (choice == 'y' || choice == 'Y');


}

