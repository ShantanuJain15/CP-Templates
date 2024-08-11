class DisjointSet{
  public: 
   vector<int> size,parent;

   DisjointSet(int n){
    size.resize(n+1,0);
    parent.resize(n+1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
   }
    int find_par(int x){
        if(x==parent[x])return x;

        return parent[x]=find_par(parent[x]);//path compression 
    }
    void unionbysize(int u,int v){
        int a=find_par(u);
        int b=find_par(v);
        if(a==b)return;

        if(size[a]>size[b]){
            parent[b]=a;
            size[a]+=size[b];
        }else{
            parent[a]=b;
            size[b]+=size[a];
        }
    }

   };
