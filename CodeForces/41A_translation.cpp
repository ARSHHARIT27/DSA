#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string s,t;
   cin>>s>>t;
   int i=t.length()-1;
   if(s.length()!=t.length()){
    cout<<"NO";
    return 0;
   }
   for(int j=0;j<s.length();j++){
    if(s[j]!=t[i]){
        cout<<"NO";
        return 0;
    }i--;
   }
   cout<<"YES";
   return 0;
}