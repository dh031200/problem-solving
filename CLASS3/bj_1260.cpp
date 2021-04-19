#include<bits/stdc++.h>
using namespace std;

vector<int> Node;
vector<vector<int>> Connected;
vector<bool> Visit;
vector<int> Result;
queue<int> Q;
int N;
void DFS(int s){
    if(Result.size() == N){
        return;
    }
    else{
        for (int i = 0; i < Connected[s].size(); ++i) {
            if(Visit[Connected[s][i]])
                continue;
            Visit[Connected[s][i]] = true;
            Result.push_back(Connected[s][i]);
            DFS(Connected[s][i]);
        }
    }
}

void BFS(int s){
    Q.push(s);
    Visit[s] = true;
    Result.push_back(s);
    while(!Q.empty()){
        for (int i = 0; i < Connected[Q.front()].size(); ++i) {
            if(Visit[Connected[Q.front()][i]])
                continue;
            Visit[Connected[Q.front()][i]] = true;
            Q.push(Connected[Q.front()][i]);
            Result.push_back(Connected[Q.front()][i]);
        }
        Q.pop();
    }
}

int main(){
    int M, V;
    int node1, node2;
    cin >> N >> M >> V;
    Node.resize(N+1);
    Connected.resize(N+1);
    Visit.resize(N+1);
    Visit[0] = true;
    for (int i = 0; i < M; ++i) {
        cin >> node1 >> node2;
        Connected[node1].push_back(node2);
        Connected[node2].push_back(node1);
    }
    for (auto & i : Connected) {
        sort(i.begin(),i.end());
    }
    Result.push_back(V);
    Visit[V]=true;
    DFS(V);
    for (int i : Result) {
        cout << i << ' ';
    }
    cout << '\n';
    for (auto && i : Visit) {
        i = false;
    }
    Visit[V] = true;
    Result.clear();
    BFS(V);
    for (int i : Result) {
        cout << i << ' ';
    }
    cout << '\n';
}