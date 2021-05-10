#include "gtest/gtest.h"
#include "string"
#include "../../SRC/Week.hpp"

using namespace testing;
using namespace std;

class TestWeekFixture : public ::testing::Test
{
protected:
	static void SetUpTestCase() {
		cout << "Start Test Suit" <<endl;
		count = 0;
	}

	static void TearDownTestCase() {
		cout << "End Test  Suit" << endl;
		count = 0;
	}

	virtual void SetUp() {
		count++;
		cout << "SetUp Test Case - " << count << endl;
		day = new string;
	}

	virtual void TearDown() {
		cout << "TearDown Test Case - " << count << endl;
		delete day;
	}

public:
	string *day;
	Week week;
	static int count;
};

int TestWeekFixture::count = 0;

TEST_F(TestWeekFixture, SUN) {

	week.setDay(Week::Days::SUN);
	week.getDayInString(day);

	EXPECT_EQ(*day, "SUN");
}
TEST_F(TestWeekFixture, MON) {

	week.setDay(Week::Days::MON);
	week.getDayInString(day);

	EXPECT_EQ(*day, "MON");
}
TEST_F(TestWeekFixture, TUE) {
	week.setDay(Week::Days::TUE);
	week.getDayInString(day);

	EXPECT_EQ(*day, "TUE");
}
TEST_F(TestWeekFixture, WED) {
	week.setDay(Week::Days::WED);
	week.getDayInString(day);

	EXPECT_EQ(*day, "WED");
}
TEST_F(TestWeekFixture, THU) {
	week.setDay(Week::Days::THU);
	week.getDayInString(day);

	EXPECT_EQ(*day, "THU");
}
TEST_F(TestWeekFixture, FRI) {

	week.setDay(Week::Days::FRI);
	week.getDayInString(day);

	EXPECT_EQ(*day, "FRI");

}
TEST_F(TestWeekFixture, SAT) {

	week.setDay(Week::Days::SAT);
	week.getDayInString (day);

	EXPECT_EQ(*day, "SAT");
}
