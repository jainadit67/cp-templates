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

struct TrieNode{
	vector<TrieNode*>child;
	bool leaf;
	TrieNode(): child(26, nullptr), leaf(false){}
};

struct Trie{
	TrieNode* root;
	Trie(): root(new TrieNode()){}
	void insert(const string& s){
		TrieNode* curr=root;
		for(char j: s){
			int idx=j-'a';
			if(curr->child[idx]==nullptr) curr->child[idx]=new TrieNode();
			curr=curr->child[idx];
		}
		curr->leaf=true;
	}
	bool search(const string& s){
		TrieNode* curr=root;
		for(char j: s){
			int idx=j-'a';
			if(curr->child[idx]==nullptr) return false;
			curr=curr->child[idx];
		}
		return curr!=nullptr && curr->leaf;
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
