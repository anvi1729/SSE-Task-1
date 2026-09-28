#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++){
        int min=v[n-1];
        int pos=n-1;
        for(int j=i; j<n-1; j++){
            if(v[j]<min){
            min=v[j];
            pos=j;
            }
        }
        swap(v[i],v[pos]);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}