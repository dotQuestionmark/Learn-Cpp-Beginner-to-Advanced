#include <bits/stdc++.h> //Godfather

using namespace std;

int main(void)
{
    int n, b; cin >> n >> b;
    int cost[n];
    for(int i=0; i<n; i++){
        cin >> cost[i];
    }

    sort(cost, cost+n);

    int ptr=0, count= 0;
    while(ptr<n && b>=cost[ptr]){
        count ++;
        b = b - cost[ptr];
        ptr++;
    }

    cout << count << endl;

    return 0;
}