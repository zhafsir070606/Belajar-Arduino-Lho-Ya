unsigned long waktuTerakhirA = 0;
unsigned long waktuTerakhirB = 0;
unsigned long waktuTerakhirC = 0;

const long intervalA = 2000;
const long intervalB = 3000;
const long intervalC = 5000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long waktuSekarang = millis();

  if(waktuSekarang - waktuTerakhirA >= intervalA){
    Serial.println("A");
    waktuTerakhirA = waktuSekarang;
  }

  if(waktuSekarang - waktuTerakhirB >= intervalB){
    Serial.println("B");
    waktuTerakhirB = waktuSekarang;
  }

  if(waktuSekarang - waktuTerakhirC >= intervalC){
    Serial.println("C");
    waktuTerakhirC = waktuSekarang;
  }

}
