#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    int count=0;
    while(1){
        sum+=i;
        if(sum>n){break;}
        n-=sum;
        count++;
        i++;
    }
    cout<<count;
    return 0;
}