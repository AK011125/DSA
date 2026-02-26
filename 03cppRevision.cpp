#include<iostream>
using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    cout<<"sqrt of 4 is : "<<sqrt(4)<<endl;
    
    int n;
    cout<<"Enter a no : "<<endl;
    cin>>n;

    for(int i = 0; i <= n; i++){      //for a n*n square
        for(int j = 0; j <=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}