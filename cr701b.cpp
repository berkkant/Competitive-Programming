#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int main(){
    int n,q,k;
    cin>>n>>q>>k;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        cout<<k+arr[r]-arr[l]-(r-l)-(r-l+1)<<endl;

    }
    
}