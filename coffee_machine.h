#ifndef COFFEE_MACHINE_H
#define COFFEE_MACHINE_H

// Constants for the coffee machine's pins
#define GRINDER_PIN  14
#define PUMP_PIN     27
#define VALVE_PIN    33
#define HEATER_PIN   12
#define TEMPERATURE_SENSOR_PIN 32

// Constant for temperature threshold 
#define TEMPERATURE_THRESHOLD 50

// Enum for coffee machine's states 
typedef enum {
    IDLE,
    GRINDING,
    PULLING,
    HEATING,
    CLEANING
} coffee_machine_state;

// function to initialize the coffee machine 
void coffee_machine_init();

// function to start the clean cycle
void start_clean_cycle();

// function to grind coffee
void grind_coffee();

// function to pull a shot
void pull_shot();

// function to activate milk wand
void activate_milk_wand();

// function to activate hot water dispenser
void activate_hot_water_dispenser();

// function to check the temperature of the coffee
int check_temperature();

// function to get current state of the coffee machine
coffee_machine_state get_current_state();

#endif // COFFEE_MACHINE_H
