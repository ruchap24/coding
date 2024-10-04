// #include<iostream>
// using namespace std;
// union stu
// {
//     int roll;
//     char name[20];
//     float marks;
// };
// int main()
// {
//     union stu s;
//     cout<<"enter student roll number: ";
//     cin>>s.roll;
//     cout<<"enter student name: ";
//     cin>>s.name;
//     cout<<"enter student marks: ";
//     cin>>s.marks;
//     cout<<s.roll<<endl<<s.name<<endl<<s.marks;
//     return 0;
// }
#include<iostream>
using namespace std;
union stu
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    union stu s;
    cout<<"enter student roll number: ";
    cin>>s.roll;
    cout<<"roll number "<<s.roll<<endl;
    cout<<"enter student name: ";
    cin>>s.name;
    cout<<"student name "<<s.name<<endl;
    cout<<"enter student marks: ";
    cin>>s.marks;
    cout<<"marks "<<s.marks<<endl;
    return 0;
}