#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> hv;
    vector<int> av;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        int h,a;
        cin>>h>>a;
        hv.push_back(h);
        av.push_back(a);
    }
    for(int i=0;i<hv.size();i++){
        for(int j=0;j<av.size();j++){
            if(hv[i]==av[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}