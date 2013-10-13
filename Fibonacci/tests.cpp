#include <boost/test/unit_test.hpp>

#include "fibonacci.h"

namespace
{
struct Fixture
{
    Fibonacci testObj;
};

BOOST_FIXTURE_TEST_SUITE( FibonacciTests, Fixture )

BOOST_AUTO_TEST_CASE( Zero )
{
    BOOST_CHECK_EQUAL(testObj.get(0), 0);
}

BOOST_AUTO_TEST_CASE( First )
{
    BOOST_CHECK_EQUAL(testObj.get(1), 1);
}

BOOST_AUTO_TEST_CASE( Second )
{
    BOOST_CHECK_EQUAL(testObj.get(2), 1);
}

BOOST_AUTO_TEST_CASE( Third )
{
    BOOST_CHECK_EQUAL(testObj.get(3), 2);
}

BOOST_AUTO_TEST_CASE( Tenth )
{
    BOOST_CHECK_EQUAL(testObj.get(10), 55);
}

BOOST_AUTO_TEST_SUITE_END()

}
