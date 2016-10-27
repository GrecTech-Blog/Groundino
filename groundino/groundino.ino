int sensor;
float umidity;

void setup() {
}

void loop() {

sensor = analogRead(A3);                // Reading values from the Funduino Water Sensor
umidity = ((float)sensor * 100) / 430 ; // Limit decided from a test of the sensor in a full water glass + maximum value in Volt of the sensor.

delay(1500);
}
