#include "Solution.hpp"

template <typename T>
void printContainer(const T& container) {
    std::cout << "{ ";
    for(const auto& item : container) {
        std::cout << item << ", ";
    }
    std::cout << " }\n";
}

int main(void) {
    std::vector<std::string> str = { "eat", "tea", "tan", "ate", "nat", "bat" };
    Solution s;

    std::vector<std::vector<std::string>> result = s.groupAnagrams(str);
    std::cout << "Result : \n";
    for(const auto& it : result) {
        printContainer(it);
    }
    
    return (EXIT_SUCCESS);
}