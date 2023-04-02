#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}

class Solution {
    private:
    int n,m,t;
    int binLowerRow(vector<vector<int>>& matrix,int l,int r){
        if(l>=r){
            return r-1;
        }
        int mid=l+(r-l)/2;
        if(matrix[mid][0]<=t){
            return binLowerRow(matrix,mid+1,r);
        }
        else {
            return binLowerRow(matrix,l,mid);
        }
    }
    int binEqualCol(vector<int>& array,int l,int r){
        if(l>=r){
            return -1;
        }
        int mid=l+(r-l)/2;
        if(array[mid]<t){
            return binEqualCol(array,mid+1,r);
        }
        else if(array[mid]>t){
            return binEqualCol(array,l,mid);
        }
        else{
            return mid;
        }
    }
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        if(matrix[0].empty()){
            return false;
        }
        m=matrix.size();
        n=matrix[0].size();
        t=target;

        int index=binLowerRow(matrix,0,m);
        for(int i=0;i<=index;i++)
        {
            if(binEqualCol(matrix[i],0,n)!=-1){
                return true;
            }
        }

        return false;
    }
    int a(){
        string s;
        s.replace(s.begin(),s.end(),"344");
    }
};

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<ListNode*> nodes;
        vector<int> res;
        for(ListNode* it=head;it;it=it->next){
            nodes.push_back(it);
        }
        for(auto it=nodes.rbegin();it!=nodes.rend();it++){
            res.push_back((*it)->val);
        }
        return res;
    }
};