#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;
        }
        int a=0;
        for(auto &p:mp){
            if(p.second>1){
                cout<<"NO"<<endl;
                a=1;
                break;
            }
        }
        if(a==0){cout<<"YES"<<endl;}
    }
    return 0;
}