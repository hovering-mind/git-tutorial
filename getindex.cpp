#include<iostream>
using namespace std;

int main()
{
    int arr[6]={6,8,55,4,5,6,},indx[2];
    int add=9,sum=0;
    for(int i=0;i<5;i++)
    {
        if(sum==add)
        {
            break;
        }
        sum=arr[i];
        for(int j=i+1;j<6;j++)
        {
            if(sum<add)
            {
            sum+=arr[j];
            }
            if(sum==add)
            {
                indx[0]=i;
                indx[1]=j;
                break;
            }
            
        }
    }
    
        for(int i=0;i<2;i++)
        {
            cout<<indx[i]<<' ';
        }
    
    return 0;
}