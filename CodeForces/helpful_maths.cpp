#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s;
   string sn;
   vector<int> arr;
   cin >> s;
   for(char x:s){
    if(x!='+'){
        int ele=x-'0';
        arr.push_back(ele);
    }
   }
   sort(arr.begin(),arr.end());
   for(int i=0;i<arr.size();i++){
    sn+=to_string(arr[i]);
    if(i!=arr.size()-1){
        sn+='+';
    }
   }
   cout<< sn;
   return 0;
}