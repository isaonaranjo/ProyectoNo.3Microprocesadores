// Maria Isabel Ortiz Naranjo 
// Mario Andres Perdomo 
// Josue Sagastume 
// Microprocesadores

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float sensorVoltage;
  float sensorValue;

  sensorValue = analogRead(A0);
  sensorVoltage = sensorValue / 1024 * 3.3;
  Serial.print("Lectura del sensor (rayos UV): ");
  Serial.println(sensorValue);
  delay(100);
  
}
