#include <iostream>
#include <string>
using namespace std;

const int MAX =  1000;

string name[MAX];
int id[MAX];
int age[MAX];
string course[MAX];

float mark1[MAX];
float mark2[MAX];
float mark3[MAX];
float average[MAX];

bool registered[MAX];

int total = 0;

// Register Student
void registerStudent()
{
    if(total == MAX)
    {
        cout << "Student List is Full!\n";
        return;
    }

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, name[total]);

    cout << "Enter Student ID: ";
    cin >> id[total];

    cout << "Enter Age: ";
    cin >> age[total];

    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, course[total]);

    registered[total] = true;

    mark1[total] = 0;
    mark2[total] = 0;
    mark3[total] = 0;
    average[total] = 0;

    total++;

    cout << "\nStudent Registered Successfully.\n";
}

// Check Registration
void checkRegistration()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    for(int i=0;i<total;i++)
    {
        if(name[i]==search && registered[i])
        {
            cout << "Student is Registered.\n";
            return;
        }
    }

    cout << "Student is NOT Registered.\n";
}

// Withdraw Student
void withdrawStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    for(int i=0;i<total;i++)
    {
        if(name[i]==search && registered[i])
        {
            registered[i]=false;
            cout << "Student Withdrawn Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

// Update Student
void updateStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    for(int i=0;i<total;i++)
    {
        if(name[i]==search && registered[i])
        {
            cout << "Enter New Age: ";
            cin >> age[i];

            cin.ignore();

            cout << "Enter New Course: ";
            getline(cin, course[i]);

            cout << "Student Updated Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

// Assign Marks
void assignMarks()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    for(int i=0;i<total;i++)
    {
        if(name[i]==search && registered[i])
        {
            cout << "Programming: ";
            cin >> mark1[i];

            cout << "Mathematics: ";
            cin >> mark2[i];

            cout << "English: ";
            cin >> mark3[i];

            average[i]=(mark1[i]+mark2[i]+mark3[i])/3;

            cout << "Average = " << average[i] << endl;

            return;
        }
    }

    cout << "Student Not Found.\n";
}

// Display One Student
void displayStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    for(int i=0;i<total;i++)
    {
        if(name[i]==search && registered[i])
        {
            cout << "\n----- Student Information -----\n";
            cout << "Name : " << name[i] << endl;
            cout << "ID : " << id[i] << endl;
            cout << "Age : " << age[i] << endl;
            cout << "Course : " << course[i] << endl;
            cout << "Average : " << average[i] << endl;
            return;
        }
    }

    cout << "Student Not Found.\n";
}

// Display All Students
void displayAllStudents()
{
    if(total==0)
    {
        cout << "No Students Registered.\n";
        return;
    }

    cout << "\n===== Student List =====\n";

    for(int i=0;i<total;i++)
    {
        if(registered[i])
        {
            cout << "\nStudent " << i+1 << endl;
            cout << "Name : " << name[i] << endl;
            cout << "ID : " << id[i] << endl;
            cout << "Age : " << age[i] << endl;
            cout << "Course : " << course[i] << endl;
            cout << "Average : " << average[i] << endl;
        }
    }
}

// Count Students
void countStudents()
{
    int count=0;

    for(int i=0;i<total;i++)
    {
        if(registered[i])
            count++;
    }

    cout << "Registered Students = " << count << endl;
}

// Search Student
void searchStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    for(int i=0;i<total;i++)
    {
        if(name[i]==search && registered[i])
        {
            cout << "Student Found.\n";
            cout << "Course : " << course[i] << endl;
            cout << "Average : " << average[i] << endl;
            return;
        }
    }

    cout << "Student Not Found.\n";
}

// Change Course
void changeCourse()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    for(int i=0;i<total;i++)
    {
        if(name[i]==search && registered[i])
        {
            cout << "Enter New Course: ";
            getline(cin, course[i]);

            cout << "Course Changed Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

// Main Function
int main()
{
    int choice;

    do
    {
        cout << "\n==============================\n";
        cout << " STUDENT MANAGEMENT SYSTEM\n";
        cout << "==============================\n";
        cout << "1. Register Student\n";
        cout << "2. Check Registration\n";
        cout << "3. Withdraw Student\n";
        cout << "4. Update Student\n";
        cout << "5. Assign Marks\n";
        cout << "6. Display Student\n";
        cout << "7. Display All Students\n";
        cout << "8. Count Students\n";
        cout << "9. Search Student\n";
        cout << "10. Change Course\n";
        cout << "11. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                registerStudent();
                break;

            case 2:
                checkRegistration();
                break;

            case 3:
                withdrawStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                assignMarks();
                break;

            case 6:
                displayStudent();
                break;

            case 7:
                displayAllStudents();
                break;

            case 8:
                countStudents();
                break;

            case 9:
                searchStudent();
                break;

            case 10:
                changeCourse();
                break;

            case 11:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    }while(choice!=11);

    return 0;
}