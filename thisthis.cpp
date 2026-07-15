#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

string name[MAX];
int id[MAX];
int age[MAX];
string course[MAX];

float mark1[MAX];
float mark2[MAX];
float mark3[MAX];
float average[MAX];

int total = 0;


// Register Student
void registerStudent()
{
    if(total == MAX)
    {
        cout << "Student list is full!\n";
        return;
    }

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name[total]);

    cout << "Enter Student ID: ";
    cin >> id[total];

    cout << "Enter Age: ";
    cin >> age[total];

    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, course[total]);


    mark1[total] = 0;
    mark2[total] = 0;
    mark3[total] = 0;
    average[total] = 0;


    total++;

    cout << "Student Registered Successfully!\n";
}


// Update Student
void updateStudent()
{
    string search;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, search);


    for(int i=0; i<total; i++)
    {
        if(name[i] == search)
        {
            cout << "Enter New Age: ";
            cin >> age[i];

            cin.ignore();

            cout << "Enter New Course: ";
            getline(cin, course[i]);

            cout << "Student Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}



// Withdraw Student
void withdrawStudent()
{
    string search;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, search);


    for(int i=0; i<total; i++)
    {
        if(name[i] == search)
        {

            for(int j=i; j<total-1; j++)
            {
                name[j]=name[j+1];
                id[j]=id[j+1];
                age[j]=age[j+1];
                course[j]=course[j+1];

                mark1[j]=mark1[j+1];
                mark2[j]=mark2[j+1];
                mark3[j]=mark3[j+1];
                average[j]=average[j+1];
            }


            total--;

            cout << "Student Withdrawn Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}



// Add Marks
void addMarks()
{
    string search;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, search);


    for(int i=0; i<total; i++)
    {
        if(name[i]==search)
        {

            cout << "Enter Programming Mark: ";
            cin >> mark1[i];


            cout << "Enter Math Mark: ";
            cin >> mark2[i];


            cout << "Enter English Mark: ";
            cin >> mark3[i];


            average[i]=(mark1[i]+mark2[i]+mark3[i])/3;


            cout<<"Average = "<<average[i]<<endl;

            return;
        }
    }

    cout<<"Student Not Found!\n";
}



// Display One Student
void displayStudent()
{
    string search;

    cin.ignore();

    cout<<"Enter Student Name: ";
    getline(cin,search);


    for(int i=0;i<total;i++)
    {
        if(name[i]==search)
        {
            cout<<"\n------ Student Information ------\n";

            cout<<"Name: "<<name[i]<<endl;
            cout<<"ID: "<<id[i]<<endl;
            cout<<"Age: "<<age[i]<<endl;
            cout<<"Course: "<<course[i]<<endl;
            cout<<"Average: "<<average[i]<<endl;

            return;
        }
    }

    cout<<"Student Not Found!\n";
}



// Display All Students
void displayAll()
{

    if(total==0)
    {
        cout<<"No Students Available\n";
        return;
    }


    cout<<"\n====== Student List ======\n";


    for(int i=0;i<total;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;

        cout<<"Name: "<<name[i]<<endl;
        cout<<"ID: "<<id[i]<<endl;
        cout<<"Age: "<<age[i]<<endl;
        cout<<"Course: "<<course[i]<<endl;
        cout<<"Average: "<<average[i]<<endl;
    }
}



// Main Function
int main()
{

    int choice;


    do
    {

        cout<<"\n==========================\n";
        cout<<" STUDENT MANAGEMENT SYSTEM\n";
        cout<<"==========================\n";

        cout<<"1. Register Student\n";
        cout<<"2. Update Student\n";
        cout<<"3. Withdraw Student\n";
        cout<<"4. Add Marks\n";
        cout<<"5. Display Student\n";
        cout<<"6. Display All Students\n";
        cout<<"7. Exit\n";


        cout<<"Enter Choice: ";
        cin>>choice;


        switch(choice)
        {

        case 1:
            registerStudent();
            break;


        case 2:
            updateStudent();
            break;


        case 3:
            withdrawStudent();
            break;


        case 4:
            addMarks();
            break;


        case 5:
            displayStudent();
            break;


        case 6:
            displayAll();
            break;


        case 7:
            cout<<"Thank You!\n";
            break;


        default:
            cout<<"Invalid Choice!\n";
        }


    }while(choice!=7);



    return 0;
}