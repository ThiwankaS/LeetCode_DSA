dir_name_convertor — README
============================

What it does
------------
Converts a free-form string (for example a LeetCode problem title) into snake_case
suitable as a directory name.

Rules:
- The input is split on whitespace into words.
- Each word keeps only letters and digits; punctuation and symbols are removed.
- Letters are lowercased.
- Words are joined with underscores.

Example:
  Input:   995. Moving Average from Data Stream
  Output:  995_moving_average_from_data_stream


1. BUILD WITH CMAKE (recommended)
---------------------------------
From this directory (the folder that contains CMakeLists.txt):

  $ cmake -S . -B build
  $ cmake --build build

The compiled program is:

  build/snake


2. BUILD WITH G++ (no CMake)
-----------------------------
From this directory:

  $ g++ -std=c++20 -O2 -Wall -Wextra -Wpedantic -Werror -Iinclude \
      src/main.cpp src/convert.cpp -o snake

This produces an executable named snake in the current directory.


3. INSTALL TO ~/.local/bin (optional)
-------------------------------------
Create the directory if needed, then copy the binary CMake built:

  $ mkdir -p ~/.local/bin
  $ cp build/snake ~/.local/bin/

If you built with g++ in the current directory:

  $ mkdir -p ~/.local/bin
  $ cp snake ~/.local/bin/


4. PUT ~/.local/bin ON YOUR PATH
--------------------------------

Bash (~/.bashrc):

  export PATH="$HOME/.local/bin:$PATH"

Then reload:

  $ source ~/.bashrc

Fish (~/.config/fish/config.fish or interactively):

  fish_add_path ~/.local/bin


5. DAILY USAGE
--------------
Run snake with exactly one argument (quote it if it contains spaces):

  $ snake " 995. Moving Average from Data Stream"

Output:

  995_moving_average_from_data_stream

Pipe or capture as needed, for example:

  $ mkdir -p "$(snake " 995. Moving Average from Data Stream")"


6. OPTIONAL SHELL HELPERS (mkdir + name in one step)
----------------------------------------------------
These functions call the snake binary (not themselves). Adjust the path if snake
is not on PATH.

Bash (~/.bashrc):

  snake_mkdir() {
      local new_dir
      new_dir="$(snake "$1")"
      mkdir -p "$new_dir"
      echo "Created: $new_dir"
  }

Fish (~/.config/fish/config.fish):

  function snake_mkdir
      set -l new_dir (snake "$argv")
      mkdir -p -- "$new_dir"
      echo "Created: $new_dir"
  end

Usage:

  $ snake_mkdir " 995. Moving Average from Data Stream"


7. DEVELOPER OPTION: SANITIZERS (CMake only)
--------------------------------------------
AddressSanitizer and UndefinedBehaviorSanitizer are off by default so release
binaries work on machines without the sanitizer runtime. To enable:

  $ cmake -S . -B build -DENABLE_SANITIZERS=ON
  $ cmake --build build
