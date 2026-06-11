#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<int> arr(26,1);
   for(int i=0;i<n;i++){
    if(s[i]>= 97){
        s[i]-=32;
    }
    int a= s[i]-65;
    arr[a]=0;
   }
   for(int i=0;i<arr.size();i++){
    if(arr[i]==1){
        cout<< "NO";
        return 0;
    }
   }
   cout<< "YES";
   return 0;
}