#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int j=n-1; j>0; j--){
        for(int i=0; i<j; i++){
        if(v[i]>v[i+1]) swap(v[i],v[i+1]);
    }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

