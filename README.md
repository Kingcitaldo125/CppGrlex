# CppGrlex

## Example source code that returns a std::vector of std::strings in Graded lexicographic order (grlex order for short)

Graded lexicographic order (grlex order for short) is a way of ordering words that:

    First orders words by length.
    Then orders words of the same size by their dictionary order.

For example, in grlex order:

	"tray" < "trapped" since "tray" has length 4 while "trapped" has length 7.
	"trap" < "tray" since both have length 4, but "trap" comes before "tray" in the dictionary.

Given a vector of words, returns that vector in grlex order.

To run the code, simply run the source file through a compiler that supports the C++ 11 standard.
Code was compiled on Windows, using the MSVC++ compiler (optimizing compiler).

Example: `g++ main.cpp -o main` and then `./main`.
