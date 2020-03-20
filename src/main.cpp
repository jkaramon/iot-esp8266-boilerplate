#include <Arduino.h>
#include <OTA.h>
#include <RemoteDebug.h>

RemoteDebug Debug;

char *ssid = "WIFI_SSID";
char *password = "WIFI_PASSWORD";
char *host = "example-device"; // mDNS hostname - device will be accessible as `example-device.local`

void setup()
{
  setupOTA(host, ssid, password);
  Debug.begin(host);
}

void loop()
{
  runOTA();
  delay(1000);
  Debug.println("TEST");
  Debug.handle();
}