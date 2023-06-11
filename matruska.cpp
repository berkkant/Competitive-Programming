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
        unordered_map<int,int> freq;
        for(int x:arr)
        freq[x]++;

        vector<pair<int,int>> v;
        for(auto x:freq)
        v.push_back(x);

        sort(v.begin(),v.end());


        int counter = 0;

        int start = 0;
        int sz = v.size();


        while(true){
        cout<<"xxxxxxx"<<endl;
        int bef = -1;
        for(int i=start;i<sz;i++){
            if(i!=start){
                if(v[i].first !=bef+1||v[i].second==0) break;
                v[i].second--;
                bef = v[i].first;

            }
            else{
                bef = v[i].first;
                v[i].second--;
            }

        }
        counter++;
        bool flag = false;
            if(v[start].second==0){
                for(int i=start+1;i<n;i++){
                    if(v[i].second!=0){
                        flag = true;
                        start =i;
                        break;
                    }
                }
            }
            for(int i=0;i<sz;i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
            if(!flag){
                break;
            }

            }
        }
        cout<<counter<<endl;

        cout<<"xxxxxxx"<<endl;


    }
}