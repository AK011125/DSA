#include <iostream>
#include<map> // Map Librabry
using namespace std;
int main(){
    map<int,int> m;            //{key,value}
    map<pair<int,int>,int> n;
    m[1] = 2;
    m.emplace(3,1);
    m.insert({2,4});
    n[{2,3}] = 10;

    for(auto it: m){
        cout<<it.first << " "<<it.second<<endl;
    }//print 1 2     they will be sorted
    //       2 4     by keys in sequence
    //       3 1

    auto it1 = m.lower_bound(2);

    auto it2 = m.upper_bound(3);


    return 0;
}