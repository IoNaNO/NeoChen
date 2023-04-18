#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
public:
    /**
     * 
     * @param head ListNode类 
     * @param m int整型 
     * @param n int整型 
     * @return ListNode类
     */
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        // write code here
        int cnt=1;
        ListNode* st = nullptr, * pre = nullptr;
        ListNode* ed = nullptr, * after = nullptr;
        ListNode* nx=nullptr;
        ListNode* last = nullptr;
        for(ListNode* ptr=head;ptr;ptr=nx){
            nx=ptr->next;
            if(cnt<m){
                if(cnt==m-1){
                    pre=ptr;
                }
            }
            else if(cnt==m){
                last=ptr;
                st=ptr;
            }
            else if(cnt>m&&cnt<n){
                ptr->next=last;
                last = ptr;
            }
            else if(cnt==n){
                ptr->next=last;
                ed=ptr;
            }
            else{
                if(cnt==m+1){
                    after=ptr;
                }
            }
            cnt++;
        }
        pre->next=ed;
        st->next=after;
        
        return head;
    }
    vector<int> sortArray(vector<int>& nums) {

        function<void(int, int)> quicksort = [&](int l, int r) {
            if (l >= r) {
                return;
            }
            int num = nums[l];
            int ptrl = l + 1;
            int ptrr = r;
            int p = l;
            while (ptrl < ptrr) {
                while (ptrl <= r && nums[ptrl] <= num) {
                    ptrl++;
                }
                while (ptrr >= l && nums[ptrr] > num) {
                    ptrr--;
                }
                if (ptrl < ptrr) {
                    int k = nums[ptrl];
                    nums[ptrl] = nums[ptrr];
                    nums[ptrr] = k;
                    ptrl++;
                    ptrr--;
                }
            }
            if (ptrl <= r && nums[ptrl] < num) {
                nums[l] = nums[ptrl];
                nums[ptrl] = num;
                p = ptrl;
            }
            else if (ptrr >= l && nums[ptrr] < num) {
                nums[l] = nums[ptrr];
                nums[ptrr] = num;
                p = ptrr;
            }
            cout << p << endl;
            quicksort(l, p - 1);
            quicksort(p + 1, r);
            return;
        };
        quicksort(0, nums.size() - 1);
        return nums;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution s;

    vector<int> arr = { 5,1,1,2,0,0 };
    s.sortArray(arr);


    return 0;
}