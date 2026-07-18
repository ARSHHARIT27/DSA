#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0;
        for(int j=0;j<10;j++){
            string s;
            cin>>s;
            if(j==0 || j==9){
                //count x
                for(int i=0;i<10;i++){
                    if(s[i]=='X'){
                        count+=1;
                    }
                }
            }else if(j==1 || j==8){
                //countx
                for(int i=0;i<=9;i++){
                    if(i==0||i==9){if(s[i]=='X'){count+=1;}}
                    else{if(s[i]=='X'){count+=2;}}
                }
            }else if(j==2 || j==7){
                //countx
                for(int i=0;i<=9;i++){
                    if(i==0||i==9){if(s[i]=='X'){count+=1;}}
                    else if(i==1|| i==8){if(s[i]=='X'){count+=2;}}
                    else{if(s[i]=='X'){count+=3;}}
                }
            }else if(j==3 || j==6){
                for(int i=0;i<=9;i++){
                    if(i==0||i==9){if(s[i]=='X'){count+=1;}}
                    else if(i==1||i==8){if(s[i]=='X'){count+=2;}}
                    else if(i==2||i==7){if(s[i]=='X'){count+=3;}}
                    else{if(s[i]=='X'){count+=4;}}
                }
            }else if(j==4 || j==5){
                for(int i=0;i<=9;i++){
                    if(i==0||i==9){if(s[i]=='X'){count+=1;}}
                    else if(i==1||i==8){if(s[i]=='X'){count+=2;}}
                    else if(i==2||i==7){if(s[i]=='X'){count+=3;}}
                    else if(i==3||i==6){if(s[i]=='X'){count+=4;}}
                    else{if(s[i]=='X'){count+=5;}}
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}