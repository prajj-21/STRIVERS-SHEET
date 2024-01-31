// If-else is one of the ways to implement them.
// You are given two numbers 'a'and 'b'
// Compare the numbers and print the relation.
// Print "smaller", "greater" or "equal" when 'a' is smaller than 'b', greater than 'b', or equal to 'b' respectively.


#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    if(a>b){
        cout<<"greater";
    }

    else if (a<b)
    {
        cout<<"smaller";
    }
    else{
        cout<<"equal";
    }
    
    return 0;
}




// string compareIfElse(int a, int b) {

//     if (a > b)
//         return "greater";
//     else if (a < b)
//         return "smaller";
//     else
//         return "equal";

// }