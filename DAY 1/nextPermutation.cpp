#include<bits/stdc++.h>
using namespace std;
void nextPermutaion(vector<int> &nums) {
    int n = nums.size(), k, l;
    for(k=n-1;k>=0;k--) {
        if(nums[k] < nums[k+1]) {
            break;
        }
    }
    if(k < 0) {
        reverse(nums.begin(), nums.end());
    } else {
        for(l=n-1;l>k;l--) {
            if(nums[l] > nums[k]) {
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin()+k+1, nums.end());
    }
}
int main() {
    vector<int> nums = {1,2,3};
    nextPermutaion(nums);
    for(int i=0;i<nums.size();i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}