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
// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> arr = {1,2,3,4,5,6};
//     vector <int> arr2 = {1,2};
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr2.size(); j++)
//         {
//             if (arr[i]==arr2[j])
//             {
//                cout<<arr2[j]<<"  ";
//             }
//         }

//     }

// }

// #include <iostream>
// using namespace std;
// int bineryserch(int arr[], int size, int target)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] <= target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = 10;
//     int target = 10;
//     int indexvalue = bineryserch(arr, size, target);
//     if (indexvalue == -1)
//     {
//         cout << "not found";
//     }
//     else
//     {
//         cout << "found at index " << indexvalue << ", value is " << arr[indexvalue];
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter your size : ";
//     cin>>a;
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         cout<<"you valur : "<<i+1<<"  is : ";
//         cin>>arr[i];  
//         cout<<endl;
//     } 
// }
// #include <iostream> 
// using  namespace std;
// int search(int arr[],int a,int target){
//     int start = 0;
//     int end = start-1;
//     int mid = (start+end) /2;
//     while (start<=end)
//     {
//         if (arr[mid]<=target)
//         {
//             return mid;
//         }
//         else if (arr[mid]==target)
//         {
//             return mid + 1;
//         }
//         else
//         {
//             return mid - 1;
//         }
        
        
        
//     }
//     return -1;

// }

// int main(){
//     int a;
//     cout<<"Enter you lenth : ";
//     cin>>a;
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         cout<<"your value is  : ";
//        cin>>arr[i];
//     }
//     int target;
//     cout<<"enter your target vale : ";
//     cin>>target;
//     int indexvalue = search(arr,a,target);
//       if (indexvalue==-1)
//       {
//         cout<<"Not Found  ";
//       }
//       else{
//         cout<<"YOur index Value Is : "<<arr[indexvalue];
//       } 
// }
// C++ Program to how to sort an array












// #include <iostream>
// using namespace std;

// void search(int arr[], int arrlength) {
//     for (int i = 0; i < arrlength; i++) {
//         for (int j = i + 1; j < arrlength; j++) {
//             if (arr[i] > arr[j]) {
//                 int temp = arr[i]; // Swap arr[i] and arr[j]
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < arrlength; i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int arr[7] = { 5, 4, 1, 2, 3, 8, 6 };
//     int arrLength = sizeof(arr) / sizeof(arr[0]); // Calculate array length
//     search(arr, arrLength); // Pass array and its length to the search function

//     return 0;
// }

 