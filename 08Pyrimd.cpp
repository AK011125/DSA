#include<iostream>
using namespace std;

int pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }

        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
};

int pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int k=0;k<(2*(n-i)-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;

    pattern1(n);
    pattern2(n);

    return 0;
}