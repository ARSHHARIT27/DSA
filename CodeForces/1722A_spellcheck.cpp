#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        mp.insert({'T',0});
        mp.insert({'i',0});
        mp.insert({'m',0});
        mp.insert({'u',0});
        mp.insert({'r',0});
        if(n!=5){cout<<"NO"<<endl;}
        else{
            for(char x:s){
                if(mp.find(x)!=mp.end()){
                    mp.erase(x);
                }
            }
            if(mp.size()==0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}