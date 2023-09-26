int LED1 = 5; // Assign LED pin i.e: D1 on NodeMCU
int LED2 = 4; // Assign LED pin i.e: D2 on NodeMCU
int LED3 = 0; // Assign LED pin i.e: D3 on NodeMCU

void setup() {
  // initialize GPIO pins as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH); // turn LED1 on
  delay(1000); // wait for a second
  digitalWrite(LED1, LOW); // turn LED1 off

  digitalWrite(LED2, HIGH); // turn LED2 on
  delay(1000); // wait for a second
  digitalWrite(LED2, LOW); // turn LED2 off

  digitalWrite(LED3, HIGH); // turn LED3 on
  delay(1000); // wait for a second
  digitalWrite(LED3, LOW); // turn LED3 off

  delay(1000); // wait for a second before restarting the loop
}
