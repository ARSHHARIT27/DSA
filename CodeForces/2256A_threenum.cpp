#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mi=min(a,b);
        mi=min(mi,c);
        int ma=max(a,b);
        ma=max(ma,c);
        if(ma==a){if(b+c>ma){cout<<(ma-mi)<<endl;}else{cout<<(b+c)-mi<<endl;}}
        else if(ma==b){if(a+c>ma){cout<<(ma-mi)<<endl;}else{cout<<(a+c)-mi<<endl;}}
        else if(ma==c){if(b+a>ma){cout<<(ma-mi)<<endl;}else{cout<<(b+a)-mi<<endl;}}
    }
    return 0;
}