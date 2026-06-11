#include<iostream>
using namespace std;
int main(){
    int a1,a2;
    int count=0;
    vector<int> arr;
    cin>> a1 >> a2;
    for(int i=0;i<a1;i++){
        int n; 
        cin>> n;
        arr.push_back(n);
    }
    int val=arr[a2-1];
    for(int i=0;i<a1;i++){
        if(arr[i] >0 && (val <= arr[i])){
            count++;
        }
    }
    cout<< count;
    return 0;
}
