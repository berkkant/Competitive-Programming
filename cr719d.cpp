#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            arr[i] = arr[i]-i;
        }

        unordered_map<int,int> freq;

        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        long long ans = 0;

        for(auto it:freq){
            if(it.second>=2){
                long long num = it.second;
                ans = ans + num*(num-1)/2;
            }
        }

        cout<<ans<<endl;



    }
    
}