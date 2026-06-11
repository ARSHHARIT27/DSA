#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    string s;
    cin>> s;
    unordered_set<char> se;
    for(char x:s){
        se.insert(x);
    }
    if(se.size()%2){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
   return 0;
}