#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    int a;
    for(int i=0;i<4;i++){
        cin>>a;
        mp[a]++;
    }
    cout<<4-mp.size();
    return 0;
}