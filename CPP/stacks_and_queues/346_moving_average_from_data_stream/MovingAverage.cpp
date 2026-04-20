#include "MovingAverage.hpp"
#include <cmath>

double MovingAverage::next(int val) {
    double average = 0.0f;

    if(element_count < window_size) {
        runnig_total += val;
        buffer.push(val);
        ++element_count;
        average = static_cast<double>(static_cast<double>(runnig_total) / element_count);
    } else {
        runnig_total -= buffer.front(); 
        buffer.pop();
        --element_count; 
        runnig_total += val;
        buffer.push(val);
        ++element_count;
        average = static_cast<double>(static_cast<double>(runnig_total) / window_size);
    }
    return average;
}
