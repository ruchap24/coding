#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"enter user choice:";
    cin>>ch;
    switch(ch)
    {
        case 0:cout<<"sunday";
        break;
        case 1:cout<<"monday";
        break;
        case 2:cout<<"saturday";
        break;
        case 3:cout<<"tuesday";
        break;
        case 4:cout<<"wednesday";
        break;
        case 5:cout<<"thursday";
        break;
        case 6:cout<<"friday";
        break;
        default: cout<<"invalid choise";
    }
    return 0;
}