#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    int po=0;
    for(int i=1;i<=t;i++){
        int a;
        cin>>a;
        if(a>0){
            po+=a;
        }
        else if(a<0 && po<=0){
            count++;
        }else if(a<0 && po>0){
            po=po+a;
        }
    }
    cout<<count; 
    return 0;
}