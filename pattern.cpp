#include<iostream>
using namespace std;

void pyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        
        for(int k=0;k<i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter the number of lines:";
    cin>>n;
    pyramid(n);
    return 0;
}