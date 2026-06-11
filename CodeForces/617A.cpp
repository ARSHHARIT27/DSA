// elephant problem 
#include<iostream>
using namespace std;
int main(){
   int x;
   cin>> x;
   int start=0;
   if(x<=5){
    cout<< 1;
    return 0;
   }else if(x%5==0){
    cout<< x/5;
   }else{
    int val=x/5;
    cout<< val+1;
   }
   return 0;
}