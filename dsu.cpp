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

struct DSU{
	int n;
	vector<int> par, sz;
	DSU(int n): n(n), par(n+1), sz(n+1, 1){
		for(int i=1;i<=n;i++) par[i]=i;
	}
	int find_set(int a){
		if(par[a]==a) return a;
		return par[a]=find_set(par[a]);
	}
	bool union_set(int a, int b){
		a=find_set(a);
		b=find_set(b);
		if(a==b) return false;
		if(sz[a]>sz[b]) swap(a, b);
		par[a]=b;
		sz[b]+=sz[a];
		return true;
	}
};

void solve(){
	
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
