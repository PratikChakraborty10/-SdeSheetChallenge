#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int n) {
    vector<vector<int>> r(n);
    for(int i=0;i<n;i++) {
        r[i].resize(n+1);
        r[i][0] = r[i][i] = 1;
        for(int j=1;j<i;j++) {
            r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    }
    return r;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> ans = generate(n);
        for(int i=0;i<ans.size();i++) {
            for(int j=0;j<ans[0].size();j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}