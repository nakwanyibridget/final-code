int Button=4;
int led=12;
int RelayDrive=11;

void setup() {
  pinMode (Button,INPUT);
  pinMode (led,OUTPUT);
  pinMode (RelayDrive,OUTPUT);
}

void loop() {
  if (digitalRead(Button)==HIGH){
    digitalWrite (led,HIGH);
    digitalWrite (RelayDrive,HIGH);
  }
    else {
    digitalWrite (led,LOW);
    digitalWrite (RelayDrive,LOW);
  }
}
