// 1. Write a program in C++ to find the first 10 natural numbers.
// Sample output:
// The natural numbers are:
// 1 2 3 4 5 6 7 8 9 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){

//         cout<<i<<" ";
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
    
//    string name;
//    cout<<"enter your name"<<endl;
//    cin>>name;
//    cout<<"your name is "<<name<<endl;

//    int count=0;
//    for(int i=0;name[i]!='\0';i++){
//     count++;
//    }
   
// cout<<"length of your name is "<<count<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the name "<<endl;
//     string str;
//     cin>>str;
    
//     int n=str.size();

//     int s=0;
//     int e=n-1;

//     while(s<e){
//         swap(str[s++],str[e--]);
//     }

//     cout<<str;



//     return 0;
// }

// // #include<iostream>
// // using namespace std;

// // int main(){

// //     string str;
// //     cout<<" enter the word ";
// //     cin>>str;

// //     int n=str.size();
// //     int s=0;
// //     int e=n-1;

// //     while(s<=e){
// //         if(str[s] != str[e])
// //         return 0;
// //         else{
// //             s++;
// //             e--;
// //         }
// //     }

// //     cout<<"palindrome or not "<< str<<endl;

// //     return 0;

// // }

// #include<iostream>
// using namespace std;

// int getchar

// int main(){
//      string s;
//      cin>>s;



//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     string str;
//     cout<<"enter the string :- ";
//     cin>>str;

//     int n;



  

    

// }


#include<iostream>
using namespace std;

int main(){
    cout<<"enter the name "<<endl;
    bool palindrome=1;
    string str;
    cin>>str;
    
    int n=str.size();

    int s=0;
    int e=n-1;

    while (s<=e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
        

         cout<<"palindrome or not : "<<palindrome<<endl;
   
     

    return 0;
}
