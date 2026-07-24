/*
loops 
*/

#include<bits/stdc++.h>
using namespace std;
/*
print the loop untill it reaches the goal number like 1.2.3.4.5 stop if its on 3
*/int main(){
for(;;){
int x;
cin>>x;
    if(x==3){
        break;
    }
    
    cout<<x<<endl;
}
}