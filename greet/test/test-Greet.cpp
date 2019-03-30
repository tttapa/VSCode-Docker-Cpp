#include <gtest/gtest.h>
#include <Greet.hpp>

#include <sstream>

using namespace std;

TEST(Greet, greet) {
    string name = "tttapa";
    ostringstream oss;
    greet(name, oss);
    ASSERT_EQ(oss.str(), "Hello, " + name + "\n");
}