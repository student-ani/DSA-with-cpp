#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int rollno;
    float marks;
    void getdata()
    {
        cout<<"Enter Student details: "<<endl;
        cout<<"Enter name of student: ";
        cin>>name;
        cout<<"Enter roll no of student: ";
        cin>>rollno;
        cout<<"Enter marks of student: ";
        cin>>marks;
    }
    void putdata()
    {
        cout<<"student details are: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no is: "<<rollno<<endl;
        cout<<"Marks is: "<<marks<<endl;
    }
};
int main()
{
    student s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();

    s1.putdata();
    s2.putdata();
    s3.putdata();
    
    return 0;
}