// Lapindromes.cpp
#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;*/
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(t)               int x; cin>>x; while(x--)
/*mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
*/
    
void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main(int argc, char const *argv[])
{
	// file_i_o();
	w(t){
		string str;
		cin>>str;
		int L = str.length();
		int countL[26] = {0};
		int countR[26] = {0};
		for (int i = 0; i < L/2; i++){
			int index = str[i] - 'a';
			countL[index]++;
		}
		for (int i = (L+1)/2; i < L; i++){
			int index =str[i] - 'a';
			countR[index]++;
		}
		bool res = 0;
		for (int i = 0; i < 26; ++i){
			if(countL[i] != countR[i])
				res = 1;
			else
				continue;
			
		}
		
		if(res==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
		
	return 0;
}