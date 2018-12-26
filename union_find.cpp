int Find(int v) {
    if(p[v] == v) return v;
    return Find(p[v]);
}

void Union(int u, int v) {
    u = Find(u);
    v = Find(v);

    if(u == v) return;
    if(rank[u] > rank[v]) swap(u,v);
    rank[v] += rank[u];
    p[u] = v;
}

void main() {
    for(int i = 0; i < N; i++) {
        rank[i] = 1;
        p[i] = i;
    }

    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            if(M[i][j] == 1)
                Union(i, j);
        }
    }
}
