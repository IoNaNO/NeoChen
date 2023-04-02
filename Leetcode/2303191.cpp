#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<bool>> tool;
vector<pair<int,int>> dir={{0,1},{0,-1},{1,0},{-1,0}};

bool inmat(pair<int,int> pos){
    return pos.first>=0&&pos.first<n&&pos.second>=0&&pos.second<m;
}

bool isSame(vector<string>&mat,pair<int,int> pos,char color){
    
    if(inmat(pos)==false){
        return false;
    }
    if(tool[pos.first][pos.second]==true){
        return false;
    }
    if(mat[pos.first][pos.second]==color){
        tool[pos.first][pos.second]=true;
        return true;
    }
    else{
        return false;
    }
}

bool abisSame(vector<string>&mat,pair<int,int> pos,char color){
    
    if(inmat(pos)==false){
        return false;
    }
    if(tool[pos.first][pos.second]==true){
        return false;
    }
    
    if(color=='R'){
        if(mat[pos.first][pos.second]==color){
            tool[pos.first][pos.second]=true;
            return true;
        }
    }
    else{
        if(mat[pos.first][pos.second]!='R'){
            tool[pos.first][pos.second]=true;
            return true;
        }
    }

    return false;
}

void dfs(vector<string>&mat,pair<int,int> pos){
    for(int i=0;i<dir.size();i++){
        pair<int,int> nx;
        nx.first=pos.first+dir[i].first;
        nx.second=pos.second+dir[i].second;
        if(isSame(mat,nx,mat[pos.first][pos.second])){
            dfs(mat,nx);
        }
    }
}

void abdfs(vector<string>&mat,pair<int,int> pos){
    for(int i=0;i<dir.size();i++){
        pair<int,int> nx;
        nx.first=pos.first+dir[i].first;
        nx.second=pos.second+dir[i].second;
        if(abisSame(mat,nx,mat[pos.first][pos.second])){
            abdfs(mat,nx);
        }
    }
}

int normal(vector<string>&mat){
    int cnt=0;
    tool.clear();
    tool.resize(n,vector<bool>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tool[i][j]==false){
                tool[i][j]=true;
                dfs(mat,make_pair(i,j));
                cnt++;  
            }
        }
    }
    return cnt;
}

int abnormal(vector<string>&mat){
    int cnt=0;
    tool.clear();
    tool.resize(n,vector<bool>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tool[i][j]==false){
                tool[i][j]=true;
                abdfs(mat,make_pair(i,j));
                cnt++;  
            }
        }
    }
    return cnt;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin>>n>>m;
    vector<string> mat;
    // tool.resize(n,vector<bool>(m));
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        mat.push_back(t);
    }

    cout<<normal(mat)-abnormal(mat)<<endl;
    return 0;
}