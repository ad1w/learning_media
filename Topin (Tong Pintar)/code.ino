// Topin (Tong Pintar)

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd (0x27, 16, 2);

const int servo_pin = 4;
Servo servomotor;

const int echo_pin = 2;
const int trig_pin = 3;

float duration = 0.0;
float distance = 0.0;
float distance_max = 20;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(echo_pin, INPUT);
  pinMode(trig_pin, OUTPUT);

  pinMode(servo_pin, OUTPUT);
  servomotor.attach(servo_pin);

  servomotor.write(0);
  digitalWrite(trig_pin, LOW);

  lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Tong Pintar");
  lcd.setCursor(0,1);
  lcd.print("SD Insan Rabbani");
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig_pin, LOW);
  delay(2);
  
  digitalWrite(trig_pin, HIGH);
  delay(10);
  digitalWrite(trig_pin, LOW);
  
  duration = pulseIn(echo_pin, HIGH);
  distance = (duration * 0.034) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("cm | ");
  Serial.print(distance / 2.54);
  Serial.println("in");

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Put Your Hand >>");

  if (distance <= distance_max) {
    servomotor.write(130);
    lcd.setCursor(0,1);
    lcd.print("Ada Sampah");
    delay(5000);
  }
  else {
    servomotor.write(0);
    lcd.setCursor(0,1);
    lcd.print("Tidak Ada Sampah");
  }
  delay(100);
}
