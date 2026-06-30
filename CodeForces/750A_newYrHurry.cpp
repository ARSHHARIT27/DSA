#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int tmlft=240-k;
    int sum=0;
    int i;
    for(i=1;i<=n;i++){
        sum+=5*i;
        if(sum>tmlft){
            break;
        }
    }
    cout<<i-1;
    return 0;
}