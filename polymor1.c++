#include<iostream>
using namespace std;
class shape{
    public:
    int height,width;
    shape(int height,int width)
    {
        this->height=height;
        this->width=width;
    }
    virtual int area()
    {
        cout<<"the area of base class:"<<endl;
    }
};
class rectangle:public shape{
   public:
   rectangle(int height=0,int width=0):shape(height,width)
   {

   }
   int area()
   {
    cout<<"the area of rectangle:"<<endl;
    return(height*width);
   }
};
class triangle:public shape{
    public:
    triangle(int height=0,int width=0):shape(height,width)
    {

    }
    int area()
    {
        cout<<"the area of triangle:"<<endl;
        return(height*width)/2;
    }
};
int main()
{
    shape *s;
    rectangle r1(2,3);
    triangle t1(4,6);
    s=&r1;
    int rect=s->area();
    cout<<"the final area of rectangle:"<<rect<<endl;
    s=&t1;
    int tri=s->area();
    cout<<"the final area of triangle:"<<tri<<endl;
    return 0;
}