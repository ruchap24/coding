#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ifstream newfile("C:\\Users\\rucha\\Desktop\\coding\\cpp.txt");
    while(getline(newfile,str))
    {
        cout<<str<<endl;
    }

     newfile.close();
    return 0;
}