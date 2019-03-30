#include <Greet.hpp>
#include <gtest/gtest.h>
#include <sstream>

using namespace std;

TEST(Greet, greet) {
    string name = "tttapa";
    ostringstream oss;
    greet(name, oss);
    ASSERT_EQ(oss.str(), "Hello, " + name + "\n");
}