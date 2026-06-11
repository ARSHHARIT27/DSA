#include<iostream>
#include<string>
using namespace std;
int main(){
   int n;
   int group=1;
   cin>>n;
   string s,temp;

   for(int i=0;i<n;i++){
    cin >> s;
    if(i==0){
        temp=s;
    }else{
        //compare 
        if(temp[1]==s[0]){
            group+=1;
        }
        temp=s;
    }
   }
   cout<<group;
   return 0;
}