#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>

#include "product.h"

using std::cout;
using std::endl;

class HelloGtestFixtureTest : public ::testing::Test {
	protected:
		ProductCode* sut;
		virtual void SetUp() {
			sut = new ProductCode();
		}

		virtual void TearDown() {
			delete sut;
		}
};

using ::testing::Eq;
using ::testing::NotNull;

TEST_F(HelloGtestFixtureTest, when_setup_teardown_called){
	EXPECT_THAT(sut, NotNull());
}

TEST_F(HelloGtestFixtureTest, test_add){
	EXPECT_THAT(sut->add(1, 2), Eq(3));
}
