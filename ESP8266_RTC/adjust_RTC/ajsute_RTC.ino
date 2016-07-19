#include <Wire.h> 
#include "RTClib.h"
RTC_DS1307 RTC;
void setup () {
Wire.begin(0,2); // Inicia el puerto I2C
RTC.begin(); // Inicia la comunicación con el RTC
RTC.adjust(DateTime(__DATE__, __TIME__)); // Establece la fecha y hora (Comentar una vez establecida la hora)
Serial.begin(115200); // Establece la velocidad de datos del puerto serie
}
void loop () {
}
