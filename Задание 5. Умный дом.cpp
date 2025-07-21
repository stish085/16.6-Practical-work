// Задание 5. Умный дом.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
enum switches
{
LIGHTS_INSIDE = 1,
LIGHTS_OUTSIDE = 2,
HEATERS = 4,
WATER_PIPE_HEATING = 8,
CONDITIONER = 16
};



void temperature(int temperatureInside, int temperatureOutside,  int& sw_st)
{
    int value;
    int*switches_state=& sw_st;
    if (temperatureOutside<0 && !(*switches_state & WATER_PIPE_HEATING))
    {  
        *switches_state |= WATER_PIPE_HEATING;
        std::cout << "WATER_PIPE_HEATING: ON" << std::endl;
        
    }
    if (temperatureOutside > 5  && (*switches_state & WATER_PIPE_HEATING))
    {
        *switches_state &= ~WATER_PIPE_HEATING;
        std::cout << "WATER_PIPE_HEATING: OFF" << std::endl;
    }
    if (temperatureInside < 22 && !(*switches_state & HEATERS)) {
        *switches_state |= HEATERS;
        std::cout << "HEATERS: ON" << std::endl;
    }
    if (temperatureInside >= 25 && (*switches_state & HEATERS)) {
        *switches_state &= ~HEATERS;
        std::cout << "HEATERS: OFF!" << std::endl;
    }

    if (temperatureInside >= 30 && !(*switches_state & CONDITIONER)) {
        *switches_state |= CONDITIONER;
        std::cout << "CONDITIONER: ON" << std::endl;
    }
    if (temperatureInside <= 25 && (*switches_state & CONDITIONER)) {
        *switches_state &= ~CONDITIONER;
        std::cout << "CONDITIONER: OFF" << std::endl;
    }
}
void light(std::string movement, std::string lights, int& sw_st,int hour, int& color_temp)
{   
    int* switches_state = &sw_st;
    bool is_evening = (hour >= 16 || hour < 5);
    if ((is_evening && movement == "yes") && !(*switches_state & LIGHTS_OUTSIDE)) {
        *switches_state |= LIGHTS_OUTSIDE;
        std::cout << "LIGHTS_OUTSIDE: ON" << std::endl;
    }
    if (!(is_evening || movement == "yes") && (*switches_state & LIGHTS_OUTSIDE)) {
        *switches_state &= ~LIGHTS_OUTSIDE;
        std::cout << "LIGHTS_OUTSIDE: OFF" << std::endl;
    }

    if (lights == "on" && !(*switches_state & LIGHTS_INSIDE)) {
        *switches_state |= LIGHTS_INSIDE;
        std::cout << "LIGHTS_INSIDE: ON" << std::endl;
    }
    if (lights == "off" && (*switches_state & LIGHTS_INSIDE)) {
        *switches_state &= ~LIGHTS_INSIDE;
        std::cout << "LIGHTS_INSIDE: OFF" << std::endl;
    }
    int* color = & color_temp;
    if (lights == "on") {
        if (hour >= 16 && hour < 20) {
            *color = 5000 - (hour - 16) * 775;
        }
        if (hour == 0) {
            *color = 5000;
        }
        std::cout << "Color temperature: " << *color << "K" << std::endl;
    }
}
int main()
{   
    int switches_state = 0;
    int color_temp = 5000;
    std::string movement, lights;
    int temperatureInside, temperatureOutside;
    int hour = 0;
    for (int day = 1; day <= 2; day++) {
        std::cout << "Day: " << day;
        hour = 0;
        do {
            std::cout << " Hour: " << hour << std::endl;
            hour++;
            std::cout << "Temperature inside, temperature outside, movement, lights:\n";
            std::cin >> temperatureInside >> temperatureOutside >> movement >> lights;
            temperature(temperatureInside, temperatureOutside, switches_state);
            light(movement, lights, switches_state, hour, color_temp);
        } while (hour != 24);
    }
}


