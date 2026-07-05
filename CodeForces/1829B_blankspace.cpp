#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // count 
        int maxl=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }else{
                maxl=max(maxl,count);
                count=0;
            }
        }
        maxl=max(maxl,count);
        cout<<maxl<<endl;
    }
    return 0;
}