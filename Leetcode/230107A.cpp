#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    return 0;
}
typedef long long ll;
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=false;
        bool heavy=false;
        ll v=(ll)length*width*height;
        bulky=(length>=1e5||width>=1e5||height>=1e5)||v>=1e9;
        heavy=mass>=100;
        if(bulky&&heavy){
            return "Both";
        }
        else if(bulky){
            return "Bulky";
        }
        else if(heavy){
            return "Heavy";
        }
        else{
            return "Neither";
        }
        return "False";
    }
};