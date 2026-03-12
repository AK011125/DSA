#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector <int> v;
    // v.push_back(11);
    // v.push_back(23);
    // cout<<v.size()<<endl; //2
    // cout<<v.capacity()<<endl; //2

    // for(int i = 0; i<v.size();i++){
    //     cout<<v[i]<<" " ;
    // }

    // v.pop_back(); //delete last element
    // cout<<endl<<v.size(); //1
    
    // int arr [] = {1,2,3,2,1,4,5,5,7,6,7,6};

    // int n = sizeof(arr) / sizeof(arr[0]);

    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(arr[i] == arr[j]){
    //             arr[i] = arr[j] = 0;
    //         }
    //     }
    // }

    // for(int i = 0; i < n; i++){
    //     if(arr[i] > 0){
    //         cout << arr[i] << endl;
    //     }
    // }

    // int n;
    // cout<<"Enter the length of vector : ";
    // cin>>n;

    // vector <int> v;
    
    // for(int i = 0; i<n;i++){
    //     cout<<"enter element : ";
    //     int a;
    //     cin>>a;
    //     v.push_back(a);
    // }

    // for(int i = 0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

    // cout<<v.size();

    vector <int> v1(3,5); //create a vector v1 {5,5,5}
    for(int i :  v1){     // printing v1
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int> v3 = {1, 2, 3};  // Initializes vector using  initializer list.

    
    for (int x : v3) {        // Print items of v3
        cout << x << " ";
    }
    cout<<endl;
    //we can also use emplace_back instead of push_back

    //if vector is defined over pair soo it is very useful like this
    vector<pair<int,int>> v2;
    v2.push_back({22,33});  //we need to give {} to specify pair
    v2.emplace_back(55,66); //we dont need {} here

    cout<<v2[1].first;

    return 0;
}