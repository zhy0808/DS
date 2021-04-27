#include"date.hpp"

Date::Date(int year,int month,int day)
{
  if(year > 0 && month>0 && month < 13 && day > 0 && day <= MonthDay(year,month))
  {
    _year = year;
    _month = month;
    _day = day;
    _flag = 0;
  }
  else
    _flag = 1;
}
int Date::MonthDay(int year,int month)
{
  if(month == 2)
  {
    if(year%4 == 0 && year%100 != 0)
    {
      return 29;
    }
    else
      return 28;
  }
  if(month == 1 || month == 3 || month ==5 || month == 7 || month == 8 || month == 10 || month == 12)
  {
    return 31;
  }
  if(month == 4 || month == 6 || month == 9 || month == 11)
  {
    return 30;
  }
}

void Date::Print()
{
  if(_flag == 0)
  {
    cout << _year << "-" << _month << "-" << _day << endl;
  }
  else
    cout << "Input error!" << endl;

}
