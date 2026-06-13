#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> ap;
   int n;
   cin>>n;
   int p,q;
   cin>>p;
   for(int i=0;i<p;i++){
    int inp;
    cin>>inp;
    ap.insert({inp,0});
   }
   cin>>q;
   for(int i=0;i<q;i++){
    int inp;
    cin>>inp;
    ap.insert({inp,0});
   }
   for(int i=1;i<=n;i++){
    if(ap.find(i)==ap.end()){
        cout<< "Oh, my keyboard!";
        return 0;
    }
   }
   cout<<"I become the guy.";
   return 0;
}