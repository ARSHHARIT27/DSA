#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> arr;
   int a;
   int indmi,indmx;
   for(int i=0;i<n;i++){
    cin>>a;
    arr.push_back(a);
   }
   int mine=*min_element(arr.begin(),arr.end());
   int maxe=*max_element(arr.begin(),arr.end());
   for(int i=0;i<arr.size();i++){
    if(arr[i]==mine){
        indmi=i;
    }
   }
   for(int i=0;i<arr.size();i++){
    if(arr[i]==maxe){
        indmx=i;
        break;
    }
   }
   int ans;
   int mi=arr.size()-(indmi+1);
   int ma=indmx;
   if(indmi>indmx){
    ans=ma+mi;
   }else{
       ans=ma+mi-1;
   }
   cout<<ans;
   return 0;
}