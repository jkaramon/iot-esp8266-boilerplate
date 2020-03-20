# iot-esp8266-boilerplate

## Git & Github
1. Zaregistruj se na [Github](https://github.com/u.
1. Stáhni si [Github Desktop](https://desktop.github.com/)
1. Otevři Github Desktop - Clone repository - `jkaramon/iot-esp8266-boilerplate`



Startovní projekt pro ESP 8266, Platform.io. OTA a RemoteDebug

## Serial upload
Zakomentuj v platform.ini:
```ini
# upload_protocol = espota
# upload_port = example-device.local
```
a spusť `Upload`

## OTA Upload
v src/main.cpp uprav proměnné ssid, password a host.

Odkomentuj v platform.ini:
```ini
upload_protocol = espota
upload_port = example-device.local # musi byt {host}.local
```
a spusť `Upload`


## Telnet monitor
Nainstaluj telnet - https://kencenerelli.wordpress.com/2017/07/16/enabling-telnet-client-in-windows-10/


