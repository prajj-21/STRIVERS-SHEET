#include<iostream>
using namespace std;

int binarysearch(int size , int arr[],int key ){
    int s=0;
    int e=size-1;
    int m=(s+e)/2;

    while(s<=e);
    if(arr[m]==key){
        return m;
    
    if (key>arr[m])
    {
        s=m+1;
    }
    else{
        e=m-1;
    }
        m =(s+e)/2;
    }
    return -1;
}


int main(){

    int arr[]={3,5,9,17,21};

   int INDEX = binarysearch(5,arr,17);
   cout<< "index of 17 is " << INDEX;



    return 0;
}