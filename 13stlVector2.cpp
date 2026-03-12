#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,4,5,6,7,8,9};
    for(int i : v){
        cout<<i<<" ";
    }

    cout<<endl;
    v.insert(v.begin(),0); //v.insert use to insert v.begin use to specify location 
    v.insert(v.end(),10);

    v.erase(v.begin()+2,v.begin()+4);// it will erase from 2 to 4 from starting including 2 and exluding 4 i.e 2,3

    for(int i :v){
        cout<<i<< " ";
    }

    cout<<endl;
    vector<int> copy(2,50); //it will create a copy vector {50,50}

    //v.pop_back() delete last element
    //v1.swap(v2)
    //v.size() for size
    //v.clear() erase all
    //v.empty() empty it
    return 0;
}