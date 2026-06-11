#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int count=0;
   while(n!=0){
    int dig=n%10;
    if(dig==4 || dig==7){
        count++;
    }
    n=n/10;
   }
   if(count==0){
    cout<< "NO";
    return 0;
   }
   while(count!=0){
    int val=count%10;
    if(val!=4 && val!=7){
        cout<<"NO";
        return 0;
    }
    count/=10;
   }
   cout<<"YES";
   return 0;
}