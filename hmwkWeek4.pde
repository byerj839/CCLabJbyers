//import processing.serial.*;
//import cc.arduino.*;

//Arduino arduino;

//int ledPin = 13;

//void setup(){
//  arduino = new Arduino(this, Arduino.list()[3], 57600); //Processing sketch, serial port, speed
//  arduino.pinMode(ledPin, Arduino.OUTPUT);
  
//}

//void draw(){
// arduino.digitalWrite(ledPin, Arduino.HIGH);
// delay(500);
// arduino.digitalWrite(ledPin, Arduino.LOW);
// delay(500);
//}

//EXAMPLE 2

import processing.serial.*;

Serial myPort;

float xPos = 0;
float yPos = 0;
float r;
float g;
float b;
float dir;


void setup(){
 size(800, 600);
 println(Serial.list());
 
 String portName = Serial.list()[3];
 myPort= new Serial(this, portName, 9600);
 
 background(#081640);
}

void draw(){
  ////draw line
  // stroke(#A8D9A7);
  // line(xPos, height, xPos, yPos);
   
  // //at the edge of the screen go back to the beginning
  // if(xPos >= width){
  //   xPos = 0;
  //   background(#081640);
  // }else{
  //   xPos++;
  // }
  
  noStroke();
  fill(random(0, 255), random(0, 255), random(0, 255));
  ellipse(xPos, yPos, 10, 10);
   if(xPos >= width || xPos < 0){
     xPos = 0;
     background(#081640);
   }else{
     if(mousePressed == true){
        xPos--;
      }else{
        xPos++;
      }
   }
   
   
  
  
}

void serialEvent(Serial myPort){
  //get byte
  int inByte = myPort.read();
  //and display it
  println(inByte);
  
  yPos = height - inByte;
}