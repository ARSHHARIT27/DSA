#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n<10){
            if(n==2 && m==3){cout<<"YES";}
            else if(n==3 && m==5){cout<<"YES";}
            else if(n==5 && m==7){cout<<"YES";}
            else if(n==7 && m==11){cout<<"YES";}
            else{cout<<"NO";}
    }
    else{
        while(1){
            n++;
            if(n%2!=0&& n%3!=0 && n%5!=0 && n%7!=0){
                if(n==m){cout<<"YES";}
                else{cout<<"NO";}
                break;
            }
        }
    }
    return 0;
}