#include<iostream>
using namespace std;
int main(){
     int arr[7]={4,5,6,3,4,5,3};
     int size=7;

     int ans=0;
     for(int i=0;i<size;i++){
        ans=ans^arr[i];
     }

     cout<<ans;

     

    return 0;
}