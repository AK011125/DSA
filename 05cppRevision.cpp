#include<iostream>
using namespace std;
int main(){
    printf("Hello Nishu");
    cout<<"\nwrite value of x : ";
    int x;
    cin>>x;
    cout<<"x is : "<<x<<endl;

    for(int i =0; i<=x; i++){      //pyramid code
        for(int j =0; j<=(x-i); j++){
            cout<<" ";
        }

        for(int k =0; k <=2*i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Executed";
    return 0;
}