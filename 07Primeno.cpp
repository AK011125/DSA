#include <iostream>
using namespace std;

void prime(int x){
    for(int i = 2;i<x;i++){
        if(x%i==0){
            cout<<x<<" Not Prime "<<endl;
            break;
        }else{
            cout<<x<<" Prime "<<endl;
            break;
        }
    }

}

int main(){
    int a,b;
    cout<<"Enter 1st no : ";
    cin>>a;
    cout<<"Enter 2nd no : ";
    cin>>b;
    for(int i =a;i<=b;i++){
        prime(i);
    }

    return 0;
}