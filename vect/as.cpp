#include <iostream>
#include <vector>
using namespace std;;
int main(){
    // vector<int>ele;
    // ele.push_back(7);
    // // ele.push_back(4);
    // // ele.push_back(4);
    // // ele.push_back(4);
    // // ele.pop_back();
    // // ele.pop_back();
    // cout<<ele.size();
    // for (int i = 0; i < ele.size(); i++)
    // {
    //     cout<<ele[i];
    // }
    
    // vector<string>an;
    // an.push_back("ankit");
    // cout<<an.size();
    
    
    
    int arr[5];
    vector<int>all;
    for (int i = 0; i < all.size(); i++)
    {
        cin>>arr[i];
        all.push_back(arr[i]);
    }
    cout<<all.size();
}