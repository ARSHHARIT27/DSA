#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int high=max(a,b);
    high=max(high,c);
    int low=min(a,b);
    low=min(low,c);
    int mid;
    if(a!=high && a!=low){mid=a;}
    else if(b!=high && b!=low){mid=b;}
    else if(c!=high && c!=low){mid=c;}
    cout<<(high-mid)+(mid-low);
    return 0;
}