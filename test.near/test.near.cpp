#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>

#include "product.h"

using std::cout;
using std::endl;

class HelloGtestNearAssertion : public ::testing::Test {
	protected:
		virtual void SetUp() {
			cout << __FUNCTION__ << endl;
		}

		virtual void TearDown() {
			cout << __FUNCTION__ << endl;
		}
};

using ::testing::Eq;
using ::testing::NotNull;

TEST_F(HelloGtestNearAssertion, integer_passed){
	EXPECT_NEAR(1, 2, 3);
}

TEST_F(HelloGtestNearAssertion, integer_failed){
	EXPECT_NEAR(1, 2, 0);
}

TEST_F(HelloGtestNearAssertion, float_passed){
	EXPECT_NEAR(1.5f, 2.0f, 0.5f);
}

TEST_F(HelloGtestNearAssertion, double_failed){
	EXPECT_NEAR(1.5L, 2.5L, 0.9L);
}
