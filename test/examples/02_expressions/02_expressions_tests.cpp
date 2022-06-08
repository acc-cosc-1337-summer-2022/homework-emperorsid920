#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(get_sales_tax_amount(10) == 0.675);
}


TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(get_sales_tax_amount(20) == 1.35);
}

/*
TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(get_tip_amount(20, 15) == 3);
}

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(get_tip_amount(20, 20) == 4);
}
*/
