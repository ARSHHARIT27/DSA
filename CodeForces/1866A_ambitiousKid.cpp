#include<iostream>
#include<limits>
using namespace std;
int main(){
        int n;
        cin>>n;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            if(min>abs(a)){
                min=abs(a);
            }
        }
        cout<<abs(min)<<endl;
    return 0;
}