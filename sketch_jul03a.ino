#include <LiquidCrystal.h>
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

#define Gas A0
#define Reley 3

#define Motor_Positive 4
#define Motor_Negative 5
#define Pump_Positive 6
#define Pump_Negative 7

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void Reley_Fun();
void motor();

void setup() {

  Serial.begin(9600);
  dht.begin();
  pinMode(Gas, INPUT);

  pinMode(Reley, OUTPUT);
//  digitalWrite(Reley, LOW);
digitalWrite(Reley, HIGH);
  pinMode(Motor_Positive, OUTPUT);
  pinMode(Motor_Negative, OUTPUT);
  pinMode(Pump_Positive, OUTPUT);
  pinMode(Pump_Negative, OUTPUT);

  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("POULTRY MONITOR");
  delay(5000);
  lcd.clear();
}

void loop() {
  digitalWrite(Reley, HIGH);
  int temperature = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  lcd.setCursor(0, 0);
  lcd.print("TEMP :");
  lcd.setCursor(8, 0);
  lcd.print(temperature);
  delay(300);
  int gas_data = analogRead(Gas);
  Serial.println("gas_data");
  Serial.print(gas_data);

  lcd.setCursor(0, 1);
  lcd.print("GAS_DATA :");
  lcd.setCursor(11, 1);
  lcd.print(gas_data);
  delay(2000);
  lcd.clear();

  if (gas_data < 200 || temperature >= 35) {
    lcd.setCursor(0, 0);
    lcd.print("ALERT: ABNORMAL");
    Reley_Fun();
    lcd.clear();

  }
}
void Reley_Fun() {
  digitalWrite(Reley, LOW);// dc fan

  delay(4000);
  digitalWrite(Reley, HIGH);
  motor();
}
void motor() {
  digitalWrite(Motor_Positive, LOW); //front
  digitalWrite(Motor_Negative, HIGH);
  
  delay(5000);
  digitalWrite(Motor_Positive, LOW); //front
  digitalWrite(Motor_Negative, LOW);
  digitalWrite(Pump_Positive, LOW); //front
  digitalWrite(Pump_Negative, HIGH);
  delay(5000);
  digitalWrite(Pump_Positive, LOW); //front
  digitalWrite(Pump_Negative, LOW);
}
