// #include<iostream>
// using namespace std;
// main()
// {
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     if(n>=0){
//         cout<<"given no. is possitive";
//     }
//     else{
//         cout<<"given no. is negative";
//     }
//     // getch();
// }
// #include<iostream>
// using namespace std;
// main()
// {
//     int n,m;
//     cout<<"enter two no.";
//     cin>>n>>m;
//     if(n>=0 && m>=0){
//         cout<<"no. is positive";
//     }
//     else
//     {
//     cout<<"no. is negative";
//     }
// }
#include<iostream>
using namespace std;
int main()
{
    int a,b,ch,add,sub,multi,div;
    cout<<"enter 2 no.=";
    cin>>a>>b;
    cout<<"enter choice";
    cin>>ch;
    if(ch==1)
    {
        add=a+b;
        cout<<"add"<<add; //"ya madhe je lihu te print hot as it is "
    }
    else if(ch==2)
    {
        sub=a-b;
        cout<<"sub"<<sub;
    }
    else if(ch==3)
    {
        multi=a*b;
        cout<<"multiplication="<<multi;
    }
    else{
        div=a/b;
        cout<<"divsion="<<div;
    }
    return 0;
}