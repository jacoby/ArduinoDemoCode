/*
 ========= ========= ========= ========= ========= ========= 
 sine blink
 ========= ========= ========= ========= ========= ========= 
*/

int led = 13 ;
float num = 0 ;
float max = 1000 ;

void setup() {
  Serial.begin(9600);
  pinMode( led , OUTPUT ) ;
  }

void loop () {
  num = num + 0.001 ;
  int sine = 5 + int( 490 * ( 1 + sin( num ) ) ) ;
  int enis = max - sine ;
  digitalWrite( led , HIGH ) ;
  delayMicroseconds( sine ) ;
  digitalWrite( led , LOW ) ;
  delayMicroseconds( enis ) ;
  Serial.println( sine ) ;
  }

