#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"enter the amount of student pairs in prom"<<endl;
    cin>>size;
     pair<string, string>* studentpair = new pair<string, string>[size];
    
    
    cout<<"enter the names of student "<<endl;
    for(int i=0;i<size;i++){
        cin>>studentpair[i].first>>studentpair[i].second;
        
    }
    cout<<"the students are "<<endl;
    for(int i=0;i<size;i++){
        cout<<studentpair[i].first<<" "<<studentpair[i].second<<endl;
    }
delete[] studentpair; 

}