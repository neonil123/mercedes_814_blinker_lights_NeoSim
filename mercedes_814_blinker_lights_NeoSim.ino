#include <Joystick.h>

#define wipers3        9
#define wipers2        8
#define wipers1        7
#define clacson        6
#define wiperFluid     5
#define highBeam       4
#define flashLights    10
#define rightBlinker   16
#define leftBlinker    14
#define lowBeam        18
#define parkingBrake   15
#define ignitionKey    19



void setup() {
  Serial.begin(9600);
  pinMode(wipers3, INPUT);
  pinMode(wipers2, INPUT);
  pinMode(wipers1, INPUT);
  pinMode(clacson, INPUT); 
  pinMode(wiperFluid, INPUT);
  pinMode(highBeam, INPUT);
  pinMode(flashLights, INPUT);
  pinMode(rightBlinker, INPUT);
  pinMode(leftBlinker, INPUT);
  pinMode(lowBeam, INPUT);
  pinMode(parkingBrake, INPUT);
  pinMode(ignitionKey, INPUT);
  Joystick.begin();
}



void loop() {

  Joystick.setButton(0, !digitalRead(clacson));
  Joystick.setButton(1, !digitalRead(flashLights));
  Joystick.setButton(7, !digitalRead(wiperFluid));
  Joystick.setButton(9, !digitalRead(ignitionKey));

  static bool highBeamBool = true;
  if (digitalRead(highBeam) == 1  &&  highBeamBool) {
    Joystick.setButton(2, 1);
    delay(100);
    Joystick.setButton(2, 0);
    delay(100);
    highBeamBool = false;
  }

  if (digitalRead(highBeam) == 0 && !highBeamBool) {
    Joystick.setButton(2, 1);
    delay(100);
    Joystick.setButton(2, 0);;
    delay(100);
    highBeamBool = true;
  }



  static bool lowBeamBool = true;
  if (digitalRead(lowBeam) == 1  &&  lowBeamBool) {
    Joystick.setButton(3, 1);
    delay(30);
    Joystick.setButton(3, 0);
    delay(30);

    Joystick.setButton(3, 1);
    delay(30);
    Joystick.setButton(3, 0);
    delay(30);
    lowBeamBool = false;
  }

  if (digitalRead(lowBeam) == 0 && !lowBeamBool) {
    Joystick.setButton(3, 1);
    delay(100);
    Joystick.setButton(3, 0);;
    delay(100);
    lowBeamBool = true;
  }




  static bool rightBlinkerBool = true;
  if (digitalRead(rightBlinker) == 1  &&  rightBlinkerBool) {
    Joystick.setButton(4, 1);
    delay(100);
    Joystick.setButton(4, 0);
    delay(100);
    rightBlinkerBool = false;
  }

  if (digitalRead(rightBlinker) == 0 && !rightBlinkerBool) {
    Joystick.setButton(4, 1);
    delay(100);
    Joystick.setButton(4, 0);;
    delay(100);
    rightBlinkerBool = true;
  }



  static bool leftBlinkerBool = true;
  if (digitalRead(leftBlinker) == 1  &&  leftBlinkerBool) {
    Joystick.setButton(5, 1);
    delay(100);
    Joystick.setButton(5, 0);
    delay(100);
    leftBlinkerBool = false;
  }

  if (digitalRead(leftBlinker) == 0 && !leftBlinkerBool) {
    Joystick.setButton(5, 1);
    delay(100);
    Joystick.setButton(5, 0);;
    delay(100);
    leftBlinkerBool = true;
  }




  static bool parkingBrakeBool = true;
  if (digitalRead(parkingBrake) == 1  &&  parkingBrakeBool) {
    Joystick.setButton(6, 1);
    delay(100);
    Joystick.setButton(6, 0);
    delay(100);
    parkingBrakeBool = false;
  }

  if (digitalRead(parkingBrake) == 0 && !parkingBrakeBool) {
    Joystick.setButton(6, 1);
    delay(100);
    Joystick.setButton(6, 0);;
    delay(100);
    parkingBrakeBool = true;
  }




  static bool wipers1Bool = true;
  if (digitalRead( wipers1) == 1  &&  wipers1Bool) {
    Joystick.setButton(8, 1);
    delay(100);
    Joystick.setButton(8, 0);
    delay(100);
    wipers1Bool = false;
  }

  if (digitalRead( wipers1) == 0 && !wipers1Bool) {
    Joystick.setButton(8, 1);
    delay(20);
    Joystick.setButton(8, 0);;
    delay(100);

    Joystick.setButton(8, 1);
    delay(20);
    Joystick.setButton(8, 0);;
    delay(20);

    Joystick.setButton(8, 1);
    delay(20);
    Joystick.setButton(8, 0);;
    delay(20);

    wipers1Bool = true;
  }


  delay(5);

}
