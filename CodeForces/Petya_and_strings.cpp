#include<iostream>
using namespace std;
int main(){
   string s1;
   string s2;
   cin >> s1;
   cin >> s2;
   int i=0;
   while (i<s1.length()){
    int val1=tolower(s1[i]);
    int val2=tolower(s2[i]);
    if(val1==val2){
        i++;
        continue;
    }else if(val1>val2){
        cout<< 1;
        return 0;        
    }else if(val1<val2){
        cout<< -1;
        return 0;
    }
   }
   cout<< 0;
   return 0;
}