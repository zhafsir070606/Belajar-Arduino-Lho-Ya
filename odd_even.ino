unsigned long detikAwalA = 0;
unsigned long detikAwalB = 0;
const long intervalA = 2000;
const long intervalB = 3000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long nilaiSebenernya = millis();
if (nilaiSebenernya - detikAwalA >= intervalA) {
  detikAwalA = nilaiSebenernya;
  unsigned long nilaiInputA = nilaiSebenernya/intervalA;
  Serial.print("A ");
  Serial.print(nilaiInputA);
  Serial.println(nilaiInputA % 2 == 0 ? " Genap" : " Ganjil");
}
if (nilaiSebenernya - detikAwalB >= intervalB) {
  detikAwalB = nilaiSebenernya;
  unsigned long nilaiInputB = nilaiSebenernya/intervalB;
  Serial.print("B ");
  Serial.print(nilaiInputB);
  Serial.println(nilaiInputB % 2 == 0 ? " Genap" : " Ganjil");
}
}
