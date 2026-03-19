#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter 1st no : ";
    cin>>n;
    cout<<"Enter 2nd no : ";
    cin>>m;

    int gcd;
    for(int i = 1; i<=n;i++){
        if(n%i == 0 && m%i == 0){
            cout<<"common factor : "<<i<<endl;
            gcd = i;
        }
    }
    cout<<"GCD : "<<gcd;
    
    return 0;
}