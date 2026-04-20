#include "dir_name_convertor/convert.hpp"

#include <cctype>
#include <sstream>
#include <string>
#include <vector>

namespace dir_name_convertor {

namespace {

// Strips non-alphanumeric characters from one whitespace-delimited token and lowercases letters.
[[nodiscard]] std::string clean_token(std::string_view token) {
    std::string cleaned;
    cleaned.reserve(token.size());

    for (unsigned char c : token) {
        if (std::isalnum(static_cast<unsigned char>(c)) != 0) {
            cleaned += static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        }
    }
    return cleaned;
}

}  // namespace

std::string to_snake_case(std::string_view input) {
    // std::istringstream splits on any whitespace, matching prior argv[1] behavior
    // when the shell passes a single quoted argument containing spaces.
    std::istringstream stream{std::string{input}};
    std::vector<std::string> segments;
    std::string segment;

    while (stream >> segment) {
        std::string cleaned = clean_token(segment);
        if (!cleaned.empty()) {
            segments.push_back(std::move(cleaned));
        }
    }

    std::string result;
    for (std::size_t i = 0; i < segments.size(); ++i) {
        result += segments[i];
        if (i + 1 < segments.size()) {
            result += '_';
        }
    }
    return result;
}

}  // namespace dir_name_convertor
