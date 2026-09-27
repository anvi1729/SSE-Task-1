#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int target;
    cin>>target;
    int idx=-1;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]==target){
            idx=i;
            break;
        }
    }
    cout<<idx;
    return 0;
}