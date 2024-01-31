#include<iostream>
using namespace std;

int sumarray(int arr[],int size){

    int sum=0;
    for(int i=0;i<size;i++){
        
        sum+=arr[i];
    }
   return sum;

}


int main(){
    int n;
    cin>>n;
    int num[10];
   
    for(int i=0;i<n;i++){
        cin>>num[i];
}

cout<<"sum of the given array is "<<sumarray(num,n)<<endl;

return 0;

}
    