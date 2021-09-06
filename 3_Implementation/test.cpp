#include<gtest/gtest.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Userlogin
{
    public:
        Userlogin();
        void login() const;
    private:
        bool access;
        std::string mypassword = "helloworld";
};


string upassword;
Userlogin::Userlogin()
{
    access=0;
}

void Userlogin::login() const
{
    cout<<" Please Enter your password\n";
    cout<<" Password:";
    cin>>upassword;
    if(upassword == mypassword)
    {
        cout<<"\n     Welcome Alex ";
           
    }
    else
    {
        cout<<"  ..Incorrect Password..\n\n";
        login();
    }            
}

int start();
int getMonth();
int getYear();
int computeOffset(int month, int year);
int numDaysInMonth(int month, int year);
int numDaysInYear(int year);
bool isLeapYear (int year);
void displayHeader(int month, int year);
void displayTable(int offset, int daysMonth);
void display(int month, int year, int offset, int daysMonth);
int start()
{
   int year = getYear();
   bool flag = isLeapYear(year);
   if(flag == 1)
   cout<<year<<" is a leap year";
   else
   cout<<year<<" is not a leap year";
   cout<<endl;
 
   int case_month;
   string keyword;

   int month = getMonth();
     switch(month){
       case 1 : 
       cout<<"January"<<endl;
       cout<<"Number of Days : 31"<<endl;
       break;
       case 2 :
       cout<<"February"<<endl;
       if(flag == 1){
       cout<<"Number of Days : 29"<<endl;
       }
       else{
             cout<<"Number of Days : 28"<<endl;
       }
       break;
       case 3 : 
       cout<<"March"<<endl;
       cout<<"Number of Days : 31"<<endl;
       break;
       case 4 :
       cout<<"April"<<endl;
       cout<<"Number of Days : 30"<<endl;
       break; 
       case 5 : 
       cout<<"May"<<endl;
       cout<<"Number of Days : 31"<<endl;
       break;
       case 6 :
       cout<<"June"<<endl;
       cout<<"Number of Days : 30"<<endl;
       break;
       case 7 : 
       cout<<"July"<<endl;
       cout<<"Number of Days : 31"<<endl;
       break;
       case 8 :
       cout<<"August"<<endl;
       cout<<"Number of Days : 31"<<endl;
       break;
       case 9 : 
       cout<<"September"<<endl;
       cout<<"Number of Days : 30"<<endl;
       break;
       case 10 :
       cout<<"October"<<endl;
       cout<<"Number of Days : 31"<<endl;
       break;
       case 11 : 
       cout<<"November"<<endl;
       cout<<"Number of Days : 30"<<endl;
       break;
       case 12 :
       cout<<"December"<<endl;
       cout<<"Number of Days : 31"<<endl;
       break;
       default : 
       break;
   }
  
   int offset = computeOffset(month, year);
   int daysMonth = numDaysInMonth(month, year);
   int daysYear = numDaysInYear(year);
   int switchvar;
   cout<<"Press 0 if you want to display the calander else Press 1 to mark an event"<<endl;
   cin>>switchvar;
   switch(switchvar){
       case 0 :
       
        for(int i=1;i<=12;i++){
        display(i, year, offset, daysMonth);
        }
        break;
        
       case 1 :
        cout<<"enter the month in which you like to set an event"<<endl;
        cin>>case_month;
        cout<<"Enter the single keyword to mark an event"<<endl;
        cin>>keyword;
        
        switch(case_month){
        case 1 : 
        cout<<"January"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 2 :
        cout<<"February"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;

        break;
        case 3 : 
        cout<<"March"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 4 :
        cout<<"April"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break; 
        case 5 : 
        cout<<"May"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
     
        break;
        case 6 :
        cout<<"June"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 7 : 
        cout<<"July"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 8 :
        cout<<"August"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 9 : 
        cout<<"September"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 10 :
        cout<<"October"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 11 : 
        cout<<"November"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        case 12 :
        cout<<"December"<<" - "<<keyword<<"     "<<"Calender"<<" - "<<year<<endl;
        
        break;
        default : 
        break;
        }
    
       
        display(case_month, year, offset, daysMonth);
        
        
       //all the event logic will be here
        break;
        
        default :
        break;
   }

   return 0;
}


int getMonth()
{
   int month;
   cout << "Enter a month number: ";
   cin  >> month;

   while (month < 1 || month > 12)
   {
      cout << "Month must be between 1 and 12.\n";
      cout << "Enter a month number: ";
      cin  >> month;
   }

   return month;
}

int getYear()
{
   int year;

   cout << "Enter year: ";
   cin  >> year;

   while (year < 1753)
   {
      cout << "Year must be 1753 or later.\n";
      cout << "Enter year: ";
      cin  >> year;
   }

   return year;
}

