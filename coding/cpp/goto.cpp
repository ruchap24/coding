#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter ur age:";
    cin>>age;
    if(age>=18)
    goto vote;
    else
    goto notvote;

    vote:
    cout<<"eligible";
        return 0;
    notvote:
    cout<<"not eligible";
    return 0;
}