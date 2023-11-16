//program to find multiplication of matrices

#include<iostream>

using namespace std;
//function to multiply
void multimatrix()
{
    int r1,c1,r2,c2;
    
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
        cout<<endl;
    }
    
    //taking elements for matrix 2;
    
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"enter the element "<<i+1<<j+1<<":";
            cin>>mat2[i][j];
        }
        cout<<endl;
    }

    //multiplying matrix
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            multi[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                multi[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    //displayig multiplied matrix
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }

    
    
}

/*int main()

{
    multimatrix();   
    return 0;

}*/