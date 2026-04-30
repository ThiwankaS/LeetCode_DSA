#include "Solution.hpp"
#include <stack>

int Solution::sumSubarraysMins(const std::vector<int>& arr) {
    printData(arr, "original data");
    long long sum = 0;
    int MOD = 1e9 + 7;
    int size = static_cast<int>(arr.size());
    std::stack<int> trace;


    for(int i = 0; i <= size; ++i) {

        // dummy value to prevent out of bound access
        // will make sure stack will clear out
        int currentVal = (i == size) ? -1 : arr[i];

        // when find a value less than arr[top] then top is no loger pointing to the min value
        while(!trace.empty() && arr[trace.top()] > currentVal ) {
            int targetIDx = trace.top();
            trace.pop();
        
            // how far to the right te new minimum from last
            int rightDistance = i - targetIDx;

            // now stack top is pointing to the next min
            // if stack is empty, means currentVal is the minimum all the way from the start
            int leftLimit  = trace.empty() ? -1 : trace.top();
            int leftDistance = targetIDx - leftLimit;

            // contibution : (left choices) * (right choices) * value
            long long contribution = (long long) leftDistance * rightDistance * arr[targetIDx];
            sum = (sum + contribution) % MOD;
        }
        if( i < size) {
            trace.push(i);
        }
   }
   return sum;
}
