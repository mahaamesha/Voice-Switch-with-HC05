/*
  Devices Sensor Suara
  created by Ma Haamesha on February, 9th 2020
  fixed on March, 22th 2020

  Program ini untuk menghidupkan devices, dalam contoh ini 5 buah led dengan sensor suara.
  Diperlukan aplikasi android yang terhubung dengan bluetooth sebagai penerima input suara.
  Gunakan kata-kata dalam bahasa inggris agar mempermudah pembacaan suara di aplikasi.

  Alat dan rangkaian bisa dilihat di readme.txt
  Pastikan saat upload, kabel RX TX dicabut dulu
*/

String voice;
int device1 = 13;
int device2 = 12;
int device3 = 11;
int device4 = 10;
int device5 = 9;

//fungsi untuk hidup-mati semua
void semuaOn() {
  digitalWrite(device1, HIGH);
  digitalWrite(device2, HIGH);
  digitalWrite(device3, HIGH);
  digitalWrite(device4, HIGH);
  digitalWrite(device5, HIGH);
}

void semuaOff() {
  digitalWrite(device1, LOW);
  digitalWrite(device2, LOW);
  digitalWrite(device3, LOW);
  digitalWrite(device4, LOW);
  digitalWrite(device5, LOW);
}

//inisialisasi pin dan mode-pin
void setup() {
  Serial.begin(9600);
  pinMode(device1, OUTPUT);
  pinMode(device2, OUTPUT);
  pinMode(device3, OUTPUT);
  pinMode(device4, OUTPUT);
  pinMode(device5, OUTPUT);
}

//main program berulang
void loop() {
  //digitalWrite(device1, HIGH);
  //delay(500);
  //digitalWrite(device1, LOW);
  //semuaOn();
  //delay(500);
  //semuaOff();

  while (Serial.available()) {      //cek apa ada input
    delay(10);
    char input = Serial.read();
    if (input == '#') {
      break;
    }
    voice += input;
  }

  if (voice.length() > 0) {
    Serial.println(voice);
    if (voice == "all on") {
      semuaOn();
    }
    else if (voice == "all of") {
      semuaOff();
    }

    else if (voice == "TV on") {
      digitalWrite(device1, HIGH);
    }
    else if (voice == "speaker on") {
      digitalWrite(device2, HIGH);
    }
    else if (voice == "radio on" || voice == "Radio On") {
      digitalWrite(device3, HIGH);
    }
    else if (voice == "musik on") {
      digitalWrite(device4, HIGH);
    }
    else if (voice == "hidup lima") {
      digitalWrite(device5, HIGH);
    }

    else if (voice == "TV off") {
      digitalWrite(device1, LOW);
    }
    else if (voice == "speaker off") {
      digitalWrite(device2, LOW);
    }
    else if (voice == "radio off") {
      digitalWrite(device3, LOW);
    }
    else if (voice == "musik off") {
      digitalWrite(device4, LOW);
    }
    else if (voice == "bantai 5") {
      digitalWrite(device5, LOW);
    }

    voice = "";     //menghapus char input sebelumnya
  }
}
