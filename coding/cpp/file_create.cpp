#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream newfile("C:\\Users\\rucha\\Desktop\\coding\\cpp.txt");
    
    cout<<"file created.....";

    newfile.close();
    return 0;
}