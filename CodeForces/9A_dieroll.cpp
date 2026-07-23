#include<iostream>
using namespace std;
int main(){
    int y,w;
    cin>>y>>w;
    int hi=max(y,w);
    if(hi==1){cout<<"1/1";}
    else if(hi==2){cout<<"5/6";}
    else if(hi==3){cout<<"2/3";}
    else if(hi==4){cout<<"1/2";}
    else if(hi==5){cout<<"1/3";}
    else if(hi==6){cout<<"1/6";}
    return 0;
}