#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student
{
    string name;
    string id;
    int age;
    string course;

    float subject1;
    float subject2;
    float subject3;
    float average;

    bool registered;
};

vector<Student> students;

//==============================
// Register Student
//==============================

void registerStudent()
{
    Student s;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Student ID: ";
    getline(cin, s.id);

    cout << "Enter Age: ";
    cin >> s.age;

    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, s.course);

    s.subject1 = 0;
    s.subject2 = 0;
    s.subject3 = 0;
    s.average = 0;

    s.registered = true;

    students.push_back(s);

    cout << "\nStudent Registered Successfully.\n";
}

//==============================
// Check Registration
//==============================

void checkRegistration()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    bool found = false;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].name==search)
        {
            found=true;

            if(students[i].registered)
                cout<<"\nStudent is Registered.\n";
            else
                cout<<"\nStudent is Withdrawn.\n";

            break;
        }
    }

    if(!found)
        cout<<"\nStudent Not Found.\n";
}

//==============================
// Withdraw Student
//==============================

void withdrawStudent()
{
    string search;

    cin.ignore();

    cout<<"\nEnter Student Name: ";
    getline(cin,search);

    bool found=false;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].name==search)
        {
            students[i].registered=false;

            cout<<"\nStudent Withdrawn Successfully.\n";

            found=true;

            break;
        }
    }

    if(!found)
        cout<<"\nStudent Not Found.\n";
}

//==============================
// Restore Student
//==============================

void restoreStudent()
{
    string search;

    cin.ignore();

    cout<<"\nEnter Student Name: ";
    getline(cin,search);

    bool found=false;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].name==search)
        {
            students[i].registered=true;

            cout<<"\nStudent Restored Successfully.\n";

            found=true;

            break;
        }
    }

    if(!found)
        cout<<"\nStudent Not Found.\n";
}
//==============================
// Update Student
//==============================

void updateStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    bool found = false;

    for(int i=0; i<students.size(); i++)
    {
        if(students[i].name == search)
        {
            cout << "\nEnter New Age: ";
            cin >> students[i].age;

            cin.ignore();

            cout << "Enter New Course: ";
            getline(cin, students[i].course);

            cout << "\nStudent Updated Successfully.\n";

            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found.\n";
}

//==============================
// Assign Marks
//==============================

void assignMarks()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    bool found = false;

    for(int i=0; i<students.size(); i++)
    {
        if(students[i].name == search)
        {
            cout << "Enter Subject 1 Mark: ";
            cin >> students[i].subject1;

            cout << "Enter Subject 2 Mark: ";
            cin >> students[i].subject2;

            cout << "Enter Subject 3 Mark: ";
            cin >> students[i].subject3;

            students[i].average =
            (students[i].subject1 +
             students[i].subject2 +
             students[i].subject3) / 3;

            cout << "\nMarks Added Successfully.\n";
            cout << "Average = " << students[i].average << endl;

            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found.\n";
}

//==============================
// Search Student
//==============================

void searchStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    bool found = false;

    for(int i=0; i<students.size(); i++)
    {
        if(students[i].name == search)
        {
            cout << "\nStudent Found.\n";
            cout << "Name : " << students[i].name << endl;
            cout << "Course : " << students[i].course << endl;
            cout << "Average : " << students[i].average << endl;

            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found.\n";
}

//==============================
// Display One Student
//==============================

void displayStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    bool found = false;

    for(int i=0; i<students.size(); i++)
    {
        if(students[i].name == search)
        {
            cout << "\n=========================\n";
            cout << "Student Information\n";
            cout << "=========================\n";

            cout << "Name : " << students[i].name << endl;
            cout << "ID : " << students[i].id << endl;
            cout << "Age : " << students[i].age << endl;
            cout << "Course : " << students[i].course << endl;

            cout << "Subject 1 : " << students[i].subject1 << endl;
            cout << "Subject 2 : " << students[i].subject2 << endl;
            cout << "Subject 3 : " << students[i].subject3 << endl;

            cout << "Average : " << students[i].average << endl;

            if(students[i].registered)
                cout << "Status : Registered\n";
            else
                cout << "Status : Withdrawn\n";

            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found.\n";
}

//==============================
// Display All Students
//==============================

void displayAllStudents()
{
    if(students.size()==0)
    {
        cout << "\nNo Students Registered.\n";
        return;
    }

    cout << "\n========== STUDENT LIST ==========\n";

    for(int i=0; i<students.size(); i++)
    {
        cout << "\nStudent " << i+1 << endl;

        cout << "Name : " << students[i].name << endl;
        cout << "ID : " << students[i].id << endl;
        cout << "Age : " << students[i].age << endl;
        cout << "Course : " << students[i].course << endl;
        cout << "Average : " << students[i].average << endl;

        if(students[i].registered)
            cout << "Status : Registered\n";
        else
            cout << "Status : Withdrawn\n";
    }
}
//==============================
// Count Students
//==============================

void countStudents()
{
    cout << "\nTotal Students : " << students.size() << endl;

    int count = 0;

    for(int i=0; i<students.size(); i++)
    {
        if(students[i].registered)
            count++;
    }

    cout << "Registered Students : " << count << endl;
    cout << "Withdrawn Students : " << students.size() - count << endl;
}

//==============================
// Change Course
//==============================

void changeCourse()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    bool found = false;

    for(int i=0; i<students.size(); i++)
    {
        if(students[i].name == search)
        {
            cout << "Enter New Course: ";
            getline(cin, students[i].course);

            cout << "\nCourse Changed Successfully.\n";

            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found.\n";
}

//==============================
// Highest Average
//==============================

void highestAverage()
{
    if(students.size()==0)
    {
        cout << "\nNo Students.\n";
        return;
    }

    int highest = 0;

    for(int i=1;i<students.size();i++)
    {
        if(students[i].average > students[highest].average)
            highest = i;
    }

    cout << "\nHighest Average Student\n";
    cout << "Name : " << students[highest].name << endl;
    cout << "Average : " << students[highest].average << endl;
}

//==============================
// Lowest Average
//==============================

void lowestAverage()
{
    if(students.size()==0)
    {
        cout << "\nNo Students.\n";
        return;
    }

    int lowest = 0;

    for(int i=1;i<students.size();i++)
    {
        if(students[i].average < students[lowest].average)
            lowest = i;
    }

    cout << "\nLowest Average Student\n";
    cout << "Name : " << students[lowest].name << endl;
    cout << "Average : " << students[lowest].average << endl;
}

//==============================
// Passed Students
//==============================

void passedStudents()
{
    cout << "\n===== PASSED STUDENTS =====\n";

    bool found = false;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].average >= 50)
        {
            cout << students[i].name
                 << "  Average : "
                 << students[i].average
                 << endl;

            found = true;
        }
    }

    if(!found)
        cout << "No Passed Students.\n";
}

//==============================
// Failed Students
//==============================

void failedStudents()
{
    cout << "\n===== FAILED STUDENTS =====\n";

    bool found = false;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].average < 50)
        {
            cout << students[i].name
                 << "  Average : "
                 << students[i].average
                 << endl;

            found = true;
        }
    }

    if(!found)
        cout << "No Failed Students.\n";
}

