
#include <Arduino.h>

// Konfigurasi pin sensor MQ-7
const int PIN_SENSOR_CO = 34;

// Batas awal untuk pengujian logika.
// Ini hanya nilai simulasi ADC, bukan ppm CO terkalibrasi.
const int BATAS_WASPADA = 1500;
const int BATAS_BAHAYA = 2500;

int bacaSensorCO() {
  return analogRead(PIN_SENSOR_CO);
}

String tentukanStatus(int nilai) {
  if (nilai >= BATAS_BAHAYA) {
    return "BAHAYA";
  } else if (nilai >= BATAS_WASPADA) {
    return "WASPADA";
  }

  return "AMAN";
}

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);

  Serial.println();
  Serial.println("=== Smart Car Safety System ===");
  Serial.println("Monitoring sensor MQ-7 dimulai");
}

void loop() {
  int nilaiCO = bacaSensorCO();
  String status = tentukanStatus(nilaiCO);

  Serial.print("[INPUT] Nilai ADC = ");
  Serial.println(nilaiCO);

  Serial.print("[STATUS] ");
  Serial.println(status);

  Serial.println("------------------------");

  delay(1000);
}
