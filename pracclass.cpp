#include<iostream>
using namespace std;

class rectangle
{
    private:

    int length;
    int breadth;
    
    public:

    rectangle()
    {
        length=1;
        breadth=1;
    }
    rectangle(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    rectangle(rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
   /* rectangle r;    //without using pointer
    r.length=20;
    r.breadth=8;
    cout<<r.area()<<endl;
    cout<<r.perimeter();

    rectangle *ptr;     //object using ptr
    ptr=new rectangle;
    ptr->length=10;
    ptr->breadth=50;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter();*/

    /*rectangle *ptr,r1,r2(20,4),r3(r2);
    ptr=new rectangle(50,3);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
    cout<<ptr->area();*/

    rectangle rect[2];//={{2,3},{35,10}};
    rect[0]={6,4};
    rect[1]={rect[0]};
    cout<<rect[0].area()<<endl;
    cout<<rect[1].area();

    return 0;
}