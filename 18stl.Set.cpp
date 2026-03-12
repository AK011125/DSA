#include <iostream>
#include<set>  //Need to include SET 
using namespace std;
int main(){
    set<int>st; // sorted + Unique
    st.insert(12); //here push is not used
    st.insert(21); //{12,21}
    st.emplace(34); //{12,21,34}
    st.emplace(11);//{11,12,21,34}  sorted
    st.emplace(12); //{11,12,21,34} unquie
    


    return 0;
}