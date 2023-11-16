// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void jugglerSequence(int N){
        
        cout<<N<<' ';
        if(N==1);
        else if(N%2==0)
        {
            N=floor(pow(N,0.5));
            jugglerSequence(N);
        }
        else if(N%2!=0){
            N=floor(pow(N,1.5));
            jugglerSequence(N);
        }
    }
int main() {
    jugglerSequence(9);
    return 0;
}