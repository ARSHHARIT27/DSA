#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int val1=n-4;
    int val4=n-9;
    if(n%2==0){cout<<4<<" "<<val1;}
    else{cout<<9<<" "<<val4;}
    return 0;
}