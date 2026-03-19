#include<iostream>
using namespace std;
int palindrome(int arr[] ,int n){
    for(int i = 0; i<n; i++){
        if(arr[i]== arr[n-i-1]){
            return true; //1
        }else{
            return false; //0
        }
    }
}
int main(){
    int n;
    cout<< "Enter length of arr : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        
        cout<<"Enter "<<i<<" element : ";
        cin>>arr[i];
        cout<<endl;
    }

    cout << palindrome(arr, n);

    return 0;
}