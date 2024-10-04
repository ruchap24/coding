#include<iostream>
using namespace std;
struct stu
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct stu s;
    cout<<"enter student roll number: ";
    cin>>s.roll;
    cout<<"enter student name: ";
    cin>>s.name;
    cout<<"enter student marks: ";
    cin>>s.marks;
    cout<<s.roll<<endl<<s.name<<endl<<s.marks;
    return 0;
}