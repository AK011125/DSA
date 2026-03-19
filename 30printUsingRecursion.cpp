#include<iostream>
using namespace std;
int print_no(int n){
    for(int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;
    
    print_no(n);
    return 0;
}