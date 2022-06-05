#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> &nums) {
    int lo = 0;
    int hi = nums.size()-1;
    int mid = 0;
    while(mid <= hi) {
        switch(nums[mid]) {
            case 0:
                swap(nums[lo++], nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[hi--]);
                break;
        }
    }
}
int main() {
    vector<int> nums = {2,0,2,1,1,0};
    sort012(nums);
    for(int i=0;i<nums.size();i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}