#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int x;
   int n,h;
   cin>>n>>h;
   for(int i=0;i<n;i++){
    cin>>x;
    if(x>h){
        sum+=2;
    }else{
        sum+=1;
    }
   }
   cout<<sum;
   return 0;
}