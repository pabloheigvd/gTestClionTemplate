#include <gtest/gtest.h>
#include <Person_lib/Person.h>

using namespace std;

TEST(Person_test, string_argument_constructor){
    const string BOB = "BOB";
    Person p(BOB);
    ASSERT_EQ(BOB, p.getName());
    ASSERT_NE("ALICE", p.getName());
}





