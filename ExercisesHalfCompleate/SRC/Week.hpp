#ifndef WEEK_HPP
#define WEEK_HPP

#include "string"

class Week {
public:
    enum Days{ SUN = 1, MON, TUE, WED, THU, FRI, SAT};

    void setDay (Week::Days indays);
    void getDayInString (std::string *outDays);

private:
    Week::Days mdays = SUN;
};

#endif //WEEK_HPP