//==============================
// Overall Class Average
//==============================

void classAverage()
{
    if(students.size()==0)
    {
        cout << "\nNo Students.\n";
        return;
    }

    float sum = 0;

    for(int i=0;i<students.size();i++)
    {
        sum += students[i].average;
    }

    cout << "\nClass Average = "
         << sum / students.size()
         << endl;
}

//==============================
// Delete Student
//==============================

void deleteStudent()
{
    string search;

    cin.ignore();

    cout << "\nEnter Student Name: ";
    getline(cin, search);

    bool found = false;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].name == search)
        {
            students.erase(students.begin()+i);

            cout << "\nStudent Deleted Successfully.\n";

            found = true;
            break;
        }
    }

    if(!found)
        cout << "\nStudent Not Found.\n";
}

//==============================
// Delete All Students
//==============================

void deleteAllStudents()
{
    students.clear();

    cout << "\nAll Student Records Deleted Successfully.\n";
}

//==============================
// Display Students By Course
//==============================

void studentsByCourse()
{
    string c;

    cin.ignore();

    cout << "\nEnter Course Name: ";
    getline(cin, c);

    bool found = false;

    cout << "\nStudents in " << c << endl;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].course == c)
        {
            cout << students[i].name << endl;
            found = true;
        }
    }

    if(!found)
        cout << "No Students Found.\n";
}
//==============================
// Main Function
//==============================

int main()
{
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "      STUDENT MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Register Student\n";
        cout << "2. Check Registration\n";
        cout << "3. Withdraw Student\n";
        cout << "4. Restore Student\n";
        cout << "5. Update Student\n";
        cout << "6. Assign Marks\n";
        cout << "7. Search Student\n";
        cout << "8. Display One Student\n";
        cout << "9. Display All Students\n";
        cout << "10. Count Students\n";
        cout << "11. Change Course\n";
        cout << "12. Highest Average\n";
        cout << "13. Lowest Average\n";
        cout << "14. Passed Students\n";
        cout << "15. Failed Students\n";
        cout << "16. Overall Class Average\n";
        cout << "17. Delete Student\n";
        cout << "18. Delete All Students\n";
        cout << "19. Display Students By Course\n";
        cout << "20. Exit\n";
        cout << "=====================================\n";
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
                restoreStudent();
                break;

            case 5:
                updateStudent();
                break;

            case 6:
                assignMarks();
                break;

            case 7:
                searchStudent();
                break;

            case 8:
                displayStudent();
                break;

            case 9:
                displayAllStudents();
                break;

            case 10:
                countStudents();
                break;

            case 11:
                changeCourse();
                break;

            case 12:
                highestAverage();
                break;

            case 13:
                lowestAverage();
                break;

            case 14:
                passedStudents();
                break;

            case 15:
                failedStudents();
                break;

            case 16:
                classAverage();
                break;

            case 17:
                deleteStudent();
                break;

            case 18:
                deleteAllStudents();
                break;

            case 19:
                studentsByCourse();
                break;

            case 20:
                cout << "\nThank You for Using the Student Management System.\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    }
    while(choice != 20);

    return 0;
}