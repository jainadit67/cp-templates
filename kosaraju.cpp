#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <stack>
#include <fstream>
#include <queue>
#include <iomanip>
#include <iterator>
#include <map>
#include <unordered_map>
#include <climits>
#include <cstdint>
#include <set>
#include <assert.h>
#include <numeric>
#include <random>
#include <chrono>

#define fast ios_base::sync_with_stdio(false)
using namespace std;

#define mxn (long long)(1e5+5)
#define mod (long long)(1e9+7)
#define mod1 (uint64_t)(998244353)
#define inf (long long)(3e5)

//mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());

struct Kosaraju{
	int n, comp=0;
	vector<vector<int> >adj[2];
	vector<bool>vis;
	vector<int>ord, scc, id;
	Kosaraju(int n): n(n), vis(n+1, 0), id(n+1){adj[0].resize(n+1), adj[1].resize(n+1);}
	void addEdge(int u, int v){
		adj[0][u].push_back(v), adj[1][v].push_back(u);
	}
	void dfs(int i,int f, int idx=0){
		vis[i]=1;
		for(int j: adj[f][i]){
			if(!vis[j]) dfs(j, f, idx);
		}
		if(!f) ord.push_back(i);
		else id[i]=idx;
	}
	void kosarajuSolver(){
		for(int i=1;i<=n;i++) if(!vis[i]) dfs(i, 0);
		vis.clear();
		vis.resize(n+1, 0);
		for(int i=n-1;i>=0;i--) if(!vis[ord[i]]){
			dfs(ord[i], 1, ++comp);
			scc.push_back(ord[i]);
		}
	}
};

void solve(){
	int n, m;
	cin>>n>>m;
	Kosaraju g(n);
	while(m--){
		int a, b;
		cin>>a>>b;
		g.addEdge(a, b);
	}
	g.kosarajuSolver();
	cout<<g.comp<<endl;
	for(int i=1;i<=n;i++) cout<<g.id[i]<<" ";cout<<endl;
}

int main(){
	fast;
	int t;
	t=1;
	//cin>>t;
	while(t--){
		solve();
		//cout<<(solve()?"yes\n":"no\n");
	}
}
