#include<iostream>
using namespace std;
int d=22;
void fun()
{
    int a =10;
    static int b=10;
    register int c=20;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    ++a; ++b; ++c; ++d;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}