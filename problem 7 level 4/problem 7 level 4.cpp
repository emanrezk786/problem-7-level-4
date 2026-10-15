#include <iostream>

using namespace std;

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short A, Y, M;

    A = (14 - Month) / 12;

    Y = Year - A;

    M = Month + (12 * A) - 2;

    return (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;

}

string DayShortName(short DayOfWeekOrder)
{
    string ArrDayNames[] = { "Sun" , "Mon" , "Tue" , "Wed" , "Thu" , "Fri" , "Sat" };

    return ArrDayNames[DayOfWeekOrder];
}

short ReadDay()
{
    short Day;
    cout << "\n Please Enter a Day ?";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "\n Please Enter a Month ?";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\n Please Enter a Year ?";
    cin >> Year;
    return Year;
}


int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();

    cout << "\n Day          : " << Day << "/" << Month << "/" << Year;
    cout << "\n Day Order    : " << DayOfWeekOrder(Day, Month, Year);
    cout << "\n Day Name     : " << DayShortName(DayOfWeekOrder(Day, Month, Year));

    return 0;
}
