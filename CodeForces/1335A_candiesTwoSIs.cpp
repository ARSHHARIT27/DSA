#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans=0;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        cout<<(n-1-(n/2))<<endl;
    }
    return 0;
}