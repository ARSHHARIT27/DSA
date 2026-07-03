#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        int a=s[0]-48;
        int b=s[1]-48;
        int c=s[2]-48;
        int d=s[3]-48;
        int e=s[4]-48;
        int f=s[5]-48;
        if((a+b+c)==(d+e+f)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}