/***
* IS LEAP YEAR
* This function will check if the year is a leap year or not.
***/
bool isLeapYear(int year)
{
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
      return true;
   else
      return false;
}

/****
* NUM DAYS IN MONTH
* This function will take the month and year parameters given
* by the user and return the number of days in the chosen month.
***/
int numDaysInMonth(int month, int year)
{
   int daysMonth;

   if (month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12)
   {
      daysMonth = 31;
   }

   if (month == 4 || month == 6 || month == 9 || month == 11)
   {
      daysMonth = 30;
   }

   if (month == 2)
   {
      if (isLeapYear(year))
         daysMonth = 29;
      else
         daysMonth = 28;
   }
   return daysMonth;
}

/***
 * NUM DAYS IN YEAR
 * This function will take the year parameter given by the user
 * and return the number of days in the year, afer checking
 * if the year is a leap year.
 ***/
int numDaysInYear(int year)
{
   int daysYear;

   if (isLeapYear(year))
      daysYear = 366;
   else
      daysYear = 365;

   return daysYear;
}

/***
* COMPUTE OFFSET
* This function will compute the offset, where the first day
* of the month will be. It will use two parameters: numDaysInMonth
* and numDaysInYear.
***/
int computeOffset(int month, int year)
{
   int numDaysAllYears = 0;
   int numDaysRemainingMonths = 0;

   for (int yearCount = 1753; yearCount < year; yearCount++)
   {
      numDaysAllYears += numDaysInYear(year);
   }

   for (int monthCount = 1; monthCount < month; monthCount++)
   {
      numDaysRemainingMonths += numDaysInMonth(month, year);
   }

   int offset = (numDaysAllYears + numDaysRemainingMonths) % 7;

   return offset;
}

/****
* DISPLAY HEADER
* This function will display the header of the calendar.
***/
void displayHeader(int month, int year)
{
   cout << endl;

   if (month == 1)
      cout << "January";
   else if (month == 2)
      cout << "February";

   else if (month == 3)
      cout << "March";

   else if (month == 4)
      cout << "April";

   else if (month == 5)
      cout << "May";

   else if (month == 6)
      cout << "June";

   else if (month == 7)
      cout << "July";

   else if (month == 8)
      cout << "August";

   else if (month == 9)
      cout << "September";

   else if (month == 10)
      cout << "October";

   else if (month == 11)
      cout << "November";

   else if (month == 12)
      cout << "December";

   cout << ", " << year << "\n";

   cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";
}

/***
* DISPLAY TABLE
* This function will display the calendar table.
****/
void displayTable(int offset, int daysMonth)
{
   int dayWeek;
   int day;

   if (offset == 0)
   {
      day = 2;
      cout << setw(6);
   }

   else if (offset == 1)
   {
      day = 3;
      cout << setw(10);
   }

   else if (offset == 2)
   {
      day = 4;
      cout << setw(14);
   }

   else if (offset == 3)
   {
      day = 5;
      cout << setw(18);
   }

   else if (offset == 4)
   {
      day = 6;
      cout << setw(22);
   }

   else if (offset == 5)
   {
      day = 7;
      cout << setw(26);
   }

   else if (offset == 6)
   {
      day = 1;
      cout << setw(2);
   }

   for (dayWeek = 1; dayWeek <= daysMonth; dayWeek++)
   {
      cout << "  " << setw(2) << dayWeek;
      ++day;

      if (day == 8)
      {
         cout << "\n";
         day = 1;
      }
   }

   if (day >= 2 && day <= 7)
      cout << "\n";
}

/***
 * DISPLAY
 * This function will display the information. It contains the
 * header from displayHeader() and the calendar table from
 * displayTable().
 ***/
void display(int month, int year, int offset, int daysMonth)
{
   displayHeader(month, year);
   displayTable(offset, daysMonth);
}


TEST(numDaysInMonth, int)
{
  EXPECT_EQ(28, numDaysInMonth(2,2017));
  EXPECT_EQ(31, numDaysInMonth(3,2018));
}
TEST(isLeapYear, bool)
{
  EXPECT_EQ(1, isLeapYear(2016));
  EXPECT_EQ(1, isLeapYear(2020));
  EXPECT_EQ(0, isLeapYear(2022));
}
TEST(getMonth, int)
{
  EXPECT_EQ(0, 0);
}
TEST(isLeapYear, falsecondition)
{
  EXPECT_EQ(0, isLeapYear(2022));
}
TEST(Userlogin, login)
{
  EXPECT_EQ(0, 0);
}

TEST(numDaysInYear, int)
{
  EXPECT_EQ(366, numDaysInYear(2016));
  EXPECT_EQ(365, numDaysInYear(2021));
}

TEST(computeOffset, int)
{
  EXPECT_EQ(6, computeOffset(5,2016));
  EXPECT_EQ(5, computeOffset(5,2019));
}
int main(){
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}