// Include necessary libraries
#include <iostream>
#include <limits>

using namespace std;

// Function declarations (if any)
int year_input();
bool leapYear(int year);
int leapYearRes(bool res);

int main()
{

    //  Get user input
    int year = year_input();
    // cout << year;
    bool res = leapYear(year);
    leapYearRes(res);
    return 0;
}

int year_input()
{ 
    int year;
    cout << "Enter a year that you want to know if its a leap year or not: ";
    
     while (true)
    {
        cin >> year;
        // check the fail stat of cin stream which in this case is checck if the right variable typoe of int has been inputted.
        if (cin.fail())
        {
            // reprompt for use input.
            cout << "Please enter an integer value for a year" << endl;
            cin.clear();
            // clear the input bufer/
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else break;
    }

    return year;
}
// Function to calculate if a year is a leap year.
bool leapYear(int year)
{
    
    // Check if year is divislibe by 4.
    if (year % 4 == 0)
    {
    // Check if year is divislibe by 100.
       if (year % 100 == 0)
       {
    // Check if year is divislibe by 400.  
            if(year % 400 == 0)
            {
               return true;     
         } else {
                return false; // Divisible by 100 but not by 400: not a leap year
            }
        } else {
            return true;  // Divisible by 4 but not by 100: leap year
        }
    } else {
        return false; // Not divisible by 4: not a leap year
    }
}

int leapYearRes(bool res)
{
    if (res == true)
    {
        cout << "The year you selected is a leap year.\n"; 
    }
    else if (res == false)
    {
        cout << "The year you selected is not a leap year.\n"; 
    }
    
    return 0;
}