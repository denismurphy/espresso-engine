# EspressoEngine:  Arduino-ESP32 based smart coffee machine

EspressoEngine can be used with an Arduino and an ESP32 to control a coffee machine. This code provides an interface for controlling various functions of the coffee machine, such as the clean cycle, coffee grinding, pulling a shot, activating the milk wand, and activating the hot water dispenser.

## Code Overview
The code includes a header file `coffee_machine.h` and an implementation file `coffee_machine.c`

### `coffee_machine.h`
This file contains constants for the coffee machine's pins and an enum for the coffee machine's states. It also includes function prototypes for initializing the coffee machine, starting the clean cycle, grinding coffee, pulling a shot, activating the milk wand, activating the hot water dispenser, checking the temperature and getting the current state of the coffee machine.

### `coffee_machine.c`
This file contains the implementation of the functions declared in the header file. The `coffee_machine_init()` function is used to set the coffee machine's pins to output mode, and initialize the current state to IDLE.

### `coffee_machine_init()`
This function sets the coffee machine's pins to output mode, and initialize the current state to IDLE.

### `start_clean_cycle()`
This function performs any necessary actions to start the clean cycle, e.g. turning on a cleaning solenoid valve for a certain amount of time, and updates the current state to CLEANING.

### `grind_coffee()`
This function performs any necessary actions to grind coffee, e.g. turning on a grinder motor, and updates the current state to GRINDING.

### `pull_shot()`
This function performs any necessary actions to pull a shot, e.g. turning on a pump to apply pressure to the coffee grounds, and updates the current state to PULLING.

### `activate_milk_wand()`
This function performs any necessary actions to activate the milk wand, e.g. turning on a solenoid valve to let the milk flow.

### `activate_hot_water_dispenser()`
This function performs any necessary actions to activate the hot water dispenser, e.g. turning on a solenoid valve to let the water flow.

### `check_temperature()`
This function reads the temperature sensor and returns the temperature.

### `get_current_state()`
This function returns the current state of the coffee machine.

## Note
Keep in mind that this code is designed for a hypothetical coffee machine, the specific hardware and wiring of your coffee machine will vary and will require additional configuration and error handling. Safety and reliability should also be considered when working with electrical equipment.

## Contributions
Feel free to make contributions to this repository. If you have any improvements or bug fixes, please open a pull request. If you have any questions or issues, please open an issue and I will do my best to help you.

## Authors

-   **Denis Murphy**

## License
This code is licensed under the MIT License.
