#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string a,b,c;
    unordered_map<char,int>mp;
    cin>>a>>b>>c;
    for(int i=0;i<a.length();i++){
        mp[a[i]]++;
    }
    for(int i=0;i<b.length();i++){
        mp[b[i]]++;
    }
    if(a.length()+b.length()!=c.length()){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<c.length();i++){
        auto it=mp.find(c[i]);
        if(it!=mp.end() && it->second!=0){
            (it->second)--;
        }else if(it==mp.end() || it->second==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}