#include <Servo.h>
Servo lockservo;
// this constant won't change:
const int unlocked = 90;
const int locked = 150;
const int button1Pin = A1;    // the pin that the pushbuttosn are attached to
const int button2Pin = A2;
const int button3Pin = A3;
const int button4Pin = A4;
const int button5Pin = A5;
const int button6Pin = 24;
const int button7Pin = 23;
const int button8Pin = 22;
const int button9Pin = 0;
const int button10Pin = 1;
const int Green1LED = 10;    // the pin that the LEDs are attached to
const int Green2LED = 12;
const int Green3LED = 11;
const int Blue1LED = 13;
const int Blue2LED = 9;
const int Blue3LED = 6;
const int Red1LED = 5;
const int Red2LED = 21;
const int Red3LED = 20;
const int codevalue[] = {4, 2, 3, 8, 6, 10, 5, 1, 7, 9};

// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int button1State = HIGH;         // current state of the buttons
int button2State = HIGH;        //
int button3State = HIGH;         //
int button4State = HIGH;        //
int button5State = HIGH;        //
int button6State = HIGH;         // current state of the buttons
int button7State = HIGH;        //
int button8State = HIGH;         //
int button9State = HIGH;        //
int button10State = HIGH;        //
int lastButton1State = HIGH;         // previous state of the buttons
int lastButton2State = HIGH;        //
int lastButton3State = HIGH;         //
int lastButton4State = HIGH;        //
int lastButton5State = HIGH;        //
int lastButton6State = HIGH;         // previous state of the buttons
int lastButton7State = HIGH;        //
int lastButton8State = HIGH;         //
int lastButton9State = HIGH;        //
int lastButton10State = HIGH;        //
int testvalue[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int testcorrect = 0;

void setup() {
  // initialize the button pin as a input:
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(button4Pin, INPUT_PULLUP);
  pinMode(button5Pin, INPUT_PULLUP);
  pinMode(button6Pin, INPUT_PULLUP);
  pinMode(button7Pin, INPUT_PULLUP);
  pinMode(button8Pin, INPUT_PULLUP);
  pinMode(button9Pin, INPUT_PULLUP);
  pinMode(button10Pin, INPUT_PULLUP);
  lockservo.attach(A0);
  lockservo.write(locked);

  // initialize the LED as an output:
  pinMode(Green1LED, OUTPUT);
  pinMode(Green2LED, OUTPUT);
  pinMode(Green3LED, OUTPUT);
  pinMode(Blue1LED, OUTPUT);
  pinMode(Blue2LED, OUTPUT);
  pinMode(Blue3LED, OUTPUT);
  pinMode(Red1LED, OUTPUT);
  pinMode(Red2LED, OUTPUT);
  pinMode(Red3LED, OUTPUT);

}
void loop() {
  //Do some stuff with the LEDs
  digitalWrite(Green1LED, HIGH);
  delay(1);
  digitalWrite(Green1LED, LOW);
  delay(1);
  digitalWrite(Green2LED, HIGH);
  delay(1);
  digitalWrite(Green2LED, LOW);
  delay(1);
  digitalWrite(Green3LED, HIGH);
  delay(1);
  digitalWrite(Green3LED, LOW);
  delay(1);
  digitalWrite(Blue1LED, HIGH);
  delay(1);
  digitalWrite(Blue1LED, LOW);
  delay(1);
  digitalWrite(Blue2LED, HIGH);
  delay(1);
  digitalWrite(Blue2LED, LOW);
  delay(1);
  digitalWrite(Blue3LED, HIGH);
  delay(1);
  digitalWrite(Blue3LED, LOW);
  delay(1);
  digitalWrite(Red1LED, HIGH);
  delay(1);
  digitalWrite(Red1LED, LOW);
  delay(1);
  digitalWrite(Red2LED, HIGH);
  delay(1);
  digitalWrite(Red2LED, LOW);
  delay(1);
  digitalWrite(Red3LED, HIGH);
  delay(1);
  digitalWrite(Red3LED, LOW);
  delay(1);
  // read the pushbutton input pin:
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);
  button5State = digitalRead(button5Pin);
  button6State = digitalRead(button6Pin);
  button7State = digitalRead(button7Pin);
  button8State = digitalRead(button8Pin);
  button9State = digitalRead(button9Pin);
  button10State = digitalRead(button10Pin);


  // compare the buttonState to its previous state
  if (button1State != lastButton1State) {
    // if the state has changed, increment the counter
    if (button1State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 1;
      digitalWrite(Green1LED, HIGH);
      delay(200);                                  //Leave LED on for 50ms and avoid bouncing
      digitalWrite(Green1LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }
  // save the current state as the last state, for next time through the loop

  // compare the buttonState to its previous state
  if (button2State != lastButton2State) {
    // if the state has changed, increment the counter
    if (button2State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 2;
      digitalWrite(Blue1LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Blue1LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }

  if (button3State != lastButton3State) {
    // if the state has changed, increment the counter
    if (button3State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 3;
      digitalWrite(Red1LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Red1LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }

  if (button4State != lastButton4State) {
    // if the state has changed, increment the counter
    if (button4State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 4;
      digitalWrite(Green2LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Green2LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }

  if (button5State != lastButton5State) {
    // if the state has changed, increment the counter
    if (button5State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 5;
      digitalWrite(Blue2LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Blue2LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }
  if (button6State != lastButton6State) {
    // if the state has changed, increment the counter
    if (button6State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 6;
      digitalWrite(Red2LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Red2LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }  if (button7State != lastButton7State) {
    // if the state has changed, increment the counter
    if (button7State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 7;
      digitalWrite(Green3LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Green3LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }  if (button8State != lastButton8State) {
    // if the state has changed, increment the counter
    if (button8State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 8;
      digitalWrite(Blue3LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Blue3LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }  if (button9State != lastButton9State) {
    // if the state has changed, increment the counter
    if (button9State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 9;
      digitalWrite(Red3LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Red3LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }  if (button10State != lastButton10State) {
    // if the state has changed, increment the counter
    if (button10State == LOW) {
      // if the current state is LOW then the button was pressed:
      testvalue[buttonPushCounter] = 10;
      digitalWrite(Blue2LED, HIGH);
      delay(200);                                  //Leave LED on to avoid bouncing
      digitalWrite(Blue2LED, LOW);
      delay(50);

      buttonPushCounter = ++buttonPushCounter;

    }
  }


  if (buttonPushCounter == 10) {
    buttonPushCounter = 0;
    for (int ii = 0; ii <= 9; ii++) {
      if (testvalue[ii] == codevalue[ii]) {
        testcorrect = testcorrect + 1;
        if (testcorrect == 10) {
          testcorrect = 0;
          for (int ii = 1; ii < 10; ii++) {
            digitalWrite(Green1LED, HIGH);
            delay(50);
            digitalWrite(Green1LED, LOW);
            delay(50);
            digitalWrite(Blue1LED, HIGH);
            delay(50);
            digitalWrite(Blue1LED, LOW);
            delay(50);
            digitalWrite(Red1LED, HIGH);
            delay(50);
            digitalWrite(Red1LED, LOW);
            delay(50);
            digitalWrite(Green2LED, HIGH);
            delay(50);
            digitalWrite(Green2LED, LOW);
            delay(50);
            digitalWrite(Blue2LED, HIGH);
            delay(50);
            digitalWrite(Blue2LED, LOW);
            delay(50);
            digitalWrite(Red2LED, HIGH);
            delay(50);
            digitalWrite(Red2LED, LOW);
            delay(50);
            digitalWrite(Green3LED, HIGH);
            delay(50);
            digitalWrite(Green3LED, LOW);
            delay(50);
            digitalWrite(Blue3LED, HIGH);
            delay(50);
            digitalWrite(Blue3LED, LOW);
            delay(50);
            lockservo.write(unlocked);
          }

        }
      }
      else if (testvalue[ii] != codevalue[ii]) {
        testcorrect = 0;
        lockservo.write(locked);
        digitalWrite(Red1LED, HIGH);
        delay(500);
        digitalWrite(Red1LED, LOW);
        delay(50);
        digitalWrite(Red2LED, HIGH);
        delay(500);
        digitalWrite(Red2LED, LOW);
        delay(50);
        digitalWrite(Red1LED, HIGH);
        delay(500);
        digitalWrite(Red1LED, LOW);
        delay(50);
        digitalWrite(Red2LED, HIGH);
        delay(500);
        digitalWrite(Red2LED, LOW);
        delay(50);
        digitalWrite(Red3LED, HIGH);
        delay(500);
        digitalWrite(Red3LED, LOW);
        delay(50);
        delay(3000);
        break;
      }


    }

  }
}
