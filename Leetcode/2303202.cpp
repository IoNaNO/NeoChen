#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> nums(n);
        map<int,vector<int>> record;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            record[nums[i]].push_back(i);
        }
        vector<vector<int>> tool(n);
        vector<int> l(n);
        vector<int> r(n);
        for(int i=0;i<n;i++){
            for(auto it=record[nums[i]+1].begin();it<record[nums[i]+1].end();it++){
                if(*it<i){
                    tool[i].push_back(*it);
                }
            }

        }
        vector<int> res(n);
        int k=0;
        for(int i=0;i<n;i++){
            if(!tool[i].empty()){
                l[k]=i;
                res[k++]+=tool[i].size();
                
                for(auto it=tool[i].begin();it<tool[i].end();it++){
                    for(int j=0;j<k;j++){
                        if(*it<l[j]){
                            res[j]++;
                        }
                    }
                }
            }
        }
        int fi=0;
        for(int i=0;i<k;i++){
            if(res[i]>fi){
                fi=res[i];
            }
        }
        cout<<fi<<endl;
    }


    return 0;
}