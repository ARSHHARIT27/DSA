#include<iostream>
#include<string.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   string s;
   int counta=0,countd=0;
   cin>>s;
   for(int i=0;i<n;i++){
    if(s[i]=='A'){
        counta++;
    }else{
        countd++;
    }
   }
   if(counta>countd){
    cout<<"Anton";
   }else if(countd>counta){
    cout<<"Danik";
   }else{
    cout<<"Friendship";
   }
   return 0;
}