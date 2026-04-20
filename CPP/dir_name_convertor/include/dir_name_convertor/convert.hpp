#pragma once

#include <string>
#include <string_view>

namespace dir_name_convertor {

// Converts a free-form title or directory label into snake_case.
//
// Rules (same as the original single-file tool):
// - Input is split on whitespace into "words".
// - Each word keeps only alphanumeric characters; other symbols are dropped.
// - Letters are lowercased.
// - Words are joined with a single underscore.
//
// Example: " 995. Moving Average from Data Stream " -> "995_moving_average_from_data_stream"
[[nodiscard]] std::string to_snake_case(std::string_view input);

}  // namespace dir_name_convertor
