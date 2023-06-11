#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cmath>


using namespace std;

bool solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}