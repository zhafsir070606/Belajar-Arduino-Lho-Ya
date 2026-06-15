unsigned long nilaiSementara= 0;
const long nilaiInterval = 1000;

int x = 0;

int inputUser;

int n = 0;

int angkaKeramat = 1;

void setup() {
Serial.begin(9600);
Serial.print("Nilai x saat ini : ");
Serial.println(x);
}

void loop() {
unsigned long nilaiSekarang = millis();

if (nilaiSekarang - nilaiSementara >= nilaiInterval) {
  x++;
  Serial.print("Detik ke-x adalah = ");
  Serial.println(x);

  nilaiSementara = nilaiSekarang;
}

if (Serial.available() > 0) {
  inputUser = Serial.parseInt();
  while (Serial.available() > 0) {
    Serial.read();
  }

  angkaKeramat = (3*n) + 1;

  if (inputUser == angkaKeramat) {
    Serial.print("Input diabaikan karena ");
    Serial.print(inputUser);
    Serial.println(" Angka Keramat");
    Serial.print("(n = ");
    Serial.print(n);
    Serial.println(")");

    n++;
  }
  else {
    Serial.print("angka yang anda masukkan = ");
    Serial.println(inputUser);
  }
}

}