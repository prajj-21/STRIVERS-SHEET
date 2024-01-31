#include<iostream>
using namespace std;

void sum(int arr[],int s,int size ){

    for (int  i = 0; i < size-1; i++)
    {
        for(int j=i+1;j<=size-1;j++){
           if(arr[i] + arr[j] ==  s){
            cout<<"numbers are "<<arr[i]<<"&"<<arr[j]<<"at positions "<<i<<"&"<<j<<endl;
           }
        }
    }    
}

int main(){

    int n = 6;

    int arr[6]={2,1,0,3,2,6};
    
    sum(arr,3,6);

    return 0;
}
