/*************************************************************
 Arduinominilabs
 Control de Servo conectado a Wemos mediante Blynk
 *************************************************************/

 //Librerias
 //link: https://github.com/esp8266/Arduino

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

//#include <Blynk.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#include <Servo.h>
Servo myservo;  // create servo object to control a servo

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "xxxxxxHQ76aSCDIkdehlxZ-9RAxxxxxx";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "yout ssid";
char pass[] = "your password";

const int ServoPin=2; //pin 2 es el D4 en Wemos d1 mini

int swOn=0;
int swOff=0;

//BLYNK_CONNECTED(){
  //Blynk.syncVirtual(V2); //sincronizo los dos pin virtuales que en este caso corresponden a dos botones en blynk.
//}

//BLYNK_CONNECTED(){
  //Blynk.syncVirtual(V3); //sincronizo los dos pin virtuales que en este caso corresponden a dos botones en blynk.
//}


BLYNK_WRITE(V2){ //lee el estado del servidor y sincroniza al ultimo estado ..es decir "V2 escribe sobre el nodemcu". TRANSMITE AL NODECMU
  swOn=param.asInt();

  if (swOn==1)
  {
  myservo.attach(ServoPin); //se usa esta rutina para que el servo no quedé vibrando
  myservo.write(135); //gira 45° hacia un lado
  delay(500);
  myservo.write(90);
  Blynk.virtualWrite(V0,"switch on");
  delay(500);
  myservo.detach(); //se usa esta rutina para que el servo no quedé vibrando
  }
}


BLYNK_WRITE(V3){ //lee el estado del servidor y sincroniza al ultimo estado ..es decir "V2 escribe sobre el nodemcu". TRANSMITE AL NODECMU
  swOff=param.asInt();

  if (swOff==1)
  {
    myservo.attach(ServoPin); //se usa esta rutina para que el servo no quedé vibrando
    myservo.write(45); //gira 45° hacia el otro
    delay(500);
    myservo.write(90);
    Blynk.virtualWrite(V0,"switch off");
    delay(500);
    myservo.detach(); //se usa esta rutina para que el servo no quedé vibrando
  }
}

void setup()
{
  // Debug console
  Serial.begin(9600);
  myservo.attach(ServoPin);
  myservo.write(90);
  delay(500);
  myservo.detach();

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);

  //Blynk.notify("Sistema Iniciado");
}

void loop()
{
  Blynk.run();
}
