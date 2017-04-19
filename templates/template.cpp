////////////includes/////////////////
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
///////////functions/////////////
typedef long long ll;
#define vec vector
#define vi vector<int>
#define vd vector<double>
#define dict unordered_map
const int INF = 1 << 29;
inline bool equal(const double& a, const double& b) { return fabs(a - b) < 1e-9; }
inline int two(const int& n) { return 1 << n; }
inline int test(const int& n, const int& b) { return (n >> b) & 1; }
inline void set_bit(int& n, const int& b) { n |= two(b); }
inline void unset_bit(int& n, const int& b) { n &= ~two(b); }
inline int last_bit(const int& n) { return n & (-n); }
inline int ones(int n)
{
    int res = 0;
    while (n && ++res)
        n -= n & (-n);
    return res;
}
template <class T>
void chmax(T& a, const T& b) { a = max(a, b); }
template <class T>
void chmin(T& a, const T& b) { a = min(a, b); }
////////////operator overloading////////////
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << "> " << #x << " = " << x << endl;
#else
    #define debug(x) 
#endif

template <typename F, typename S>
ostream& operator<<(ostream& os, const pair<F, S>& p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    os << "[";
    typename vector<T>::const_iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream& operator<<(ostream& os, const set<T>& v)
{
    os << "[";
    typename set<T>::const_iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream& operator<<(ostream& os, const map<F, S>& v)
{
    os << "{";
    typename map<F, S>::const_iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if (it != v.begin())
            os << ", ";
        os << it->first << ": " << it->second;
    }
    return os << "}";
}
////////////main////////////
void solution();
int main()
{
    cin.sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    solution();
    return 0;
}
/////////////////////////////////////////////////solution////////////////////////////////////////////////////////////

void solution()
{
    
}
