#include<iostream>
using namespace std;

/*int binsearch(int *arr[10],int key)
{
    int l,h=9,mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            cout<<"element found at "<<mid;
            return 0;
        }
        else if( key<arr[mid])
        {
            l=mid+1;
        }
        else{h=mid-1;}
    }
    cout<<"element not found";
    return 0;
}*/

int main()
{
    int key;
    int arr[10]={2,3,7,8,23,34,45,57,78,78,};
    cout<<"enter the key to be searched:";
    cin>>key;
    
    int l=0,h=9,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            cout<<"element found at "<<mid;
            return 0;
        }
        else if( key<arr[mid])
        {
            h=mid-1;
        }
        else if(key>arr[mid])
        {l=mid+1;}
    }
    cout<<"element not found";
    return 0;
}