#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){cout<<0<<endl;}
        else{
            int mx=max(a,b);
            int mi=min(a,b);
            cout<<mx-mi<<endl;
        }
    }
    return 0;
}