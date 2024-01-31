#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}

void printARRAY(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[6]={1,4,0,2,3,5};
    int prr[5]={-15,4,3,7,20};


    reverse(arr,6);
    reverse(prr,5);

    printARRAY(arr,6);
    printARRAY(prr,5);
    return 0;
}