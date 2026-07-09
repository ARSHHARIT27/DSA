#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int val= a ^ b;
        val=val ^ c;
        cout<<val<<endl;
    }
    return 0;
}