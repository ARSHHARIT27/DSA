#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                count+=2;
                mp.insert({s[i],0});
            }else{
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}