void setup() {
  //Initializing Outputs               
  pinMode(8, OUTPUT); //Controls Direction
  pinMode(9, OUTPUT); //Controls Steps
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  //Initializing Inputs
  pinMode(2, INPUT); //Signal One
  pinMode(3, INPUT); //Signal Two
  pinMode(4, INPUT); //Signal Three
}

void loop() {
  //If signal triggers, first motor runs
  if (digitalRead(2) == LOW) {
   digitalWrite(9, HIGH);
   delay(1);          
   digitalWrite(9, LOW); 
   delay(1);  
  }
  //If signal triggers, second motor runs
  else if (digitalRead(3) == LOW) {
   digitalWrite(11, HIGH);
   delay(1);          
   digitalWrite(11, LOW); 
   delay(1);              
  }
  //If signal triggers, third motor runs
  else if (digitalRead(4) == LOW) {
   digitalWrite(13, HIGH);
   delay(1);          
   digitalWrite(13, LOW); 
   delay(1);              
  }
  //If no Signal, nothing happens
  else {}
}
