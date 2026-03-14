#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n ;

    int count = 0;
    while(n>0){
        count++;
        n= n/10;
    }
    cout<<"No of Digit in your number are : "<<count;
    return 0;
}