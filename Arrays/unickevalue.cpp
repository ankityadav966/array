// #include <iostream>
// using namespace std;
// #include <vector>
//     int findvalue(vector <int> values ){
//         int uniquevalue = 0;
//         for (int i = 0; i < values.size(); i++)
//         {
//             uniquevalue = uniquevalue ^ values[i];
//         }
//         return uniquevalue;

//     }
// int main(){
//     vector<int>values = {1,1,2,3,3};
//     int uniquevalue = findvalue(values);
//     cout<<"Unicque value : "<< uniquevalue<<endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr1 = {1, 2, 3, 4, 5, 6};
//     vector<int> arr2 = {1, 2};

//     for (int i = 0; i < arr1.size(); i++)
//     {
//         for (int j = 0; j < arr2.size(); j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 cout << arr1[i]<<"   ";
//             }
//         }
//     }
// }
#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector <int> arr = {1,2,3,4,5,6};
    vector <int> arr2 = {1,2};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr[i]==arr2[j])
            {
               cout<<arr2[j]<<"  ";
            }
        }
        
    }
    
}