#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        //find min and max
        int min=7,max=0;
        for(int i=0;i<n;i++){
            int h;
            cin>>h;
            if(h<min){
                min=h;
            }
            if(h>max){
                max=h;
            }
        }
        cout<<max-min+1<<endl;
    }
    return 0;
}