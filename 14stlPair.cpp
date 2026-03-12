#include<iostream>
using namespace std;
int main(){
    pair<int,int> p ={3,4}; //create a pair
    cout<<p.first<<" "<<p.second; //print its elements

    cout<<endl;

    pair<pair<int,int>,int> p1 ={{45,54},2}; //pair ke andar pair
    cout<<p1.first.first<<" "<<p1.first.second<<" "<<p1.second;

    cout<<endl;
    pair<int,int> arr[] = {{4,5},{6,7},{8,9}}; //pair inside a array
    cout<<arr[1].second;  //accessing the 2nd element of array and 2nd element of pair

    return 0;
}