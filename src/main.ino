int pin[7] = {14, 15, 16, 17, 18, 19, 2};
int fre[7] = {262, 294, 330, 349, 392, 440, 494};
int buzz = 3;

void setup(){
    for(int i = 0; i < 7; i ++){
        pinMode(pin[i], INPUT); 
    }
    pinMode(buzz, OUTPUT);
}

void loop(){
    while(digitalRead(pin[0]) == 1){
      tone(buzz, fre[0]);
    }
    while(digitalRead(pin[1]) == 1){
      tone(buzz, fre[1]);
    }
    while(digitalRead(pin[2]) == 1){
      tone(buzz, fre[2]);
    }
    while(digitalRead(pin[3]) == 1){
      tone(buzz, fre[3]);
    }
    while(digitalRead(pin[4]) == 1){
      tone(buzz, fre[4]);
    }
    while(digitalRead(pin[5]) == 1){
      tone(buzz, fre[5]);
    }
    while(digitalRead(pin[6]) == 1){
      tone(buzz, fre[6]);
    }
    noTone(buzz);
}
