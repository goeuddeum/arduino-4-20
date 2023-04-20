char message = '1';
int but = 8;

void setup() {
  pinMode(but, INPUT);
  Serial.begin(9600);
  Serial.println("자세히 보아야 예쁘다.");
}

void loop() {

  if (digitalRead(but) == HIGH) {
    Serial.println("너도 그렇다.");
    while(digitalRead(but) == HIGH){} 
    Serial.println("자세히 보아야 예쁘다.");
  
}
}


