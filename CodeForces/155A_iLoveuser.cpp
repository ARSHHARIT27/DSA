#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int min,max;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        if(i==0){
            min=s;
            max=s;
        }else{
            if(s>max){
                max=s;
                count++;
            }else if(s<min){
                min=s;
                count++;
            }
        }
    }
    cout<< count;
    return 0;
}