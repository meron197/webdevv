// StudentManagementSystem.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student{
    string name,id,course;
    int age=0;
    float m1=0,m2=0,m3=0,avg=0;
    bool registered=true;
};

vector<Student> students;

int findByName(const string& n){
    for(size_t i=0;i<students.size();i++)
        if(students[i].name==n) return (int)i;
    return -1;
}

void reg(){
    Student s;
    cin.ignore();
    cout<<"Name: "; getline(cin,s.name);
    cout<<"ID: "; getline(cin,s.id);
    cout<<"Age: "; cin>>s.age; cin.ignore();
    cout<<"Course: "; getline(cin,s.course);
    students.push_back(s);
    cout<<"Registered!\n";
}
void check(){
    string n; cin.ignore(); cout<<"Name: "; getline(cin,n);
    int i=findByName(n);
    if(i!=-1 && students[i].registered) cout<<"Registered\n";
    else cout<<"Not Registered\n";
}
void withdrawS(){
    string n; cin.ignore(); cout<<"Name: "; getline(cin,n);
    int i=findByName(n);
    if(i!=-1){students[i].registered=false; cout<<"Withdrawn\n";}
    else cout<<"Not found\n";
}
void restore(){
    string n; cin.ignore(); cout<<"Name: "; getline(cin,n);
    int i=findByName(n);
    if(i!=-1){students[i].registered=true; cout<<"Restored\n";}
    else cout<<"Not found\n";
}
void update(){
    string n; cin.ignore(); cout<<"Name: "; getline(cin,n);
    int i=findByName(n);
    if(i==-1){cout<<"Not found\n";return;}
    cout<<"New age: ";cin>>students[i].age;cin.ignore();
    cout<<"New course: ";getline(cin,students[i].course);
}
void marks(){
    string n;cin.ignore();cout<<"Name: ";getline(cin,n);
    int i=findByName(n); if(i==-1){cout<<"Not found\n";return;}
    cout<<"Mark1: ";cin>>students[i].m1;
    cout<<"Mark2: ";cin>>students[i].m2;
    cout<<"Mark3: ";cin>>students[i].m3;
    students[i].avg=(students[i].m1+students[i].m2+students[i].m3)/3;
}
void one(){
    string n;cin.ignore();cout<<"Name: ";getline(cin,n);
    int i=findByName(n); if(i==-1){cout<<"Not found\n";return;}
    auto&s=students[i];
    cout<<"Name:"<<s.name<<"\nID:"<<s.id<<"\nAge:"<<s.age<<"\nCourse:"<<s.course<<"\nAverage:"<<s.avg<<"\nStatus:"<<(s.registered?"Registered":"Withdrawn")<<"\n";
}
void all(){
    for(auto&s:students)
        cout<<"\n"<<s.name<<" | "<<s.id<<" | "<<s.course<<" | Avg:"<<s.avg<<" | "<<(s.registered?"Registered":"Withdrawn")<<"\n";
}
void count(){cout<<"Total Students: "<<students.size()<<"\n";}
void passed(){for(auto&s:students) if(s.avg>=50) cout<<s.name<<" "<<s.avg<<"\n";}
void failed(){for(auto&s:students) if(s.avg<50) cout<<s.name<<" "<<s.avg<<"\n";}
void highest(){
    if(students.empty()) return;
    int k=0;
    for(size_t i=1;i<students.size();i++) if(students[i].avg>students[k].avg) k=i;
    cout<<"Highest: "<<students[k].name<<" "<<students[k].avg<<"\n";
}
void lowest(){
    if(students.empty()) return;
    int k=0;
    for(size_t i=1;i<students.size();i++) if(students[i].avg<students[k].avg) k=i;
    cout<<"Lowest: "<<students[k].name<<" "<<students[k].avg<<"\n";
}
void del(){
    string n;cin.ignore();cout<<"Name: ";getline(cin,n);
    int i=findByName(n); if(i==-1)return;
    students.erase(students.begin()+i);
}
void clearAll(){students.clear(); cout<<"All records deleted.\n";}
int main(){
 int ch;
 do{
 cout<<"\n=== STUDENT MANAGEMENT SYSTEM ===\n";
 cout<<"1.Register\n2.Check Registration\n3.Withdraw\n4.Restore\n5.Update\n6.Assign Marks\n7.Display One\n8.Display All\n9.Count Students\n10.Passed\n11.Failed\n12.Highest Average\n13.Lowest Average\n14.Delete Student\n15.Delete All\n16.Exit\nChoice: ";
 cin>>ch;
 switch(ch){
 case 1: reg(); break;
 case 2: check(); break;
 case 3: withdrawS(); break;
 case 4: restore(); break;
 case 5: update(); break;
 case 6: marks(); break;
 case 7: one(); break;
 case 8: all(); break;
 case 9: count(); break;
 case 10: passed(); break;
 case 11: failed(); break;
 case 12: highest(); break;
 case 13: lowest(); break;
 case 14: del(); break;
 case 15: clearAll(); break;
 case 16: cout<<"Goodbye!\n"; break;
 default: cout<<"Invalid choice\n";
 }
 }while(ch!=16);
}
