#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



 TEST_CASE("Verifying get_gc_content", "verification") {
     REQUIRE(get_gc_content("AGCTATAG") == 0.375);
     REQUIRE(get_gc_content("CGCTATAG") == 0.50);
     
 }

 TEST_CASE("Verifying get_reverse_string", "verification") {
     REQUIRE(get_gc_content("AGCTATAG") == GATATCGA);
     REQUIRE(get_gc_content("CGCTATAG") == GATATCGC);
     
 }
 
 
TEST_CASE("Verifying get_dna_complement", "verification") {
    REQUIRE(get_dna_complement("AAAACCCGGT") == ACCGGGTTTT);
    REQUIRE(get_dna_complement("CCCGGAAAAT") == ATTTTCCGGG);
    
}
