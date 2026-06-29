#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n;   
    cin>>k;
    cin>>l;
    int capa=k*l;
    cin>>c;
    cin>>d;
    int piece=c*d;
    cin>>p;
    cin>>nl;
    int posd=(capa)/nl;
    cin>>np;
    int posS=(p/np);
    int mi=min(posd,posS);
    mi=min(mi,piece);
    cout<<(mi/n);
    return 0;
}