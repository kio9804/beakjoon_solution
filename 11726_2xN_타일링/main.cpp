#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

#define fast() cin.tie(NULL), ios::sync_with_stdio(false)
using namespace std;
long long d[10001];

long long dp(int n) {
    d[1] = 1;
    d[2] = 2;
    for(int i = 3; i <=n; i++){
        d[i] = (d[i - 1] + d[i - 2]) % 10007;
    }
    return d[n];
}

int main() {
    fast();
    int n;
    cin >> n;
    cout << dp(n);
}
