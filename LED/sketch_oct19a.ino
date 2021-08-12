int data;
void setup() {
Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(A1,OUTPUT);
}

void loop() {
if(Serial.available()){
    data = Serial.read();
    if(data == 'A'){//cara
      digitalWrite(13,HIGH);
    }else{
      digitalWrite(13,LOW);
    }
    
    if(data=='B'){//ojo
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
    }
    else {
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
    }
  
    if(data == 'D'){//nariz
      digitalWrite(10,HIGH);
    }else{
      digitalWrite(10,LOW);
    }
    if(data == 'E'){//oreja
      digitalWrite(9,HIGH);
    }else{
      digitalWrite(9,LOW);
    }
    if(data == 'F'){//cuello
      digitalWrite(8,HIGH);
    }else{
      digitalWrite(8,LOW);
    }
    if(data == 'G'){//pecho
      digitalWrite(7,HIGH);
    }else{
      digitalWrite(7,LOW);
    }
    if(data == 'H'){//brazo
      digitalWrite(6,HIGH);
    }else{
      digitalWrite(6,LOW);
    }
    if(data == 'I'){//mano
      digitalWrite(5,HIGH);
    }else{
      digitalWrite(5,LOW);
    }
    if(data == 'J'){//codo
      digitalWrite(4,HIGH);
    }else{
      digitalWrite(4,LOW);
    }
    if(data == 'K'){//Pierna
      digitalWrite(3,HIGH);
    }else{
      digitalWrite(3,LOW);
    }if(data == 'L'){//rodilla
      digitalWrite(2,HIGH);
    }else{
      digitalWrite(2,LOW);
    }if(data == 'M'){//pie
      digitalWrite(A1,HIGH);
    }else{
      digitalWrite(A1,LOW);
    }
  }
}
