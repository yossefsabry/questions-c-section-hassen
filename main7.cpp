#include <iostream>
#include <ctime>
using namespace std;

class Employee
{
private:
    int salary;
    string name;
    int yearHire;

public:
    Employee(int x, string n, int y)
    {
        salary = x;
        name = n;
        yearHire = y;
    }

    int calcYearHire()
    {
        // Get the current time
        time_t currentTime = time(nullptr);

        // Convert the current time to a structure
        tm currentDate = *localtime(&currentTime);

        int currentYear = 1900 + currentDate.tm_year;

        int yearsOfWork = currentYear - yearHire;

        return yearsOfWork;
    }
};

int main()
{
    Employee employ1(20000, "yossef", 2010);
    cout << "Years of work: " << employ1.calcYearHire() << endl;

    return 0;
}
