#include<iostream>
#include<limits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxm=INT_MIN;
        int minm=INT_MAX;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(maxm<a){maxm=a;}
            if(minm>a){minm=a;}
        }
        cout<<maxm-minm<<endl;
    }
    return 0;
}