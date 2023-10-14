#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "question4.h"
#include "catch.hpp"
#include <iostream>
#include <string>
using namespace std;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Testing palindrome")
{
	REQUIRE(is_palindrome(abcba) == true);
	REQUIRE(is_palindrome(abc) == false);
	REQUIRE(is_palindrome(hannah) == true);
	REQUIRE(is_palindrome(hanna) == false);
}