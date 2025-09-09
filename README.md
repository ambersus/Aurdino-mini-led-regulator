# Aurdino-mini-led-regulator

This Arduino project controls multiple LEDs with different behaviors:
- **Red LED**: Blinks with a 500ms interval.
- **White LED**: Blinks with a 300ms interval.
- **Blue LED**: Fades in brightness continuously.
- **Green LED**: Toggles ON/OFF based on a push button input.

## Hardware Setup
- Red LED connected to pin 11
- Blue LED connected to pin 10
- Green LED connected to pin 8
- Button connected to pin 7 (configured as INPUT_PULLUP)
- White LED connected to pin 6

## Features
- Non-blocking timing using `millis()` for simultaneous LED control.
- Simple fading effect using PWM.
- Push button toggles green LED state.

## Usage
1. Upload the code to your Arduino board.
2. Power the board and observe the LED behavior.
3. Press the button to toggle the green LED.

## Notes
- Ensure proper resistors are used with LEDs.
- Avoid using `delay()` for timing to maintain non-blocking operation.
