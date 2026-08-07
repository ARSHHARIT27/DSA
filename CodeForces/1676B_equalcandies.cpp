#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
            if(min>a){
                min=a;
            }
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=min){
                ans+=abs(arr[i]-min);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}