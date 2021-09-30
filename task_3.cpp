

#include <string>
#include <iostream>
struct Time
{
    short day : 10; //since there are the same number of bits for negativeand positive values, we need 5 * 2 = 10
    short month : 8;
    short year;
    short hours : 10;
    short minutes : 12;
    short seconds : 12;
    short mseconds;
    void printTime()
    {
        std::cout << "Date and time of this event:" << std::endl;
        std::cout << "Date: " << day << "." << month << "." << year << std::endl;
        std::cout << "Time: " << hours << ":" << minutes << ":" << seconds << "." << mseconds << std::endl;
    }
};
int main()
{
    using namespace std;
    Time startingHomework = { 30, 9, 2021, 16, 0, 0, 0 };
    Time homeworkDeadline = { 30, 9, 2021, 20, 0, 0, 0 };
    cout << "Starting homework: "  << endl;
    startingHomework.printTime();
    cout << "Homework deadline: "  << endl;
    homeworkDeadline.printTime();
    cout << "Of course, I started doing my homework on the last day, so difference between starting and deadline is:  " << homeworkDeadline.hours - startingHomework.hours << " hours, omg!" << endl;
    return 0;
}


