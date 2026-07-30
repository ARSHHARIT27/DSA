#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        count+=arr[s[i]-'1'];
    }
    cout<<count;
    return 0;
}