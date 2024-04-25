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

TEST_CASE("Test of Sorting Algorithms", "[basic]") {
    // setup
    std::array<int, N> not_sorted = {5, 4, 3, 2, 1};
    std::array<int, N> sorted = {1, 2, 3, 4, 5};
    // assert that arrays are sorted or not sorted and of right size
    REQUIRE(is_sorted(sorted));
    REQUIRE(!is_sorted(not_sorted));
    REQUIRE(not_sorted.size() == N);
    REQUIRE(sorted.size() == N);

    // Test that sorting algorithms sort the not sorted arrays
    REQUIRE(bubble_sort(not_sorted) == sorted);
    REQUIRE(insertion_sort(not_sorted) == sorted);
    REQUIRE(selection_sort(not_sorted) == sorted);
    // Test that sorting algorithms do not change a sorted array
    REQUIRE(bubble_sort(sorted) == sorted);
    REQUIRE(insertion_sort(sorted) == sorted);
    REQUIRE(selection_sort(sorted) == sorted);
}

/***
 * Test Case with Sections - Gives each sorting algorithm its own section
*/
TEST_CASE("Test Algorithms Using Sections", "[sections]") {
    // setup and assert that arrays are sorted or not unsorted
    std::array<int, N> not_sorted = {5, 4, 3, 2, 1};
    std::array<int, N> sorted = {1, 2, 3, 4, 5};
    REQUIRE(is_sorted(sorted));
    REQUIRE(!is_sorted(not_sorted));
    REQUIRE(not_sorted.size() == N);
    REQUIRE(sorted.size() == N);

    // Test Bubble Sort
    SECTION("Bubble Sort") {
        // assert that algorithm sorts unsorted array and does not change sorted array
        REQUIRE(bubble_sort(not_sorted) == sorted);
        REQUIRE(bubble_sort(sorted) == sorted);
    }
    // Test Insertion Sort
    SECTION("Insertion Sort") {
        // assert that algorithm sorts unsorted array and does not change sorted array
        REQUIRE(insertion_sort(not_sorted) == sorted);
        REQUIRE(insertion_sort(sorted) == sorted);
    }
    // Test Selection Sort
    SECTION("Selection Sort") {
        // assert that algorithm sorts unsorted array and does not change sorted array
        REQUIRE(selection_sort(not_sorted) == sorted);
        REQUIRE(selection_sort(sorted) == sorted);
    }
}


/***
 * BDD-Style Test Case - Separates into sorted and unsorted cases then tests each algorithm within these cases
*/

SCENARIO("Test of Algorithms Using BDD", "[bdd]") {
    GIVEN("An Array of Size N") {
        std::array<int, N> sorted = {1, 2, 3, 4, 5};
        std::array<int, N> not_sorted = {5, 4, 3, 2, 1};
        REQUIRE(not_sorted.size() == N);
        REQUIRE(sorted.size() == N);

        WHEN("The Array is Sorted") {
            REQUIRE(is_sorted(sorted));

            THEN("The algorithms should not change the array") {
                REQUIRE(bubble_sort(sorted) == sorted);
                REQUIRE(insertion_sort(sorted) == sorted);
                REQUIRE(selection_sort(sorted) == sorted);
            }
        }

        WHEN("The Array is not sorted") {
            REQUIRE(!is_sorted(not_sorted));
            REQUIRE(is_sorted(sorted));

            THEN("The algorithms should sort the array") {
                REQUIRE(bubble_sort(not_sorted) == sorted);
                REQUIRE(insertion_sort(not_sorted) == sorted);
                REQUIRE(selection_sort(not_sorted) == sorted);
            }
        }
    }
}
