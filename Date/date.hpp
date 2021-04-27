#include<iostream>

using namespace std;
class Date
{
  public:
    Date(int year,int month,int day);
    int MonthDay(int year,int day);
    void Print();
    

  private:
    int _year;
    int _month;
    int _day;
    int _flag;
};
