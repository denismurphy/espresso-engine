![EspressoEngine](https://github.com/denismurphy/espresso-engine/blob/main/image/engine_coffee.svg?raw=true)

# ☕ EspressoEngine: Arduino-ESP32 Smart Coffee Machine Controller

EspressoEngine is prototype for smart coffee machine using Arduino and ESP32! ✨

## 🚀 Features

Project consists of two main files:

### 📄 `coffee_machine.h`

This header file is the interface of our coffee machine:

- 🔢 Pin constants
- 🔀 State enumerations
- 📝 Function prototypes

### 📄 `coffee_machine.c`

Key functions include:

- `coffee_machine_init()`: 🔌 Powers up your coffee machine
- `start_clean_cycle()`: 🧼 Keeps your machine sparkling clean
- `grind_coffee()`: ⚙️ Grinds your beans to perfection
- `pull_shot()`: ☕ Extracts that liquid gold
- `activate_milk_wand()`: 🥛 Froths milk like a pro
- `activate_hot_water_dispenser()`: 🚰 Dispenses hot water on demand
- `check_temperature()`: 🌡️ Ensures optimal brewing temperature
- `get_current_state()`: 📊 Keeps you informed of the machine's status

## ⚠️ Important Note

This code is designed for a hypothetical prototype coffee machine. Your specific hardware may require additional configuration and safety measures.

## 👨‍💻 Authors

- **Denis Murphy**

## 📜 License

This project is caffeinated under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
