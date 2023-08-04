# ARM_GPIO
GPIO (General Purpose Input/Output) Driver for STM32F401
GPIO

Overview
The GPIO Driver for STM32F401 is a versatile library that facilitates easy control and manipulation of the General Purpose Input/Output pins in the STM32F401RE microcontroller. GPIO pins provide a generic interface for interacting with external devices and peripherals, enabling developers to configure them as either input or output, and control their logic levels. This driver streamlines the configuration process and simplifies GPIO usage for various applications.

Key Features
Configuration: The driver offers functions to set the GPIO pin mode (input or output), speed, pull-up/pull-down resistors, and alternate function settings.

Pin Control: Developers can easily read and write the logic level of individual GPIO pins using the provided functions.

Interrupt Support: The driver supports GPIO interrupt configuration for input pins, allowing the microcontroller to respond to external events efficiently.

Atomic Operations: For concurrent access to GPIO registers, the driver implements atomic operations to ensure data integrity in multi-threaded environments.

Sample Applications: Well-documented sample applications showcase different use cases, providing a quick reference for beginners.

Installation
To use the GPIO Driver in your STM32F401RE project, follow these steps:

Clone the repository or download the source code.
Copy the relevant driver files (gpio.c and gpio.h) into your project directory.
Include the gpio.h header file in your application code.
Usage
Using the GPIO Driver is straightforward:

Initialize the GPIO: Call the initialization function to set up the GPIO configuration, including pin mode, pull-up/pull-down, and alternate function (if needed).

Read Input Pins: Use the provided functions to read the logic level from input pins.

Write Output Pins: Control the logic level on output pins using the provided functions.

Interrupt Handling (Optional): Configure and handle GPIO interrupts for input pins to respond to external events.

Contributions
Contributions to the GPIO Driver for STM32F401 are welcome! If you encounter any issues or have enhancements to propose, please feel free to open an issue or submit a pull request on the GitHub repository.

License
The GPIO Driver for STM32F401 is licensed under the MIT License, making it suitable for both personal and commercial projects.

Note: This GPIO driver is specifically designed for the STM32F401RE microcontroller. For other STM32 devices, verify the GPIO peripheral configuration from the respective datasheet and reference manual. Always consult the STM32F401RE datasheet and reference manual for the most accurate and up-to-date information.
