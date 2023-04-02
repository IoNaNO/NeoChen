#include<bits/stdc++.h>
using namespace std;

double cal(int a,int b,char op){
    switch (op)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
        return (double)a/b;
    default:
        break;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> arr(n);
    vector<char> op(n,'+');
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int m;
    cin>>m;
    while(m--){
        double res=0;
        int pos;
        cin>>pos;
        cin>>op[pos];
        if(op[pos]=='+'){
            res=sum;
        }
        else if(op[pos]=='-'){
            res=sum-2*arr[pos];
        }
        else {
            res=sum-arr[pos-1]-arr[pos];
            res+=cal(arr[pos-1],arr[pos],op[pos]);
        }
        printf("%.1f ",res);
        op[pos]='+';
    }


    return 0;
}