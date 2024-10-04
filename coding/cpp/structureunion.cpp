#include<iostream>
using namespace std;
struct stu
{
    int marks; //int 4byte
    float avg; //float 4 byte
    double salary; //double 8 byte (4+4+8=16)
};
union stu2
{
    int marks;
    float avg;
    double salary; //greater member 8
};
int main()
{
    struct stu s;
    union stu2 s2;
    cout<<"structure size="<<sizeof(s)<<endl;
    cout<<"union size="<<sizeof(s2);
    return 0;
}