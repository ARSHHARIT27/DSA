#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a,b;
   for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a%b==0){
        cout<<0<<endl;
    }else{
        int c=a-(a%b);
        c=c+b;
        cout<<(c-a)<<endl;
    }
   }
   return 0;
}