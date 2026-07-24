#include<bits/stdc++.h>
using namespace std;

void print(stack<string> s ){
    int orginalsize= s.size();
    cout<<"["<<ends;
    for(int i = 0; i<orginalsize;i++){
        if(s.size()==0){
            cout<<"the stack is empty "<<endl;
        }
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<"]"<<ends;
}
int main(){
    stack<string> s;
    s.push("xi jing ping");
    s.push("modih ji ");
    print(s);
 
    


}