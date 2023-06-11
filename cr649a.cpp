#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> arr(n);
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%x!=0){
        cout<<n<<endl;
        continue;

        }
        int fromStart = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%x!=0)
            break;
            fromStart++;
        }
        if(fromStart==n){
            cout<<-1<<endl;
            continue;
        }
        int fromEnd = 0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]%x!=0)
            break;
            fromEnd++;
        }

        cout<<max(n-fromStart-1,n-fromEnd-1)<<endl;

        
    }
}