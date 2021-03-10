/**
 * AUTHOR: <Itay Aharoni>
 * 
 * Date: 2021-03-10 02:29:04
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

string nospaces(string input) {
	input.erase(' ');
	input.erase('\t');
	input.erase('\n');
	input.erase('\r');
	return input;
}

TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21111111)) == nospaces(" ___\n.....\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n (\" \") "));
    CHECK(nospaces(snowman(11324411)) == nospaces("_===_\n(o,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114431)) == nospaces("_===_\n(.,.)\n(>:<)\n( : )"));
    CHECK(nospaces(snowman(11111111)) == nospaces(" _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(22222222)) == nospaces("  ___\n.....\n\\(o.o)/\n (] [)\n (\" \")"));
    CHECK(nospaces(snowman(33333333)) == nospaces("   _\n  /_\\ \n (O_O)\n/(> <)\\ \n (___)"));
    CHECK(nospaces(snowman(44444444)) == nospaces(" ___\n(_*_)\n(- -)\n(   )\n(   )"));
    CHECK(nospaces(snowman(12222212)) == nospaces(" _===_\n\\(o.o)/\n ( : )\n (\" \")"));
    CHECK(nospaces(snowman(32443333)) == nospaces("   _\n  /_\\ \n (-.-)\n/(> <)\\ \n (___)"));
    CHECK(nospaces(snowman(44444432)) == nospaces(" ___\n(_*_)\n(- -)\n(> <)\n(\" \")"));
    CHECK(nospaces(snowman(33232124)) == nospaces("   _\n  /_\\ \n\\(o_O)\n (] [)>\n (   )"));
    CHECK(nospaces(snowman(44242123)) == nospaces("  ___\n (_*_)\n\\(o -)\n (] [)>\n (___)"));
    CHECK(nospaces(snowman(41341144)) == nospaces("  ___\n (_*_)\n (O,-)\n<(   )>\n (   )"));
    CHECK(nospaces(snowman(12341214)) == nospaces(" _===_\n (O.-)/\n<( : )\n (   )"));
    CHECK(nospaces(snowman(12344321)) == nospaces("_===_\n(O.-)\n(] [)\\ \n( : )"));
    CHECK(nospaces(snowman(12333321)) == nospaces(" _===_\n (O.O)\n/(] [)\\\n ( : )"));
    CHECK(nospaces(snowman(31333342)) == nospaces("   _\n  /_\\ \n (O,O)\n/(   )\\ \n (\" \")"));
    CHECK(nospaces(snowman(43232122)) == nospaces("  ___\n (_*_)\n\\(o_O)\n (] [)>\n (\" \")"));
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(123456789));
    CHECK_THROWS(snowman(123412344));
    CHECK_THROWS(snowman(-12323));
    CHECK_THROWS(snowman(01232231));
    CHECK_THROWS(snowman(11111115));
    CHECK_THROWS(snowman(23041123));
    CHECK_THROWS(snowman(01231231));
    CHECK_THROWS(snowman(25231231));    
}

