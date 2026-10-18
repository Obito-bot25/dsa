#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxDiff(vector<int>& arr, int k) {
        sort(arr.begin() , arr.end());
        int total = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            total += arr[i];
        }
        int minSum = 0;
        for(int i = 0 ; i < k ; i++){
            minSum += arr[i];
        }
        int maxSum = 0;
        for( int i = arr.size()-1; i >= arr.size() -k; i--){
            maxSum += arr[i];
        }
        return max(maxSum - (total-maxSum) ,(total-minSum) - minSum);
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> a(N);
        for (auto &x : a) cin >> x;
        Solution s;
        cout << s.maxDiff(a, K) << "\n";
    }
}
