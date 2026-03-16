#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;

    int divisers = 0;
    for(int i = 1;i<=n;i++){
        if(n%i == 0){
            divisers ++;
        }
    }
    if(divisers == 2){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;
}