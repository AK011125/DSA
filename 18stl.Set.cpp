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

    auto it1 = st.find(34);
    auto it2 = st.find(11);
    st.erase(21); // remove 21
    st.erase(it1, it2); //it will erase from [34 to 11)
    

    return 0;
}