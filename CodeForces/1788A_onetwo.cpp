#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int count=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
            if(a==2){
                count++;
            }
        }
        if(count%2!=0){
            cout<<-1<<"\n";
        }else{
            count=count/2;
            for(int i=0;i<arr.size();i++){
                if(arr[i]==2){
                    count--;
                }
                if(count==0){
                    cout<<i+1<<"\n"; 
                    break;
                }
            }
        }
    } 
    return 0;
}
