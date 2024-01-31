#include<iostream>
using namespace std;
int main(){
    int arr[7]={6,3,1,5,4,3,2};
    int n=7;
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    for(int i=1;i<n;i++){
        ans=ans^i;
    }

    cout<<ans;

    return 0;
}