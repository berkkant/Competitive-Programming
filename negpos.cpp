#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;
long long solve(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i+1<n;i=i+2){
        if(arr[i]>0) break;
        long long prev = arr[i];
        long long later = arr[i+1];
        if(abs(prev)>=abs(later)){
            sum-=2*prev;
            sum-=2*later;

        }


    }

    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}