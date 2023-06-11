#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min_el = *min_element(arr.begin(),arr.end());
        int index = 1;
        for(int i=0;i<n;i++){
            if(arr[i]==min_el){
                index = i;
                break;
            }
        }
        cout<<n<<endl;
        cout<<index<<" "<<0<<" " <<arr[index]<<" "<<arr[index]<<endl;
        arr[0] = min_el;

        for(int i=0;i<n-1;i++){
            cout<<0<<" "<<i+1<<" " <<arr[0]<<" "<<arr[0]+i+1<<endl;
            arr[i+1] = arr[0]+i+1;

        }
    }
}