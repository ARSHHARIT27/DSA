#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> arr(n,0);
   for(int i=0;i<n;i++){
    int a;
    cin>>a;
    arr[a-1]=i+1;
   }
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}