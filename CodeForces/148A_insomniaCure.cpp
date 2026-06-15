#include<iostream>
using namespace std;
int main(){
   int k,l,m,n,d;
   int c=0;
   cin>>k>>l>>m>>n>>d;
   int count;
   for(int i=1;i<=d;i++){
    count=i;
    if(count%k!=0 && count%l!=0 && count%m!=0 && count%n!=0){
        c++;
    }
   }
   cout<<d-c;
   return 0;
}