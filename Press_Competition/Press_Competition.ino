
#define DISPLAY_MODE D2
bool isDispalyMode;
void setup(){
    Serial.begin(9600);
    pinMode(DISPLAY_MODE, INPUT_PULLUP);
    isDispalyMode = (digitalRead(DISPLAY_MODE) == HIGH) ? true : false;
    if(isDispalyMode){
    }else{
    }
        BTN_setup();
}
void loop(){
    if(isDispalyMode){

    }
    else{
    }
        BTN_loop();
}