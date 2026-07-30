#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mh=0,ch=0;
    while(n--){
        int m,c;
        cin>>m>>c;
        if(m>c){
            mh++;
        }else if(c>m){ch++;}
    }
    if(mh>ch){cout<<"Mishka";}
    else if(ch>mh){cout<<"Chris";}
    else{cout<<"Friendship is magic!^^";}
    return 0;
}