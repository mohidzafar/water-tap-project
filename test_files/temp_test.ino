#include <DallasTemperature.h>
#include <OneWire.h>

#define ONE_WIRE_BUS A0

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup()
{

    Serial.begin(9600);
    sensors.begin();
}
void loop()
{
    sensors.requestTemperatures();
    Serial.print("Temperature: ");
    Serial.print(sensors.getTempCByIndex(0));
    Serial.println("°C");
    delay(1000);
}