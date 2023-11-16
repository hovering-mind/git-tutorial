#include<iostream>
using namespace std;

int missingnum(int arr[],int n)
{
    int total=n*(n+1)/2;
    for(int i=0;i<n-1;i++)
    {
        total-=arr[i];
    }
    return total;
}

int main()
{
    int arr[]={3,6,7,5,4,1,2,8},n=9;
    cout<<"the missing number is:"<<missingnum(arr,n);
    return 0;
}