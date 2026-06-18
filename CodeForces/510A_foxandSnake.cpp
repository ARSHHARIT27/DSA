#include<iostream>
using namespace std;
int main(){
    int n,m;
    int a=0;
    cin>>n>>m;
    int i=1;
    string o(m,'.');
    o[m-1]='#';
    string p(m,'.');
    p[0]='#';
    string e(m,'#');
    while(i<=n){
        if(i%2!=0){
            cout<<e<<endl;
        }else{
            if(a==0){
                cout<<o<<endl;
                a=1;
            }else{
                cout<<p<<endl;
                a=0;
            }
        }
        i++;
    }
    return 0;
}