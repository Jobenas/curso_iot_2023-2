#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "redpucp";
const char* pwd = "C9AA28BA93";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println();
  delay(1000);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pwd);
  Serial.println("[*] Iniciando conexion a red...");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.print("Conectado a red WiFi, con IP: ");
  Serial.println(WiFi.localIP());
  
}

void loop() {
  // put your main code here, to run repeatedly:
}
