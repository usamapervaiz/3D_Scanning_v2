//Copyright 2016, Tajwar Abrar Aleef, All rights reserved.
//tajwar.aleef@gmail.com
int datain = 0;   
const int MotorOut = 13;
const int LedRed = 12;
const int LedGreen = 11;  
const int MotorOn = 2;  
const int MotorReset = 3;  
const int Reset1=10;
const int Reset2=9;
const int Low=8;
int ResetStage = LOW;


void setup() 
{

    pinMode(Reset1,INPUT);
    pinMode(Reset2,OUTPUT);
    pinMode(MotorOn, OUTPUT);
    pinMode(MotorReset, OUTPUT);
    pinMode(MotorOut, OUTPUT);
    pinMode(LedRed, OUTPUT);
    pinMode(LedGreen, OUTPUT);   
    pinMode(Low,OUTPUT);
    
    Serial.begin(9600);    
    
}

void loop() 
{       ResetStage = digitalRead(Reset1);
        digitalWrite(Low,LOW);
        digitalWrite(Reset2,HIGH);
        digitalWrite(MotorOut,HIGH);
        
        if(ResetStage==LOW)
        { 
        if (Serial.available() > 0) 
        {
          
                  datain = Serial.read();
                      if(datain==1)
                      {
                      
                        digitalWrite(MotorOn, HIGH);
                        digitalWrite(LedRed, LOW);   
                        digitalWrite(LedGreen, HIGH);   
                        delay(200);
                        
                      }
                      
                      if(datain==0)
                      {
                      
                        digitalWrite(MotorOn, LOW);   
                        digitalWrite(LedGreen, LOW);   
                        digitalWrite(LedRed, HIGH);
                        delay(200);  
                         
                      }

                       if(datain==2)
                      {
                      
                        digitalWrite(MotorOn, LOW);
                        digitalWrite(LedRed, LOW);   
                        digitalWrite(LedGreen, LOW);  
                        digitalWrite(MotorReset, LOW); 
                        delay(200);
                        
                      }
                      
         }}
         else 
         {digitalWrite(MotorOn,LOW);

          digitalWrite(MotorReset,HIGH);
          delay(200);
          digitalWrite(MotorReset,LOW);
          
          }

         
}
