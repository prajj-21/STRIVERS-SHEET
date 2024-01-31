#include<iostream>
using namespace std;


int getmin(int arr[],int n){

    int min= INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    } 

    return min;
}

int getmax(int arr[],int n){

    int max= INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    } 

    return max;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
//taking input in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    cout<<endl;

    cout<<"max value is "<<getmax(arr,size)<<endl;
    cout<<"max value is "<<getmin(arr,size)<<endl;

    return 0;
}