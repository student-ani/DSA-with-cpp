#include<iostream>
using namespace std;
void findUnique(int *arr, int n)
{
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    cout<<ans;
   // return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findUnique(arr, n);
    //cout<<a<<endl;
}