#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0;
        string ans="";
        while(i<s.length()){
            if(s[i]==s[i+1] && (i+1!=s.length()-1)){
                ans+=s[i];
                i+=2;
            }else{
                ans+=s[i];
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}