
vector<int>g[100000];
bool vis[100000];
int len[100000];

int bfs(int start, int end) {
    queue<int>Q;
    Q.push(start);
    vis[start] = 1;
    len[start] = 0;

    while(!Q.empty()) {
        int u = Q.front();
        if(u == end) return len[u];
        Q.pop();
        for(int i = 0; i < g[u].size(); i++) {
            int v = g[u][i];
            if(!vis[v]) {
                len[v] = len[u] + 1;
                vis[v] = 1;
                Q.push(v);
            }
        }
    }
    return NULL;
}

