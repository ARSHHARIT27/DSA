#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> student(n);
    vector<int> one;
    vector<int> two;
    vector<int> three;
    for(int i=0;i<n;i++){
        cin>>student[i];
    }
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(student[i]==1){c1++;}
        else if(student[i]==2){c2++;}
        else{c3++;}
    }
    int mi=min(c1,c2);
    mi=min(mi,c3);
    cout<<mi<<endl;
    for(int i=0;i<n;i++){
        if(student[i]==1){one.push_back(i+1);}
        else if(student[i]==2){two.push_back(i+1);}
        else{three.push_back(i+1);}
    }
    for(int i=0;i<mi;i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}