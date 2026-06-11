#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int countl=0,countu=0;
   string s;
   cin>> s;
   for(char x : s){
    if(x<=90){
        countu++;
    }else{
        countl++;
    }
   }
   string st;
   if(countl>=countu){
    // to lower case
    for(char x: s){
        if(x<='Z'){
            char val=x+32;
            st+= val;
        }else{
            st+= x;
        }
    }
   }else{
    //upper case
    for(char x: s){
        if(x>90){
            char val=x-32;
            st+=val;
        }else{
            st+=x;
        }
    }
   }
   cout<<st;
   return 0;
}