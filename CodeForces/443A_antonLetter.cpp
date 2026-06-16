#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
   string s;
   unordered_map<char,int> mp;
   getline(cin, s);
   for(int i=0;i<s.length();i++){
    if(s[i]<='z' && s[i]>='a'){
        mp.insert({s[i],0});
    }
   }
   cout<< mp.size();
   return 0;
}