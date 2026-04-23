#include "StockSpanner.hpp"

int StockSpanner::next(int price) {
   int result = 1;

   while(!history.empty() && history.top().first <= price) {
       result += history.top().second;
       history.pop();
   }
   history.push({ price, result});
   return result;
}

/**
  * brute force approach will be declaring a vector and iterating through backword
  * std::vector<int>history;
  * this is taking 10X time to produce the test results
*/

// int StockSpanner::next(int price) {
//     this->history.push_back(price);
//     int result = 0;
//     for(auto it = history.rbegin(); it != history.rend(); ++it) {
//         if(*it > price) {
//             break;
//         }
//         ++result;
//     }
//     return result;
// }
