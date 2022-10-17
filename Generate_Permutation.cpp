#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define REP(i, a, b) for(int i = a; i < b; i++)

vi permutation;
int n;
vector<bool> chosen;

void search(){
    if (permutation.size() == n){
        REP(i, 0, n){
            cout << permutation[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 1; i <= n; i++){
        if (chosen[i]) continue;

        chosen[i] = true;
        permutation.push_back(i);

        search();

        chosen[i] = false;
        permutation.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("C:/Users/user/CLionProjects/Problem_Solving/input.txt", "r", stdin);
    freopen("C:/Users/user/CLionProjects/Problem_Solving/output.txt", "w", stdout);

    cin >> n;
    chosen.resize(n+1, false);
    search();

    return 0;
}
