#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}
class DataStream {
    private:
    int value;
    int k;
    int cnt;
public:
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
        this->cnt=0;
    }
    
    bool consec(int num) {
        if(value!=num){
            cnt=0;
            return false;
        }
        else{
            cnt++;
            if(cnt>=k){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */