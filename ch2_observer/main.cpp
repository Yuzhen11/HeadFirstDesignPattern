#include "Subject.hpp"
#include "CurrentConditionsDisplay.hpp"

int main() {
    WeatherData weather_data;
    CurrentConditionsDisplay current_display(&weather_data);
    weather_data.setMeasurements(80, 65, 30.4);
    weather_data.setMeasurements(82, 70, 29.2);
    weather_data.setMeasurements(78, 90, 29.2);
    return 0;
}
