#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ma=*max_element(arr.begin(),arr.end());
    int to=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=ma){
            to+=(ma-arr[i]);
        }
    }
    cout<<to;
    return 0;
}