#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cout<<"enter the number to find the prime of"; 
    cin>>n;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        cnt++;
        }
    }
    cout<<cnt;
}