#include "Solution.hpp"
#include <stack>

int Solution::sumSubarraysMins(const std::vector<int>& arr) {
    printData(arr, "original data");
    long long sum = 0;
    int MOD = 1e9 + 7;
    int size = static_cast<int>(arr.size());
    std::stack<int> trace;


   for(int i = 0; i <= size; ++i) {
       int currentVal = (i == size) ? -1 : arr[i];

       while(!trace.empty() && arr[trace.top()] > currentVal ) {
           int target = trace.top();
           trace.pop();

           int right = i;
           int left  = trace.empty() ? -1 : trace.top();

           long long count = (target - left) * (right - target);

           sum = (sum + (count * arr[target])) % MOD;
       }
       trace.push(i);
   }
   return sum;
}
