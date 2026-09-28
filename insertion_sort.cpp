#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        int k=v[i];
        int old_i=i;
        int swaps=0;
        for(int j=i; j>0; j--){
            if(k<v[i-1]){
                swaps++;
                i--;
            }
            else{
                break;
            }
        }
        while(swaps>=0){
            if(swaps==0) v[old_i]=k;
            else{v[old_i]=v[old_i-1];}
            swaps--;
            old_i--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
