#include<iostream>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);  //here only push not push_back
    st.emplace(2); //same as emplace instead of emplace_back
    st.push(4); //{4,2,1}
    st.emplace(5);//{5,4,2,1}

    cout<<st.top();//print 5    st[2] is not valid here
    st.pop(); //here also top element will be deleted
 
    //Last In First Out

    return 0;
}