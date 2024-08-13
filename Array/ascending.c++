#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    int arr[5] = {5,4,0,2,1};
    for(int i=0; i<5; i++)
    {
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        } else {
            
        }
        i++;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}