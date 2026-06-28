#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a;
        cin>>a;
        int turn=0;
        int moves=0;
        while(moves<=10){
            if(turn==0){
                if(((a+1)%3==0) || ((a-1)%3==0)){
                    cout<<"First"<<endl;
                    break;
                }
                turn=1;
                moves++;
            }else{
                turn=0;
            }
        }
        if(moves>10){

            cout<<"Second"<<endl;
        }
    }
    return 0;
}