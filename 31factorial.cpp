#include <iostream>
using namespace std;

int fac(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fac(n - 1);
}

int main(){
    int n;
    cout << "Enter a no : ";
    cin >> n;

    cout << fac(n);

    return 0;
}