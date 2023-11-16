#include<iostream>
#include<stdlib.h>
using namespace std;

template<class t>
class average
{
    private:
        t math;
        t science;
        t english;
        t hindi;
    public:
        average(t m,t s,t e,t h);
        t avg();
};

template<class t>
average<t>::average(t m,t s,t e,t h)
{
    math=m;
    english=e;
    hindi=h;
    science=s;
}

template<class t>
t average<t>::avg()
{
    t total=math+english+hindi+science;
    return total/4;
}

int main()
{
    average<float> avg(35.7,57.53,75.55,86.57);
    cout<<avg.avg();

    return 0;
}