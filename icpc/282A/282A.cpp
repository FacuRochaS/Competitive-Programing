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

    char s;
    char d;
    char e;
    while (i != n){
        
        cin>> s >> d >> e;

        if ( d == '-'){
            c--;
        }
        else {
            c++;
        }
           
        i++;
    }

    cout<<c;
    
}


//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable