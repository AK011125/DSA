#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;

    int sum = 0;
    int m = n;
    while(n>0){
        int ld;
        ld = n%10;
        sum = sum + (ld* ld * ld);
        n = n/10;
    }
    if (sum == m){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}