const int devicePin1 = 2; // choose pin
const int devicePin2 = 16;
const int devicePin3 = 4;
const int btnPin = 15;
int score = 0;
const unsigned long scoreDecay = 250;
unsigned long lastDecay = 0;
unsigned long lastBounce = 0;
int lastState = HIGH;


void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(devicePin1, OUTPUT); // sets the pin to output
  pinMode(devicePin2, OUTPUT);
  pinMode(devicePin3, OUTPUT);
  pinMode(btnPin, INPUT_PULLUP);
  
  lastDecay = millis();
  lastState = HIGH;
}

void loop() {

  //## DECAY LOGIC ##//

  unsigned long currentTime = millis();
  

  if (currentTime - lastDecay >= scoreDecay) {
    if (score - 1 >= 0) {
      score = score - 1;
    }

    lastDecay = millis();
  }
  //## BUTTON LOGIC ##//

  int reading = digitalRead(btnPin);
  

  if (currentTime - lastBounce > 50) {
    if (reading != lastState){
      if (reading == LOW){
        score++;
        lastBounce = millis();
        ;
      }
    }
    lastState = reading;
  }

  if (score >= 5) {
    digitalWrite(devicePin1, HIGH);
  } else {
    digitalWrite(devicePin1, LOW);
  }

    if (score >= 10) {
    digitalWrite(devicePin2, HIGH);
  } else {
    digitalWrite(devicePin2, LOW);
  }

    if (score >= 15) {
    digitalWrite(devicePin3, HIGH);
  } else {
    digitalWrite(devicePin3, LOW);
  }


  delay(10); // speed of loop

}


