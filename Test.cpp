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
    // General testing of snowman all 1's.
    CHECK(nospaces(snowman(11111111)) == nospaces(" _===_\n (.,.)\n<( : )>\n ( : )"));

    // Testing of all hat options.
    CHECK(nospaces(snowman(21111111)) == nospaces("  ___\n .....\n (.,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(31111111)) == nospaces("   _\n  /_\\\n (.,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(41111111)) == nospaces("  ___\n (_*_)\n (.,.)\n<( : )>\n ( : )"));

    // Testing of all nose/mouth options.
    CHECK(nospaces(snowman(12111111)) == nospaces(" _===_\n (...)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(13111111)) == nospaces(" _===_\n (._.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(14111111)) == nospaces(" _===_\n (. .)\n<( : )>\n ( : )"));

    // Testing of all left eye options.
    CHECK(nospaces(snowman(11121111)) == nospaces(" _===_\n (o,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11131111)) == nospaces(" _===_\n (O,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11141111)) == nospaces(" _===_\n (-,.)\n<( : )>\n ( : )"));

    // Testing of all right eye options.
    CHECK(nospaces(snowman(11211111)) == nospaces(" _===_\n (.,o)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11311111)) == nospaces(" _===_\n (.,O)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11411111)) == nospaces(" _===_\n (.,-)\n<( : )>\n ( : )"));


    // Testing of all left arm options.
    CHECK(nospaces(snowman(11112111)) == nospaces(" _===_\n\\(.,.)\n ( : )>\n ( : )"));
    CHECK(nospaces(snowman(11113111)) == nospaces(" _===_\n (.,.)\n/( : )>\n ( : )"));
    CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));

    // Testing of all right arm options.
    CHECK(nospaces(snowman(11111211)) == nospaces(" _===_\n (.,.)/\n<( : )\n ( : )"));
    CHECK(nospaces(snowman(11111311)) == nospaces(" _===_\n (.,.)\n<( : )\\\n ( : )"));
    CHECK(nospaces(snowman(11111411)) == nospaces(" _===_\n (.,.)\n<( : )\n ( : )"));

    // Testing of all torso options.
    CHECK(nospaces(snowman(11111112)) == nospaces(" _===_\n (.,.)\n<(] [)>\n ( : )"));
    CHECK(nospaces(snowman(11111113)) == nospaces(" _===_\n (.,.)\n<(> <)>\n ( : )"));
    CHECK(nospaces(snowman(11111114)) == nospaces(" _===_\n (.,.)\n<(   )>\n ( : )"));

    // Testing of all base options.
    CHECK(nospaces(snowman(11111121)) == nospaces(" _===_\n (.,.)\n<( : )>\n (\" \")"));
    CHECK(nospaces(snowman(11111131)) == nospaces(" _===_\n (.,.)\n<( : )>\n (___)"));
    CHECK(nospaces(snowman(11111141)) == nospaces(" _===_\n (.,.)\n<( : )>\n (   )"));

    // Random combinations testings.
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21111111)) == nospaces(" ___\n.....\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n (\" \") "));
    CHECK(nospaces(snowman(11324411)) == nospaces("_===_\n(o,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114431)) == nospaces("_===_\n(.,.)\n(>:<)\n( : )"));
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
    // Testing for lower number then possible
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1234));

    // Testing for bigger number then possible
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(123412344));

    // Testing for negative numbers
    CHECK_THROWS(snowman(-12323));
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-111111111));

    // Testing for not possibe digits in a right size iput
    CHECK_THROWS(snowman(51111111));
    CHECK_THROWS(snowman(16111111));
    CHECK_THROWS(snowman(11711111));
    CHECK_THROWS(snowman(11181111));
    CHECK_THROWS(snowman(11119111));   
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111116));
}

