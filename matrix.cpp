#include<iostream>
using namespace std;
int main()

{
    int r1,c1,r2,c2;
    cout<<"fuck it";
    //taking rows and column for matrix 1

    do
    {
       cout<<"Enter the row and column for matrix 1:";
        cin>>r1>>c1;
    
        ////taking rows and column for matrix 2

        cout<<"<Enter the row and column for matrix 2:";
        cin>>r2>>c2;
    } while (c1!=r2);
    int mat1[r1][c1],mat2[r2][c2],multi[r1][c2];
    //taking elements for matrix 1;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"enter the element "<<i+1<<j+1<<":";
            cin>>mat1[i][j];
        }
    }
    //taking elements for matrix 2;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"enter the element "<<i+1<<j+1<<":";
            cin>>mat2[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;

}