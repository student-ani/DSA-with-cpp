#include<iostream>
using namespace std;
int Square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int value=Square(n);
    cout<<"The square of "<<n<<" is "<<value;
    return 0;
}