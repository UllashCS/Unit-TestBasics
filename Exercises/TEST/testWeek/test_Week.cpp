#include "gtest/gtest.h"
#include "string"
#include "../../SRC/Week.hpp"

using namespace testing;
using namespace std;

tuple<Week::Days, string> const WeekInEnumandString[] = {
	// enum,			string,
	{Week::Days::SUN,	"SUN",},
	{Week::Days::MON,	"MON",},
	{Week::Days::TUE,	"TUE",},
	{Week::Days::WED,	"WED",},
	{Week::Days::THU,	"THU",},
	{Week::Days::FRI,	"FRI",},
	{Week::Days::SAT,	"SAT",}
};

class TestWeekFixture : public TestWithParam<tuple<Week::Days, string>>
{
protected:
	static void SetUpTestCase() {}
	static void TearDownTestCase() {}

	virtual void SetUp() {
		day = new string;
		week.setDay(get<0>(GetParam()));
		week.getDayInString(day);
	}

	virtual void TearDown() {	delete day;}

public:
	string *day;
	Week week;
};

INSTANTIATE_TEST_SUITE_P(TestWeekWithParameters, TestWeekFixture, ValuesIn(WeekInEnumandString));

TEST_P(TestWeekFixture, ALL) {
	EXPECT_EQ(*day, get<1>(GetParam()));
}
