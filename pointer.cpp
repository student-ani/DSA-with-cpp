#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    //char ch = 'A';
    int *ptr = &a;
    int **ptr1= &ptr;
    int ***ptr2=&ptr1;
    //char *e = &ch;
    //cout<<a<<": "<<c+1<<endl;
    //cout<<e<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<(**ptr1)<<endl;
    cout<<ptr2<<endl;
}