const int buttonPin = 2;

int buttonState = 0;
int variable_buttonState = 0;

void setup() {

Serial.begin(9600);

pinMode(buttonPin, INPUT);

}

void loop(){

buttonState = digitalRead(buttonPin);

if (buttonState == HIGH) {
variable_buttonState = !variable_buttonState;
  delay(300);
}

Serial.print(variable_buttonState);

}
