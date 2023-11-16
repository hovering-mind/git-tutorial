#include<iostream>
using namespace std;

template <class T>
 T maxim(T x,T y)
 {
    if(x>y)
    {
        return x;
    }
    else{return y;}
 }


int main()
{
    cout<<maxim(4,6)<<endl;
    cout<<maxim(26.38,938.29);
    return 0;

}