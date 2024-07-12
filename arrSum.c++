#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        count+=arr[i];
    }
    cout<<count;
}