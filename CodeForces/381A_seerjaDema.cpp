#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    int s=1,d=0;
    int sums=0,sumd=0;
    while(start<=end){
        if(s==1){
            if(arr[start]>arr[end]){
                sums+=arr[start];
                start++;
            }else{
                sums+=arr[end];
                end--;
            }
            s=0;
            d=1;
        }
        else if(d==1){
            if(arr[start]>arr[end]){
                sumd+=arr[start];
                start++;
            }else{
                sumd+=arr[end];
                end--;
            }
            d=0;  
            s=1;
        }
    }
    cout<<sums<<" "<<sumd;
    return 0;
}