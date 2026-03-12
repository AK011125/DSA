#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    for(int i =0;i<n;i++){
        for(int j=0;j<i;j++){
            char ch = (char)j+65;
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}