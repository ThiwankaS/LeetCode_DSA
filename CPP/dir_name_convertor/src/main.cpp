// CLI entry for dir_name_convertor: prints snake_case for a single argument string.

#include "dir_name_convertor/convert.hpp"

#include <cstdlib>
#include <iostream>
#include <string_view>

namespace {

void print_usage(std::string_view program_name) {
    std::cerr << "Usage: " << program_name << " \"<text to convert to snake_case>\"\n";
    std::cerr << "Example: " << program_name << " \" 995. Moving Average from Data Stream\"\n";
}

}  // namespace

int main(int argc, char* argv[]) {
    if (argc != 2) {
        print_usage(argv[0] != nullptr ? std::string_view{argv[0]} : "snake");
        return EXIT_FAILURE;
    }

    const std::string out = dir_name_convertor::to_snake_case(argv[1]);
    std::cout << out << '\n';
    return EXIT_SUCCESS;
}
