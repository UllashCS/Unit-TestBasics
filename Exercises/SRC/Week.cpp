#include"Week.hpp"

void Week::setDay (Week::Days indays){
    mdays = indays;
}

void Week::getDayInString(std::string *outDays) {
    switch (mdays) {
	case SUN: {*outDays = "SUN"; } break;
	case MON: {*outDays = "MON"; } break;
	case TUE: {*outDays = "TUE"; } break;
	case WED: {*outDays = "WED"; } break;
	case THU: {*outDays = "THU"; } break;
	case FRI: {*outDays = "FRI"; } break;
	case SAT: {*outDays = "SAT"; } break;
	default: {*outDays = "Invalid"; } break;
    }
}
