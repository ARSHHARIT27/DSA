#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=1;
        int num=1;
        while(i<=n){
            if(num%3!=0 && (num%10!=3)){
                i++;
            }
            num++;
        }
        cout<<num-1<<endl;
    }
    return 0;
}