#include <Arduino.h>
#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11
#define LDR_PIN 34

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(115200);
    dht.begin();
}

void loop() {
    int ldrValue = analogRead(LDR_PIN);

    float temp = dht.readTemperature();
    float hum = dht.readHumidity();

    if (isnan(temp) || isnan(hum)) {
        Serial.println("DHT Error!");
        return;
    }

    Serial.print("Light: ");
    Serial.print(ldrValue);

    Serial.print(" | Temp: ");
    Serial.print(temp);

    Serial.print(" °C | Hum: ");
    Serial.print(hum);
    Serial.println(" %");

    delay(2000);
}
