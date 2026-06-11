#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string s;
   cin >>s;
   int val=s[0];
   if(val>=97){
    val=val-32;
   }
   char k=val;
   s[0]=k;
   cout<< s;
   return 0;
}