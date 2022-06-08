#include<bits/stdc++.h>
using namespace std;
// Brute
// Time = O(n) + O(n)
// Space = O(n)
vector<int> repeatAndMissingElement_Btute(vector<int> arr) {
    int n = arr.size()+1;
    vector<int> subs(n,0);
    vector<int> ans;
    for(int i=0;i<arr.size();i++) {
        subs[arr[i]]++;
    }
    for(int i=1;i<arr.size();i++) {
        if(subs[i] == 0 || subs[i] > 1) {
            ans.push_back(i);
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {3,1,2,5,3};
    vector<int> ans = repeatAndMissingElement_Btute(arr);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}