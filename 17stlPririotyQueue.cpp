#include <iostream>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(44); //{44}
    pq.push(33); //{44,33}
    pq.emplace(22); //{44,33,22}

    cout<<pq.top(); // print 44 
    //HERE CONCEPT IS FIRST IN FIRST OUT

    pq.pop();//{33,22}

    //Its TIME COMPLEXITY is log(n)
    return 0;
}