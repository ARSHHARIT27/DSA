#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n,t;
   vector<char> q;
   cin>> n>> t;
   for(int i=0;i<n;i++){
    char c;
    cin>>c;
    q.push_back(c);
   }
   while(t!=0){
    for(int i=0;i<q.size();){
        if(q[i]=='B' && q[i+1]=='G'){
            char temp=q[i+1];
            q[i+1]=q[i];
            q[i]=temp;
            i+=2;
        }else{
            i++;
        }
    }
    t--;
   }
   for(int i=0;i<q.size();i++){
    cout<<q[i];
   }
   return 0;
}