#include<bits/stdc++.h>
using namespace std;

void printvec(vector<string> names ){
    cout<<"size:" <<names.size()<<endl;
    for(int i=0;i<names.size();i++){
        cout<<names[i]<<" ";
    }
    cout<<endl;
}
void inputvec(int n,vector<string> &names){
    for(int i=0 ;i<n;i++){
        string x;
        cin>>x;
        names.push_back(x);
    }

}

int main(){
    vector<string> names;
    // vector<pair<int,int>> vecpair;
    cout<<"enter the number of student"<<endl;
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     string x ;
    //     cin>>x;
    //     names.push_back(x);
    inputvec(n,names);
    printvec(names);
    // }
}