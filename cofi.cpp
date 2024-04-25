// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int add;
// //     cout<<"enter your value : ";
// //     cin>>add;
// //     string cofi[add];
// //     int price[add];
// //     for (int i = 0; i < add; i++)
// //     {
// //         cout<<"enter your "<<i<<" cofi name ";
// //         cin>>cofi[i];
// //         cout<<"enter your "<<i+1<<" price : ";
// //         cin>>price[i];

// //     }
// //     for (int i = 0; i < add; i++)
// //     {
// //         cout<<i+1<<". "<<cofi[i]<<"\t";
// //         cout<<price[i]<<endl;
// //     }
   
// //     int chouse;
// //     cout<<"enter : ";

    
   
    
// //     return 0;
// // }



// // // C++ Program to find ASCII value of a character 
// // #include <iostream> 
// // using namespace std; 
  
// // int main() 
// // { 
// //     char ch; 
  
// //     ch = 'b'; 
  
// //     cout << "The ASCII value of " << ch << " is " << int(ch) 
// //          << endl; 
  
// //     return 0; 
// // }

// // C++ Program to print whether a character is vowel or not 
// // #include <cctype> 
// // #include <iostream> 
// // using namespace std; 
  
// // int main() 
// // { 
// //     char ch = 'e'; 
  
// //     if (isalpha(ch)) { 
// //         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
// //             || ch == 'u' || ch == 'A' || ch == 'E'
// //             || ch == 'I' || ch == 'O' || ch == 'U') { 
// //             cout << ch << " is a vowel." << endl; 
// //         } 
// //         else { 
// //             cout << ch << " is a consonant." << endl; 
// //         } 
// //     } 
// //     else { 
// //         cout << ch << " is not an alphabet." << endl; 
// //     } 
  
// //     return 0; 
// // }
// // C++ Program to find the length of a string without using 
// // // strlen() 
// // #include <cstring> 
// // #include <iostream> 
// // using namespace std; 
  
// // int main() 
// // { 
// //     string str = "GeeksforGeeks"; 
// //     int length = 0; 
  
// //     for (int i = 0; str[i] != '\0'; i++) { 
// //         length++; 
// //     } 
  
// //     cout << "The length of the string is: " << length 
// //          << endl; 
  
// //     return 0; 
// // }


// // C++ program to find factorial using loops 
// // #include <bits/stdc++.h> 
// // using namespace std; 
  
// // // function to find factorial 
// // int factorial(int n) 
// // { 
// //     int fact = 1; 
// //     while (n > 1) { 
// //         fact *= n; 
// //         n--; 
// //     } 
  
// //     return fact; 
// // } 
  
// // // driver code 
// // int main() 
// // { 
// //     int num = 5; 
  
// //     cout << factorial(num); 
  
// //     return 0; 
// // }

// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int a =5;
// //     int aga;
// //     int arr[a];
    
// //     for (int i = 0; i < a; i++)
// //     {
// //         cout<<"enterr value";
// //        cin>>arr[i];
// //     }
    
// // }


// // C++ program to check if a given 
// // year is leap year or not 
// #include <iostream> 
// using namespace std; 

// bool checkYear(int year) 
// { 
// 	// leap year 
// 	if (year % 400 == 0) 
// 		return true; 

// 	// Not leap year 
// 	if (year % 100 == 0) 
// 		return false; 

// 	// leap year 
// 	if (year % 4 == 0) 
// 		return true; 

// 	// Not leap year 
// 	return false; 
// } 

// int main() 
// { 
// 	int year = 2000; 

// 	if (checkYear(year)) 
// 		cout << "Leap Year"; 
// 	else
// 		cout << "Not a Leap Year"; 
// 	return 0; 
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter No of coffees you want to add : "<<endl;
//     cin>>n;
    
//     string name[n] = {};
//     int price[n] = {};
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<"Enter name of coffee : "<<endl;
//         cin>>name[i];
        
//         cout<<"Enter price of coffee : "<<endl;
//         cin>>price[i];
//     }
//     cout<<endl;
//     cout<<"*************** Select Coffee *****************"<<endl;
    
//     for(int i=0;i<n;i++){
//         cout<<i+1<<". "<<name[i]<<" "<<"₹ "<<price[i]<<endl;
//     }
    
//     int which;
//     cout<<endl;
//     cout<<"Enter which coffee you want : ";
//     cin>>which;
    
//     int quantity;
    
//     for(int i=0;i<n;i++){
//         if(which==i+1){
//             cout<<"Enter the quantity of coffee : ";
//             cin>>quantity;
//             cout <<" ₹ "<< (price[i] * quantity) * 1.18 << endl;

//         }
//  }
// }





/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


