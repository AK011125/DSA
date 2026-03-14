#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;

    int x = n;
    int rev = 0;
    while(n>0){
        int ld = n%10;
        rev = rev*10 + ld;
        n = n/10;
    }
    if(x == rev){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}