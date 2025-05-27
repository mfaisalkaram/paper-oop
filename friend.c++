#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    friend int display(person &obj);
};
int display(person &obj)
{
    cout<<"the name is:"<<obj.name<<endl;
    cout<<"the age is:"<<obj.age<<endl;
}
int main()
{
    person p1("asad",19);
    display(p1);
    return 0;
}