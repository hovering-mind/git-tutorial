#include<iostream>
using namespace std;
void chkpalind(int num)
{
    int rev,org=num,sum=0;
    while(num>0)
    {
        rev=num%10;
        num=num/10;
        sum=sum*10+rev;
    }
    if(sum==org)
    {
        cout<<"the number is palindrome."<<endl;
        cout<<sum;

    }
    else{
        cout<<"not palindrome."<<endl;
        cout<<sum;
    }
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    chkpalind(n);
    return 0;
}