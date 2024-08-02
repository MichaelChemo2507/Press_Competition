#define PIN_LED_R D1
#define PIN_LED_G D2
#define PIN_LED_B D3

#define NEW_RECORD 20
#define FAILURE 30
#define REDY_TO_PLAY 40

int playerRollStatus = REDY_TO_PLAY;
void LED_setup(){
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
  Update_status();
}
void LED_loop(){
    
}
void Update_status(){
  switch (playerRollStatus)
  {
  case NEW_RECORD:
    LED_On(0,255,255);
    break;
  
  case FAILURE:
    LED_On(255,191,0);
    break;
  
  case REDY_TO_PLAY:
    LED_Off();
    break;
  
  }
}
void LED_On(int Red, int Green, int Blue) {
  analogWrite(PIN_LED_R, Red);
  analogWrite(PIN_LED_G, Green);
  analogWrite(PIN_LED_B, Blue);
}
void LED_Off() {
  analogWrite(PIN_LED_R, 0);
  analogWrite(PIN_LED_G, 0);
  analogWrite(PIN_LED_B, 0);
}