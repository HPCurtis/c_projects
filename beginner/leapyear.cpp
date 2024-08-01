// Include necessary libraries
#include <iostream>
#include <limits>

using namespace std;

// Function declarations (if any)
int year_input();
int leapYear(int year);

int main()
{

    //  Get user input
    int year = year_input();
    // cout << year;
    leapYear(year);
    return 0;
}

int year_input()
{ 
    int year;
    cout << "Enter a number that you want to know if its a leap year: ";
    
     while (true)
    {
        cin >> year;
        if (!year)
        {
        cout << "Please enter an integer value for a year" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
        }
        else break;
    }

    return year;
}

int leapYear(int year)
{
    
    if (year % 4 == 0)
    {
        // Outputs 1 as that true.
        cout << true;
    } 
    
    return 0;
}