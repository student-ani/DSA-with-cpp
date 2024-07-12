#include<iostream>
#include<math.h>
using namespace std;


int main()
{
int n;
cout<<"Enter the Number: ";
cin>>n;
int ans = 0;
int i = 0;
while(n=!0){
    int bit = n&1;
    ans = (bit * pow(10, i)) + ans;
    n = n/2;
    i++;
}
cout<<"Answer: "<<ans;
return 0;
}

/*int i = 1;
while(i<=n)
{
    int j = 1;
    while(j<=i){
        cout<<n-i+1<<" ";
        j= j+1;
    }
    cout<<endl;
    i = i+1;
}
return 0;

}*/