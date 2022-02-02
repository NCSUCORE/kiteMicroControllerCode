#include <SoftwareSerial.h>
#include <TinyGPS++.h>

static const int RXPin = 16, TXPin = 17;
static const uint32_t GPSBaud = 9600;

SoftwareSerial ss(RXPin, TXPin);
TinyGPSPlus gps; 

int analogOut = 0;
float volt = 0;
float spd = 0;

void setup() {
  Serial.begin(9600);                              //This opens up communications to the Serial monitor in the Arduino IDE
  ss.begin(9600);                                  //This opens up communications to the GPS
  Serial.println("GPS Start");                     //Just show to the monitor that the sketch has started
  pinMode(13, OUTPUT);                             //Built-in LED 
}

void loop() {
  
  while(ss.available())
  {
    gps.encode(ss.read());                        //This feeds the serial NMEA data into the library one char at a time
    digitalWrite(13, HIGH);                       //Indicate with built-in LED that connection is available
  }

  if(gps.location.isUpdated())                    //Is fired all the time anyway but will at least reduce it to only after a package of NMEA data comes in
  {
    //Get the latest info from the gps object which it derived from the data sent by the GPS unit
    spd = gps.speed.mps();                        //Get gps speed in meters per second      
    analogOut = floor(spd*85);                    //Speed of 0-3 mapped to 0-255 bins (0-5V PWM output) 
    analogOut = constrain(analogOut, 0, 255);     //Saturation 
    dacWrite(25,analogOut);                       //Write as analog voltage
          
    //Print on serial monitor (for debugging only)    
//    Serial.println("Satellite Count:");
//    Serial.println(gps.satellites.value());
//    Serial.println("Latitude:");
//    Serial.println(gps.location.lat(), 6);
//    Serial.println("Longitude:");
//    Serial.println(gps.location.lng(), 6);
//    Serial.println("Speed MPH:");
//    Serial.println(gps.speed.mps());
//    Serial.println("Altitude Feet:");
//    Serial.println(gps.altitude.feet());
//    Serial.println("");


    //Print (velocity and voltage only) on serial monitor (for debugging only)
    volt = spd*1.0667;
    Serial.println(spd);
    Serial.println("mps");
    Serial.println("");
    Serial.println(volt);
    Serial.println("V"); 
  }


}
