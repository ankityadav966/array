#include <iostream>
using namespace std;
#include <vector>
    int findvalue(vector <int> values ){
        int uniquevalue = 0;
        for (int i = 0; i < values.size(); i++)
        {
            uniquevalue = uniquevalue ^ values[i];
        }
        return uniquevalue;
        
    }
int main(){
    vector<int>values = {1,1,2,3,3};
    int uniquevalue = findvalue(values);
    cout<<"Unicque value : "<< uniquevalue<<endl;   
}

