#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    cin.tie(0);  
    cout.tie(0);

    int n;
    cin >> n;

    int i = 0;
    int c = 0;

    int p;
    int v;
    int t;
    while (i != n){
        
        cin>> p >> v >> t;

        if ((p+v+t) > 1){
            c++;
        }
         i++;
    }

    cout<<c;
    
}


//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable