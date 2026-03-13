#include<iostream>
using namespace std;
int main(){
    queue<int> q;
    q.push(101);  //{101}
    q.push(104);  //{101 , 104, 102}
    q.emplace(102); //{101,104, 102}

    q.back() += 5;
    cout<<q.back(); //print 107

    cout<<endl;

    q.pop(); //remove 101
    cout<<q.front(); //print 104
    //FIRST IN FIRST OUT HERE 
    
    return 0;
}