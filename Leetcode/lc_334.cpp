#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> A;
        vector<int> B;
        for(auto&m:nums){
            if(A.empty()&&B.empty()){
                A.push_back(m);
                continue;
            }
            if(A.size()==2){
                if(m>A[1]){
                    return true;
                }
                else if(m>A[0]){
                    A[1]=m;
                }
                else
                {
                    if(B.empty()){
                        B.push_back(m);
                    }
                    else if(B.size()==1){
                        if(m<B[0]){
                            B[0]=m;
                        }
                        else if(m!=B[0])
                        {
                            B.push_back(m);
                            A.clear();
                        }
                    }
                }
                continue;
            }
            if(B.size()==2){
                if(m>B[1]){
                    return true;
                }
                else if(m>B[0]){
                    B[1]=m;
                }
                else
                {
                    if(A.empty()){
                        A.push_back(m);
                    }
                    else if(A.size()==1){
                        if(m<A[0]){
                            A[0]=m;
                        }
                        else if(m!=A[0]){
                            A.push_back(m);
                            B.clear();
                        }
                    }
                }
                continue;                
            }
            if(A.size()==1){
                if(m<A[0]){
                    A.clear();
                    A.push_back(m);
                }
                else if(m!=A[0]){
                    A.push_back(m);
                }
                continue;
            }
        }
        return false;
    }
};

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT32_MAX;
        int b=INT32_MAX;
        for(auto i:nums){
            if(i<=a){
                a=i;
            }
            else if(i<=b){
                b=i;
            }
            else{
                return true;
            }
        }
        return false;
    }
};