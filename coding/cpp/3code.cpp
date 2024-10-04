#include<iostream>
using namespace std;
namespace first{
    void show()
    {
       cout<<"ankit\n";
    }
}
namespace second{
    void show()
    {
       cout<<"mankit";
    }
}
main()
{
    first::show();
    second::show();
}