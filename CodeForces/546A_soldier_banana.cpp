#include<iostream>
using namespace std;
int main(){
   int k,n,w;
   cin>> k>> n>> w;
   long int sum_total=((w*(w+1))/2)*k;
   if(sum_total<=n){
    cout<<0;
    return 0;
   }else{
       cout<< sum_total-n; 
   }
   return 0;
}