#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(201); //{201}
    ms.insert(202); //{201,202}
    ms.insert(202); //{201,202,202} -->> not unique
    ms.insert(101); //{101,201,202,202} -->> still sorting
    ms.erase(ms.find(202)); // it will erase only 202
    //rest all same as set
    //HERE ONLY UNIQUENESS OF SET IS NOT AVAILABLE
    ms.erase(ms.find(201), ms.find(202));// erase from [201 to 202)
    return 0;
}