#include <iostream>
#include <string>

using namespace std;

class TrafficLight {
private:
    string color;
    int duration; // Duration in seconds

public:
    // Constructor to initialize color and duration
    TrafficLight( string initialColor, int initialDuration)
        : color(initialColor), duration(initialDuration) {}

    // Getter functions
    string getColor() {
        return color;
    }

    int getDuration() {
        return duration;
    }

    // Method to change the color
    void changeColor(string newColor) {
        color = newColor;
    }

    // Method to check if the light is red
    bool isRed()  {
        return color == "Red";
    }

    // Method to check if the light is green
    bool isGreen() {
        return color == "Green";
    }
};

int main() {
    // Create an instance of the TrafficLight class
    TrafficLight trafficLight("Red", 30);

    // Display initial information
    cout << "Initial Color: " << trafficLight.getColor() << endl;
    cout << "Initial Duration: " << trafficLight.getDuration() << " seconds" << endl;

    // Change the color to green
    trafficLight.changeColor("Green");
    cout << "\nUpdated Color: " << trafficLight.getColor() << endl;

    // Check if the light is red or green
    if (trafficLight.isRed()) {
        cout << "The light is red." << endl;
    } else if (trafficLight.isGreen()) {
        cout << "The light is green." << endl;
    } else {
        cout << "The light is neither red nor green." << endl;
    }

    return 0;
}
