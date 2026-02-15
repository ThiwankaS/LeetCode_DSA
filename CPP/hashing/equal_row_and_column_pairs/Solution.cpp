#include "Solution.hpp"
#include <cstddef>
#include <unordered_map>
#include <string>

int Solution::equalPairs(const std::vector<std::vector<int>>& grid) {
    
    auto build_key = [](const std::vector<int>& arr) {
        std::string str = "";
        for(int num : arr) {
            str += std::to_string(num) + ',';
        }
        return (str);
    };

    std::unordered_map<std::string, int> rows, columns;
    // if the grid data provided is empty, immidaitely returning
    if(grid.empty()) {
        return (-1);
    }
    // calculate how many rows in the grid
    size_t no_of_rows = grid.size();
    // calculate how many colums in the grid
    size_t no_of_cols = grid[0].size();
    // if the grid is assymetric then again immidaitely returning
    if (no_of_cols != no_of_rows) {
        return (-1);
    }
    // build a key string from the values in rows and update key-map
    for(auto row : grid) {
        rows[build_key(row)]++;
    }
    // build a key string from the values in colums and update key-map
    for(size_t j = 0; j < no_of_cols; j++) {
        std::vector<int>col_content;
        for(size_t i = 0; i < no_of_rows; i++) {
            col_content.push_back(grid[i][j]);
        }
        columns[build_key(col_content)]++;
    }
    // iterate through the both row/column key-maps and calculate final result
    int result = 0;
    for(auto [key, value] : rows) {
        if(columns.contains(key)) {
            result += value * columns[key];
        }
    }
   return (result);
}
