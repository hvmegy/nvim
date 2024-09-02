// [ нvмegy ]
// OLPSIEUCUP AND ICPC 2024 GOTOHANOI

#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define int long long
 
#define all(c) c.begin(), c.end()
#ifdef hvmegy
#define dbg(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
	cerr << "[" << vars << " : ";
	string delim = "";
	(..., (cerr << delim << values, delim = ", "));
	cerr << "]" << '\n'; 
}
#else
#define dbg(...)
#endif
 
mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());
 
int GOTOHANOI();
void init(); 
 
int32_t main()
{
        cin.tie(0) -> sync_with_stdio(0); 
        cout << fixed << setprecision(15);
	
	#ifdef hvmegy
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	freopen("log.txt", "w", stderr);
	#endif



	// =============================
        	bool MULTITEST = 0; 
	// =============================
	
	init(); 
        int OLPSIEUCUP2024 = 1; 
        if (MULTITEST) cin >> OLPSIEUCUP2024; 
	for (int i = 1; i <= OLPSIEUCUP2024; i++) {
		if (GOTOHANOI()) break;
		#ifdef hvmegy
			cout << "--ENDTEST--" << '\n';
			cerr << "--ENDTEST--" << '\n';
		#endif
	}

	#ifdef hvmegy
		cerr << '\n' << clock() * 1000.0 / CLOCKS_PER_SEC << "ms" << '\n';
	#endif

        return 0;
}

void init() {}

int GOTOHANOI() { 
	
	
	return 0; 
}
