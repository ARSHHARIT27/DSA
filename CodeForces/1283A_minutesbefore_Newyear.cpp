#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        int min=0;
        cin>>h>>m;
        while(h!=24){
            h++;
            min+=60;
        }
        min-=m;
        cout<<min<<endl;
    }
    return 0;
}