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
// loop

// functions