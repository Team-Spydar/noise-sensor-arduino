// variables
 #define noise_sensor 16
int BUZZER  = 7;
int discussion_sounds;
int noisy_sounds;

// setup
void setup(){
    pinMode (noise_sensor, INPUT);
    pinMode (BUZZER, OUTPUT);
    Serial.begin(9600);
}


void loop(){

    discussion_sounds= analogRead(noisy_sounds);
if(discussion_sounds>300);
digitalWrite(BUZZER, HIGH);
delay(1000);
} else{
digitalWrite(BUZZER,LOW);
delay(1000);
}

