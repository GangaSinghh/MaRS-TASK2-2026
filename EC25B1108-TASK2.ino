//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

#define REMOTEXY_MODE__WIFI_POINT

#include <ESP8266WiFi.h>
#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_WIFI_SSID "RemoteXY"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t const PROGMEM RemoteXY_CONF_PROGMEM[] = {
  255,2,0,0,0,47,0,19,0,0,0,0,31,1,106,200,1,1,2,0,
  2,26,20,44,22,0,2,26,31,31,79,78,0,79,70,70,0,
  2,27,58,44,22,0,2,26,31,31,79,78,0,79,70,70,0
};

// structure for RemoteXY
struct {
  uint8_t TurnONOFF;
  uint8_t ChangeDirection;
  uint8_t connect_flag;
} RemoteXY;

#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

int enablepin = D4;
int motorpin1 = D2;
int motorpin2 = D0;

void setup() 
{
  RemoteXY_Init();  

  pinMode(motorpin1, OUTPUT);
  pinMode(motorpin2, OUTPUT);
  pinMode(enablepin, OUTPUT);
}

void loop() 
{ 
  RemoteXY_Handler();

  if (RemoteXY.TurnONOFF == 1) {
    digitalWrite(enablepin, HIGH);

    if (RemoteXY.ChangeDirection == 1) {
      digitalWrite(motorpin1, LOW);
      digitalWrite(motorpin2, HIGH);
    } else {
      digitalWrite(motorpin1, HIGH);
      digitalWrite(motorpin2, LOW);
    }

  } else {
    digitalWrite(enablepin, LOW);
  }
}