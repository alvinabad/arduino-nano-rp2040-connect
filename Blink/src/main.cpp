/*******************************************************************************
 *
 * Compute for Pi and display on ssd1306 128x64 i2c OLED
 *
 * MIT License
 *
 * Copyright (c) 2021 Alvin Abad
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 ******************************************************************************/

/*
  Blink Built-in LED and RGB LED
*/

#include <Arduino.h>
#include <SPI.h>

#define DELAY           500

void blink();

// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(115200);
    delay(2000);

    Serial.println();
    Serial.print("Begin BLINKER LED_BUILTIN and LED RGB: ");
    Serial.println(LED_BUILTIN);

    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(LEDR, OUTPUT);
    pinMode(LEDG, OUTPUT);
    pinMode(LEDB, OUTPUT);
}

void loop() {
    blink();
    Serial.println( millis() );
}

void blink() {
    Serial.println("Blinking LEDs...");

    digitalWrite(LED_BUILTIN, HIGH);
    delay(DELAY);
    digitalWrite(LED_BUILTIN, LOW);

    digitalWrite(LEDR, HIGH);
    delay(DELAY);
    digitalWrite(LEDR, LOW);

    digitalWrite(LEDG, HIGH);
    delay(DELAY);
    digitalWrite(LEDG, LOW);

    digitalWrite(LEDB, HIGH);
    delay(DELAY);
    digitalWrite(LEDB, LOW);
}
