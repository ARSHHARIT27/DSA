#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int count=0;
        int prod=1;
        int temp=n;
        while(temp!=0){
            if(temp%10!=0){
                count++;
            }
            temp=temp/10;
        }
        cout<<count<<endl;
        while(n!=0){
            if(n%10!=0){
                cout<< (n%10)*prod<<" ";
            }
            prod*=10;
            n=n/10;
        }
        cout<<endl;
    }
    return 0;
}