#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    cin.tie(0);  
    cout.tie(0);

    long long n;
    long long m;
    long long a;
    cin >> n >> m >> a;
    long long r;

    long long b = n/a;
    long long h = m/a;

    if(n%a != 0){
        b++;
    }
    if(m%a != 0){
        h++;
    }
    r = ( h*b );

    cout<<r;
    
}


//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable