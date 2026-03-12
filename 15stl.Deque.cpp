#include<iostream>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(33); //{1,33}
    dq.push_front(44); //{44,1,33}
    dq.emplace_front(55); //{55,44,1,33}

    dq.pop_back(); //{55,44,1}
    dq.pop_front(); //{44,1}

    //rest all same as vector
    return 0;
};