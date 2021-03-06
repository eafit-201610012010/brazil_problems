// Andrés Mejía
using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

////////////// Prewritten code follows. Look down for solution. ////////////////
#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << (x) << endl

const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}
////////////////////////// Solution starts below. //////////////////////////////

const int oo = INT_MAX / 2 - 5;
int g[105][105];

int main(){
    #ifndef LOCAL
    #define problem_name "average"
    assert( freopen(problem_name ".in", "r", stdin) != NULL);
    assert( freopen(problem_name ".out", "w", stdout) != NULL);
    #endif
    
    int n, e;    
    cin >> n >> e;
    
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
	g[i][j] = oo;
      
    
    
     for (int i = 0; i < e; ++i){
      int u, v, w;
      cin >> u >> v >> w;
      u--, v--; 
      if (w < g[u][v]) g[u][v] = w;
    }
    
    for (int k = 0; k < n; ++k){
      for (int i = 0; i < n; ++i){
	for (int j = 0; j < n; ++j){ 
	  g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
	}
      }
    }
       
    int sum = 0, count = 0;
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
      if (i == j) continue;
      
      if (g[i][j] < oo) {
	sum += g[i][j];
	count++;
      }
    }
    assert(count > 0);
    
    printf("%.6lf\n", 1.0 * sum / count);
    
    return 0;
}


