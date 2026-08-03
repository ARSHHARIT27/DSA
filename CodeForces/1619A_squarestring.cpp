#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()%2!=0){cout<<"NO"<<endl;}
        else{
                if(s.substr(0,s.length()/2)==s.substr(s.length()/2)){cout<<"YES"<<endl;}
                else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}