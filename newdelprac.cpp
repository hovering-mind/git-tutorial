#include<iostream>
using namespace std;

int main()
{
    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter the element"<<i+1;
        cin>>p[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"the element"<<i+1<<":"<<p[i]<<endl;
    }
    delete []p;
    p=NULL;
    if(!p)
    cout<<"delete operator worked successfully";

    return 0;
}