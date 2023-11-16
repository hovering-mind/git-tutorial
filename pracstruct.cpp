#include<iostream>
using namespace std;

struct test
{
    string name;
    int marks;
};

int changemarks(struct test *ptr,int n)
{
    return ptr->marks=n;
}
int main()
{
    struct test tst={"english",50};
    cout<<changemarks(&tst,70)<<endl;
    cout<<tst.marks<<endl;

    return 0;
}