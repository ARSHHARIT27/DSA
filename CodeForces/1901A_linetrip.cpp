#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int md=INT_MIN;
        int dif;
        for(int i=0;i<arr.size();i++){
            if(i==0){
                dif=arr[i]-0;
            }else{
                dif=arr[i]-arr[i-1];
            }
            md=max(dif,md);
        }
        dif=2*(x-arr[arr.size()-1]);
        md=max(md,dif);
        cout<<md<<endl;
    }
    return 0;
}