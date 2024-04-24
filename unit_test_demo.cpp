/***
 * Unit Test Demo for Testing Tech Talk
*/
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "sorting_algs.hpp"
#include <iostream>

/***
 * Basic Test Case Example
*/

TEST_CASE("Test of Sorting Algorithms", "[sort]") {
    std::array<int, N> not_sorted = {5, 4, 3, 2, 1};
    std::array<int, N> sorted = {1, 2, 3, 4, 5};
    REQUIRE(is_sorted(sorted));
    REQUIRE(!is_sorted(not_sorted));
    REQUIRE(bubble_sort(not_sorted) == sorted);
    REQUIRE(insertion_sort(not_sorted) == sorted);
    REQUIRE(selection_sort(not_sorted) == sorted);
}

/***
 * Test Case with Sections
*/



/***
 * BDD-Style Test Case
*/
