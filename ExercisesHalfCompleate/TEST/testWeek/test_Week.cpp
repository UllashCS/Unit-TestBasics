#include "gtest/gtest.h"
#include "string"
#include "../../SRC/Week.hpp"

using namespace testing;
using namespace std;

TEST(TestWeek, SUN) {

	string *day = new string;
	Week week;

	week.setDay(Week::Days::SUN);
	week.getDayInString(day);

	EXPECT_EQ(*day, "SUN");

	delete day;
}

TEST(TestWeek, MON) {

	string *day = new string;
	Week week;

	week.setDay(Week::Days::MON);
	week.getDayInString(day);

	EXPECT_EQ(*day, "MON");

	delete day;
}

TEST(TestWeek, TUE) {

	string *day = new string;
	Week week;

	week.setDay(Week::Days::TUE);
	week.getDayInString(day);

	EXPECT_EQ(*day, "TUE");

	delete day;
}

TEST(TestWeek, WED) {

	string *day = new string;
	Week week;

	week.setDay(Week::Days::WED);
	week.getDayInString(day);

	EXPECT_EQ(*day, "WED");

	delete day;
}

TEST(TestWeek, THU) {

	string *day = new string;
	Week week;

	week.setDay(Week::Days::THU);
	week.getDayInString(day);

	EXPECT_EQ(*day, "THU");

	delete day;
}

TEST(TestWeek, FRI) {

	string *day = new string;
	Week week;

	week.setDay(Week::Days::FRI);
	week.getDayInString(day);

	EXPECT_EQ(*day, "FRI");

	delete day;
}
TEST(TestWeek, SAT) {

	string *day = new string;
	Week week;

	week.setDay(Week::Days::SAT);
	week.getDayInString (day);

	EXPECT_EQ(*day, "SAT");

	delete day;
}
