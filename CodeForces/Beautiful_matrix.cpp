#include<iostream>
using namespace std;
int main(){
   int val;
   int spi,spj;
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin >> val;
        if(val==1){
            spi=i;
            spj=j;
        }
    }
   }
   int valj=abs(spj-2);
   int vali=abs(spi-2);
   cout<< vali+valj;

   return 0;
}