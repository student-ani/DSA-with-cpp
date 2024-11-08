//Matrix Zigzag Column Traversal

#include<iostream>
using namespace std;
int main()
{
    // int n=3, m=3;
    // int arr[n][m];
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
        
    }
    for(int i=0; i<3; i++){
        if(i%2==0){
        for(int j=0; j<3; j++){
            cout<<arr[j][i];
        }
        } else {
            for(int j=2; j>=0; j--){
                cout<<arr[j][i];
            }
        }
    }
    // cout<<"3 X 3 matrix: "<<endl;
    // for(int i=0; i<3; i++){
    //     cout<<endl;
    //     for(int j=0; j<3; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    // }
    
    return 0;
    
}