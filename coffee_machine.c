#include "coffee_machine.h"
#include "library.h"

coffee_machine_state current_state;

void coffee_machine_init() {
    // Set the coffee machine's pins to output mode
    pinMode(GRINDER_PIN, OUTPUT);
    pinMode(PUMP_PIN, OUTPUT);
    pinMode(VALVE_PIN, OUTPUT);
    pinMode(HEATER_PIN, OUTPUT);
    pinMode(TEMPERATURE_SENSOR_PIN, INPUT);

    // Initialize the current state to IDLE
    current_state = IDLE;
}

void start_clean_cycle() {
    // Perform any necessary actions to start the clean cycle
    // e.g. turning on a cleaning solenoid valve for a certain amount of time
    digitalWrite(VALVE_PIN, HIGH);
    delay(10000); // cleaning for 10s
    digitalWrite(VALVE_PIN, LOW);

    // Update the current state
    current_state = CLEANING;
}

void grind_coffee() {
    // Perform any necessary actions to grind coffee
    // e.g. turning on a grinder motor
    digitalWrite(GRINDER_PIN, HIGH);
    delay(5000); // grind for 5s
    digitalWrite(GRINDER_PIN, LOW);

    // Update the current state
    current_state = GRINDING;
}

void pull_shot() {
    // Perform any necessary actions to pull a shot
    // e.g. turning on a pump to apply pressure to the coffee grounds
    digitalWrite(PUMP_PIN, HIGH);
    delay(3000); // pull for 3s
    digitalWrite(PUMP_PIN, LOW);

// Update the current state
    current_state = PULLING;
}

void activate_milk_wand() {
    // Perform any necessary actions to activate the milk wand
    // e.g. turning on a solenoid valve to let the milk flow
    digitalWrite(VALVE_PIN, HIGH);
    delay(2000); // activate for 2s
    digitalWrite(VALVE_PIN, LOW);
}

void activate_hot_water_dispenser() {
    // Perform any necessary actions to activate the hot water dispenser
    // e.g. turning on a solenoid valve to let the water flow
    digitalWrite(VALVE_PIN, HIGH);
    delay(3000); // activate for 3s
    digitalWrite(VALVE_PIN, LOW);
}

int check_temperature() {
    // Read the temperature sensor and return the temperature
    return analogRead(TEMPERATURE_SENSOR_PIN);
}

coffee_machine_state get_current_state() {
    return current_state;
}
