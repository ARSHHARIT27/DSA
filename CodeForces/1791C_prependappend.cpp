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
        int a=0;
        int start=0,end=n-1;
        while(start<=end){
            if(s[start]!=s[end]){
                start++;
                end--;
            }else{
                cout<<end-start+1<<endl;
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<0<<endl;
        }
    }
    return 0;
}