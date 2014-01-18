/*
  ========= ========= ========= ========= ========= ========= 
  switch
  ========= ========= ========= ========= ========= ========= 
  */

int incomingByte = 0 ;
int led = 13 ;
int on = 0 ;
int off = 1000 ;
float max = 1000 ;

void setup() {
  Serial.begin(9600);
  pinMode( led , OUTPUT ) ;
  Serial.println( "Setting LED Brightness via Serial Link" ) ;
  }

void loop () {
  if ( Serial.available() > 0 ) {
    incomingByte = Serial.read();
    if ( incomingByte > 47 && incomingByte < 58 ) {
      on = map( incomingByte , 48 , 57 , 1 , 990 ) ;
      off = max - on ;
      Serial.println( on ) ;
      Serial.println( off ) ;
      Serial.println( "---" ) ;
      }
    }
  digitalWrite( led , HIGH ) ;
  delayMicroseconds( on ) ;
  digitalWrite( led , LOW ) ;
  delayMicroseconds( off ) ;
  }

