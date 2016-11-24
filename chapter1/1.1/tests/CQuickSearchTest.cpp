#define BOOST_TEST_MODULE CQuickSearchTest
#include <boost/test/unit_test.hpp>

#include "../CQuickSearch.hpp"

BOOST_AUTO_TEST_CASE(free_test_function) {

    using container_type = CQuickSearch::container_type;

    CQuickSearch qs;

    BOOST_TEST(qs.get() == container_type());

    qs.add(std::make_tuple(3,4));
    BOOST_TEST(qs.get() == container_type({0, 1, 2, 4, 4}));

    qs.add(std::make_tuple(4,9));
    BOOST_TEST(qs.get() == container_type({0, 1, 2, 9, 9, 5, 6, 7, 8, 9}));

    qs.add(std::make_tuple(8,0));
    BOOST_TEST(qs.get() == container_type({0, 1, 2, 9, 9, 5, 6, 7, 0, 9}));

    qs.add(std::make_tuple(2,3));
    BOOST_TEST(qs.get() == container_type({0, 1, 9, 9, 9, 5, 6, 7, 0, 9}));

    qs.add(std::make_tuple(5,6));
    BOOST_TEST(qs.get() == container_type({0, 1, 9, 9, 9, 6, 6, 7, 0, 9}));

    qs.add(std::make_tuple(2,9));
    BOOST_TEST(qs.get() == container_type({0, 1, 9, 9, 9, 6, 6, 7, 0, 9}));

    qs.add(std::make_tuple(5,9));
    BOOST_TEST(qs.get() == container_type({0, 1, 9, 9, 9, 9, 9, 7, 0, 9}));

    qs.add(std::make_tuple(7,3));
    BOOST_TEST(qs.get() == container_type({0, 1, 9, 9, 9, 9, 9, 9, 0, 9}));

    qs.add(std::make_tuple(4,8));
    BOOST_TEST(qs.get() == container_type({0, 1, 0, 0, 0, 0, 0, 0, 0, 0}));

    qs.add(std::make_tuple(5,6));
    BOOST_TEST(qs.get() == container_type({0, 1, 0, 0, 0, 0, 0, 0, 0, 0}));

    qs.add(std::make_tuple(0,2));
    BOOST_TEST(qs.get() == container_type({0, 1, 0, 0, 0, 0, 0, 0, 0, 0}));

    qs.add(std::make_tuple(6,1));
    BOOST_TEST(qs.get() == container_type({1, 1, 1, 1, 1, 1, 1, 1, 1, 1}));
}
