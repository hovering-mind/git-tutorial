#include<iostream>
#include<string>

using namespace std;
using std::string;

int main()
{
    string str[3]={"hello","world","fuck you"};
    for(int i=0;i<3;i++)
    {
        cout<<str[i]<<' ';
    }
    return 0;


}