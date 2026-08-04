#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int val=n%10;
        int count=0;
        while(n!=0){
            n=n/10;
            count++;
        }
        count=count*(count+1)/2;
        cout<<(((val-1)*10)+count)<<endl;
    }
    return 0;
}