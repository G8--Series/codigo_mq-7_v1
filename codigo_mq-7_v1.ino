// to the pins used:
const int triggerPin = 7;
const int sensorPin = 5;
int val = 0;
int cont = 0;
int avmonoxido;
int monr;
int real;
long rt;
long media;

void setup() {
  pinMode(triggerPin, OUTPUT); 
  Serial.begin( 9600 );
}

void loop() {
  // 60s high voltage 5.0v
 // Serial.println( "Heating Sensor" );
  //analogWrite(triggerPin, 255);  // triger ping y volataje 255 = 5v
  //delay(60000);
  // 90s low voltage 1.4v
  //analogWrite(triggerPin, 67);// triger ping y volataje 67 = 1.4v
  val = analogRead( sensorPin );  
  
  if (cont < 10)//for ( cont = 0; cont < 1; cont++ )
  {
    
    //Serial.print("Cantidad de monoxido: ");
    //Serial.println("Cargando");
    //Serial.println(val);
    delay(10);
    real +=(val);    
    cont++;
    }
  else{
  Serial.println("Cantidad de monoxido: ");
  media = real/cont;
  Serial.println(media);
  media=0;
  val=0;
  real=0;
  cont=0;
  }   
  
}
