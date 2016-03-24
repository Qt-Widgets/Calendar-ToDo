#ifndef DATEUTIL_H
#define DATEUTIL_H

#include <time.h>
#include <string>
#include <list>

#include "../model/date.h"

using namespace std;

class DateUtil
{
public:
    DateUtil();
    static Date get_current_date();
    static string get_literal_month(int m); /* 1 => January, ... */
    static string numeric2literal_day_of_week(int d); /* Monday => 1, Tuesday => 2, ... */
    static int literal2numeric_day_of_week(string d); /* 1 => Monday, 2 => Tuesday, ... */
    static int get_days_in_month(int month, int year);
    static Date time_from_timestamp(unsigned long timestamp);
    static list<int> get_special_days_in_month(int month, int year); /* TODO: implement this [priority: low] */
    static Date get_first_day_of_month(Date &date);
    static Date get_last_day_of_month(Date &date);
    static Date increase_month(Date date);
    static Date decrease_month(Date date);
};

#endif