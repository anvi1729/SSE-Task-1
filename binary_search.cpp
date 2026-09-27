#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int target; 
    cin>>target;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int idx=-1;
    int i=0; 
    int j=n-1;
    int avg=(i+j)/2;
    while(i<=j){
        if(v[avg]==target){
            idx=i;
            break;
        }
        else if(v[avg]<target){
            i=avg+1;
            avg=(i+j)/2;
        }
        else{
            j=avg-1;
            avg=(i+j)/2;
        }
    }
    cout<<idx;
    return 0;
}