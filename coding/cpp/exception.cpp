#include<iostream>
using namespace std;
int main()
{
    cout<<"execution starting..."<<endl;
    int a,b,c;
    cout<<"enter 2 no.: ";
    cin>>a>>b;
    try{
        if(b==0)
        throw b;
        // c=a/b;
        // cout<<"result: "<<c;
    }
    catch(int x)
    {
        cout<<"cant devide by "<<x;
    }
    //a or b chi value jr zero ghetli tr khalach print nhi honar mhanun try {} catch(){} vaparalay
    cout<<"result: "<<c;
    cout<<endl<<"execution ended...";
    return 0;
}