/*#include<iostream>
using namespace std;
class Base;
int main(){
    Base myobject(20);
    private:
    int value;
    public:
    Base(int v):value(v)
    {
        cout << "value is" << value;
    }
}*/

#include<iostream>
using namespace std;

class class1
{
    int x;
    int y;
    public:
    void set values()
    {
        x=10;
        y=20;
    }
    void get values()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
class class2
{
    public:
    class1 c1;
    void print()
    {
        c1.set values();
        c1.get values();
    }
};
int main()
{
    class c2;
    c2 print();
    c2.c1 set values();
    c2.c1 get values();

    return 0;
}
