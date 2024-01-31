#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
}
}
int main(){
  
  int third[15]={2,4,5,6,4,2,3,4};
  int size=15;

  printarr(third,15);

  cout<<endl;

  int fourth[10]={0};
  int fourthsize=sizeof(fourth)/sizeof(int);
  cout<<fourthsize<<endl;

}