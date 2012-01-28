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

map<string, string> g;

string randomS(int len) {
    string ans = "";
    for (int i = 0; i < len; ++i){
        ans += char(rand() % 1 + 'a');
    }
    return ans;
}

int main(){
    cout << randomS(20) << " "  << randomS(20) << " " << 100 << endl;
    for (int i = 0; i < 100; ++i) {
        int len = rand() % 20 + 1;
        cout << randomS(len) << " " << randomS(len) << endl;
    }
    cout << ".";
    return 0;
}
