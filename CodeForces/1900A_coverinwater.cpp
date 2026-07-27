#include<iostream>
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
        int i=0;
        int count=0;
        while(i<n){
            if(s[i]=='#'){
                i++;
            }else{
                if(i+2<n&&(s[i+1]=='.'&& s[i+2]=='.')){
                    count =2;
                    break;
                }else{
                    count++;
                    i++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}