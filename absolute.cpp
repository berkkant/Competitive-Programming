#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cmath>


using namespace std;

int solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    double right = INT_MAX;
    double left = 0;

    for(int i=0;i<n-1;i++){
        //a ,b
        if(arr[i]>arr[i+1]){
            left = max(left,(arr[i]+arr[i+1])/2.0);
            //cout<<(arr[i]+arr[i+1])/2.0<<endl;
        }
        else if(arr[i]<arr[i+1]){
            right = min(right,(arr[i]+arr[i+1])/2.0);
            //cout<<(arr[i]+arr[i+1])/2.0<<endl;
        }
        if(left>right){
            return -1;
        }
    }
    //cout<<left<<" "<<right<<endl;
    if(ceil(left)>floor(right)) return -1;
    return ceil(left);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        cout<<solve()<<endl;
    }
}