#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        int count=0;
        if(a==b){cout<<count<<endl;}
        else if(abs(a-b)>=10){
            count=(abs(a-b)/10);
            if(abs(a-b)%10!=0){
                count++;
            }
            cout<<count<<endl;
        }else{
            count++;
            cout<<count<<endl;
        }
    }
    return 0;
}