#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Airplane
{
private:
    string flightNumber;
    string destination;
    time_t departureTime;

public:
    // Constructor
    Airplane(string number, string dest, time_t departure)
        : flightNumber(number), destination(dest), departureTime(departure) {}

    // Method to check flight status
    string checkFlightStatus()
    {
        time_t currentTime = time(nullptr);
        if (currentTime < departureTime)
        {
            return "On time";
        }
        else if (currentTime == departureTime)
        {
            return "Departing now";
        }
        else
        {
            return "Delayed";
        }
    }

    // Method to set delay
    void setDelay(int minutes)
    {
        departureTime += minutes * 60; // Convert minutes to seconds
    }
};

int main()
{
    // Example usage
    time_t currentUnixTime = time(nullptr);

    // Assume the flight is scheduled 1 hour from now
    Airplane flight("ABC123", "New York", currentUnixTime + 3600);

    cout << "Flight Status: " << flight.checkFlightStatus() << endl;

    // Simulate a delay of 30 minutes
    flight.setDelay(30);

    cout << "Flight Status after delay: " << flight.checkFlightStatus() << endl;

    return 0;
}
