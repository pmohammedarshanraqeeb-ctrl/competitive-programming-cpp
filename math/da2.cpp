#include<bits/stdc++.h>
using namespace std;

void vecpairinput(vector<pair<string,string>> &v){
    // enter the number for condition of loop 
    cout<<"enter the count of  student pairs going on a prom "<<endl;
    int n;
    cin>>n;

    // loop for input 

    for(int i =0; i<n;i++){
        string a,b;
        cout<<"enter the boy`s name"<<endl;
        cin>>a;
        cout<<"ente the girl`s name"<<endl;
        cin>>b;
        v.push_back({a,b});
    }


}

void vecpairoutput(vector<pair<string,string>> v){
    for(int i =0;i<v.size();i++){
        cout<<"the pairs are "<<endl;
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main(){
// how to nesting the vectors 
vector<pair<string,string>> v;
vecpairinput(v);
vecpairoutput(v);
vector<pair<string,string>> v2;
vecpairinput(v2);
vecpairoutput(v2);






}