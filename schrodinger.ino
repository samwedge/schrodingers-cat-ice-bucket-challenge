#include <Servo.h> 

Servo b1_servo;
Servo b2_servo;

unsigned long time;
unsigned long  b1_time;
unsigned long  b2_time;
int b1_activated = 0;
int b2_activated = 0;

int b1_servo_min = 0;
int b1_servo_max = 150;
int b2_servo_min = 150;
int b2_servo_max = 0;
int b_delay = 30;

void setup() 
{ 
  b1_servo.attach(9);
  b2_servo.attach(10);
  b1_time = random(20, 60) * 1000UL;
  b2_time = random(20, 60) * 1000UL;
  b1_servo.write(b1_servo_min);
  b2_servo.write(b2_servo_min);
} 

void loop() 
{ 
  time = millis();

  if(b1_activated==0){
    if(time > b1_time){
      b1_servo.write(b1_servo_max);
      b1_activated = 1;
    }
  }

  if(b2_activated==0){
    if(time > b2_time){
      b2_servo.write(b2_servo_max);
      b2_activated = 1;
    }
  }

}
