#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int mi=min(a,b);
    cout<<mi;
    if(mi==a){
        cout<<" "<<(b-a)/2;
    }else{
        cout<<" "<<(a-b)/2;
    }
    return 0;
}   