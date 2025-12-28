#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;

    for(rit = numbers.rbegin(); rit != numbers.rend(); rit++) {
        cout << "number @ " << distance(rbegin(numbers), rit) << " is : " << *rit << endl;
    }

    return (EXIT_SUCCESS);
}
