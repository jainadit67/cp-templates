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

struct Graph{
	int n;
	vector<vector<int> >adj;
	vector<bool>vis;
	Graph(int n): n(n), adj(n+1), vis(n+1, 0){}
	void addEdge(int u, int v){
		adj[u].push_back(v), adj[v].push_back(u);
	}
	void dfs(int i){
		vis[i]=true;
		for(int j: adj[i]){
			if(!vis[j]) dfs(j);
		}
	}
};

void solve(){

}

int main(){
	fast;
	int t;
	//t=1;
	cin>>t;
	while(t--){
		solve();
		//cout<<(solve()?"yes\n":"no\n");
	}
}
