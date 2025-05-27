#include<iostream>
using namespace std;
class prime{
   private:
   int num;

   public:
  prime()
  {
    num=0;
  }
   int setdata(int num)
   {
     this->num=num;
   }
   int calculate()
   {
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    return count;
   }
   int display(int count)
   {
     if(count==2)
     {
        cout<<"the number is prime:"<<num<<endl;
     }
     else
    {
        cout<<"the number is not prime:"<<num<<endl;
    }
   }
};
int main()
{
   prime p1;
   p1.setdata(23);
   int count=p1.calculate();
    p1.display(count);
    return 0;
}