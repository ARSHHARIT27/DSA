#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   double p=0.0,a;
   int total=0;
   for(int i=0;i<n;i++){
    cin>>a;
    p+=a;
    total+=100;
   }
   double ans;
   ans=(p/total)*100;
   cout<<ans;
   return 0;
}