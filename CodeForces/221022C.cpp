/**
  * @file    :221022C.cpp
  * @brief   :C. Save the Magazines
  * @author  :NeoChen
  * @version :V1.0.0
  * @date    :2022-10-22
  */
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        string lids;
        vector<int> mags;
        cin>>lids;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            mags.push_back(t);

        }
        lids.push_back('0');
        int maxval=0;
        int val=0;
        bool change=false;
        int st,ed;
        for(int i=1;i<=n;i++)
        {
            if(change==false)
            {
                if(lids[i]=='1'){
                    st=i-1;
                    change=true;
                    val+=mags[i-1];
                    val-=mags[i];
                    if(val>maxval)
                    {
                        ed=i;
                        maxval=val;
                    }
                }
                else{
                    continue;
                }
            }
            else{
                if(lids[i]=='1'){
                    val+=mags[i-1];
                    val-=mags[i];
                    if(val>maxval)
                    {
                        ed=i;
                        maxval=val;
                    }
                }
                else{
                    change=false;
                    if(maxval){
                        lids[st]='1';
                        lids[ed]='0';
                    }
                    maxval=0;
                    val=0;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(lids[i]=='1')
            {
                ans+=mags[i];
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}