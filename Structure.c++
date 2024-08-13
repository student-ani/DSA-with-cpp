/*#include<bits/stdc++.h>
using namespace std;
struct student{
    int roll_no;
    char name;
    float marks;
    int standard;
    
};
int main()
{
    student x;
    x.roll_no = 15;
    x.name = 'A';
    x.marks = 75.5;
    x.standard = 9;
    
    cout << "Size of student struct: " << sizeof(struct student) << " bytes" << endl;
    cout << "Roll No: " << x.roll_no << endl;
    cout << "Name: " << x.name << endl;
    cout << "Marks: " << x.marks << endl;
    cout << "Standard: " << x.standard << endl;
    
    return 0;
}*/

// Structure using DMA

#include<bits/stdc++.h>
using namespace std;
struct student{
    int roll_no;
    char name;
    float marks;
    int standard;
    
};
int main()
{
    struct student *k, *l;
    k = (struct student*) malloc(sizeof(struct student));
    k -> roll_no = 2;
    k -> name = 'K';
    k -> marks = 66.2;
    k -> standard = 6;
    
    l = (struct student*) malloc(sizeof(struct student));
    l -> roll_no = 3;
    l -> name = 'G';
    l -> marks = 60.2;
    l -> standard = 7;
    
    cout<<k -> roll_no<<endl;
    cout<<k -> name <<endl;
    cout<<l -> marks<<endl;
}
