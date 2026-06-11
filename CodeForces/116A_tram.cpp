#include<iostream>
using namespace std;
int main(){
   int n,a,b;
   int cap=0;
   int fcap=0;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>> a>>b;
    if(i==0){
        cap+=b;
    }else if(i==n-1){
        cap-=a;
    }else{
        cap-=a;
        cap+=b;
    }
    fcap=max(fcap,cap);
   }
   cout<< fcap;
   return 0;
}