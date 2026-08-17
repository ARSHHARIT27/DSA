#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        int count=0;
        cin>>a>>b>>c;
        vector<int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(),arr.end());
        while(true){
            if(arr[0]==arr[1] || arr[0]==arr[2] || arr[1]==arr[2]){
                cout<<count<<endl;
                break;
            }else{
                arr[0]++;
                arr[2]--;
                count++;
            }
            sort(arr.begin(),arr.end());
        }
    }
    return 0;
}