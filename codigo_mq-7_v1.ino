// to the pins used:
const int triggerPin = 7;
const int sensorPin = 5;
int val = 0;
int cont = 0;
int cont2 = 0;
int MEDICION[50]={};
int MM[50]={};
int contMM=0;
int dEM=0;
int eM;


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
  
  for ( cont = 0; cont < 10; cont++ )
  {
    
    Serial.print("Cantidad de monoxido: ");
    Serial.println(val);
    delay(1000);
    MM [cont,val];
  }
  
  while(MM[contMM>0]){
    dEM=dEM+MM[contMM];
    contMM++;
    }
    eM=0;
    dEM=(dEM/contMM);
    eM=dEM+eM;
    contMM=0;
    dEM=0; 
}
