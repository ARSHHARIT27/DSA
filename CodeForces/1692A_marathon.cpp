#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b,c,d;
        int count=0;
        cin>>a>>b>>c>>d;
        if(b>a){
            count++;
        }    
        if(c>a){
            count++;
        }
        if(d>a){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}