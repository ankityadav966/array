// #include <iostream>
// #include <vector>
// using namespace std;;
// int main(){
//     // vector<int>ele;
//     // ele.push_back(7);
//     // ele.push_back(4);
//     // ele.push_back(4);
//     // ele.push_back(4);
//     // ele.pop_back();
//     // ele.pop_back();
//     // cout<<ele.size();
//     // for (int i = 0; i < ele.size(); i++)
//     // {
//     //     cout<<ele[i];
//     // }
    
//     // vector<string>an;
//     // an.push_back("ankit");
//     // cout<<an.size();
    
    
    
//     // int arr[5];
//     // vector<int>all;
//     // for (int i = 0; i < all.size(); i++)
//     // {
//     //     cin>>arr[i];
//     //     all.push_back(arr[i]);
//     // }
//     // cout<<all.size();

//     // vector <int> vikash;
//     // int size;
//     // cout<<"enter size: ";
//     // cin>>size;
    
//     // for (int i = 0; i < size; i++)
//     // {
//     //     int a;
//     //     cin>>a;
//     //     vikash.push_back(a);
//     // }
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout<<vikash[i];
//     // }
//     // cout<<vikash.size();       
// }



// #include <iostream>
// #include <vector>
// using namespace std;
// void display(vector <int> &a){
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout<<a[i]<<"  ";
//     }
//     cout<<endl;
// }
// int main (){
//  vector <int> vec;
//     int ele;
      
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<"enter your ele size : ";
//         cin>>ele;
//         vec.push_back(ele);
//     }
//     display(vec);
//     // cout<<ele;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int length1;
//     cout << "Enter the length of the first array: ";
//     cin >> length1;
//     int arr1[length1];
//     cout << "Enter elements for the first array: ";
//     for (int i = 0; i < length1; i++) {
//         cin >> arr1[i];
//     }
//     int length2;
//     cout << "Enter the length of the second array: ";
//     cin >> length2;
//     int arr2[length2];
//     cout << "Enter elements for the second array: ";
//     for (int i = 0; i < length2; i++) {
//         cin >> arr2[i];
//     }
//     int sumarray = length1 + length2;
//     int out[sumarray];
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>values(5,6);
    for (int i = 0; i < values.size(); i++)
    {
        cout<<values[i];
    }
    
}