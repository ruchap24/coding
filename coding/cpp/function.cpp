#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
main()
{
    int a,b;
    cout<<"enter 1st no."<<endl;
cin>>a;
    cout<<"enter 2nd no."<<endl;
    cin>>b;
    cout<<"the function returned "<<add(a,b);
    return 0;

}