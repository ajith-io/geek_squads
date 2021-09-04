#ifndef REMIND_H_
#define REMIND_H_
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
#endif