#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ff              first
#define ss              second
#define ll              long long
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr= new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define mt19937         rng(chrono::steady_clock::now().time_since_epoch().count());
#define pb              push_back
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >


typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void mario_enith_cpp()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


ll mario_pochur_coins = 0, mario_enith_bhai = 0;

int32_t main()
{
	ll m, n, i, j;
	cin >> m >> n;
	string s;
	vector<string>six(m);
	vector<vector<ll>>v1(m, vector<ll>(n, 0));
	for (i = 0; i < m; i++) {
		cin >> v[i];
	}
      for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
          if (i == 0) {
            if (v[i][j] == 'C') {
              mario_pochur_coins++;
              v1[i][j] = m - i - 1;
            }
          }
          else {
            if (v[i][j] == 'C') {
              mario_pochur_coins++;
              ll a = m - i - 1;
              v1[i][j] = min(v1[i - 1][j], -a);
            }
            else if (v[i][j] == 'H') {
              if (v[i - 1][j] == 'H') {
                v1[i][j] = v1[i - 1][j];
              }
              else {
                v1[i][j] = m - i;
              }
            }
            else if (v1[i - 1][j] < 0) {
              v1[i][j] = v1[i - 1][j];
            }
          }
        }

	}
	for (i = 0; i < n; i++) {
		if (v1[m - 1][i] < 0) {
			ll a = v1[m - 1][i];
			mario_enith_bhai += -a;
		}
		else {
			mario_enith_bhai += v1[m - 1][i];
		}
	}
	mario_enith_bhai = 2 * mario_enith_bhai;
	cout << mario_pochur_coins << " " << mario_enith_bhai;

	return 0;
}