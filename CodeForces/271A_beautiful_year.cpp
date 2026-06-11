#include<iostream>
using namespace std;
int main(){
   int y;
   cin>>y;
   int t=1;
   int temp=y+1;
   int year;
   while(t){
    year=temp;
    int a=year%10;
    year/=10;
    int b=year%10;
    year/=10;
    int c=year%10;
    year/=10;
    int d=year%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        break;
    }
    temp+=1;
   }
   cout<< temp;
   return 0;
}