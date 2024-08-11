struct UnionFindByRank
{
    int n;
    vector<int> rank,parent;

    UnionFindByRank(int n) {
        rank.resize(n);
        parent.resize(n);
        fill(rank.size(), rank.begin(), 0);
        for(int i = 0; i < n;i++){
            parent[i]=i;
        }
    }
    int find_par(int x){
       return parent[x] = (parent[x] == x ? x : find_par(parent[x]));
    }

    void unionbyrank(int u,int v){
        int a=find_par(u);
        int b=find_par(v);
        if(a==b) return;
        if(rank[a]==rank[b]){
            parent[a]=b;
            rank[b]++;
        }
        else if(rank[a]>rank[b])parent[b]=a;
        else parent[a]=b;  

    }

};
