

int ID3E1     = 28;        // SENSOR E1 - A3
int ID2E1     = 26;        // SENSOR E1 - A2
int ID1E1     = 24;        // SENSOR E1 - A1
int ID0E1     = 22;        // SENSOR E1 - A0
int INPLACEE1 = 30;        // DETECCIÓN PALET E1 - INPLACE
int PISTONE1      = 42;  // ACTUADOR PALETS E1
int BALIZAVERDEE1 = 44;  // BALIZA DE SENALIZACION VERDE E1
int BALIZAROJAE1  = 46;  // BALIZA DE SENALIZACION ROJA  E1

int ID3E2     = 29;        // SENSOR E2
int ID2E2     = 27;        // SENSOR E2
int ID1E2     = 25;        // SENSOR E2
int ID0E2     = 23;        // SENSOR E2
int INPLACEE2 = 31;        // DETECCIÓN PALET E2
int PISTONE2      = 48;  // ACTUADOR PALETS E2
int BALIZAVERDEE2 = 50;  // BALIZA DE SENALIZACION VERDE E2
int BALIZAROJAE2  = 52;  // BALIZA DE SENALIZACION ROJA  E2

int ID3E3     = 38;        // SENSOR E3
int ID2E3     = 36;        // SENSOR E3
int ID1E3     = 34;        // SENSOR E3
int ID0E3     = 32;        // SENSOR E3
int INPLACEE3 = 40;        // DETECCIÓN PALET E3
int PISTONE3      = 33;  // ACTUADOR PALETS E3
int BALIZAVERDEE3 = 35;  // BALIZA DE SENALIZACION VERDE E3
int BALIZAROJAE3  = 37;  // BALIZA DE SENALIZACION ROJA  E3

int ID3E4     = A11;        // SENSOR E4
int ID2E4     = A12;        // SENSOR E4
int ID1E4     = A13;        // SENSOR E4
int ID0E4     = A14;        // SENSOR E4
int INPLACEE4 = A15;        // DETECCIÓN PALET E4
int PISTONE4      = 39;  // ACTUADOR PALETS E4
int BALIZAVERDEE4 = 41;  // BALIZA DE SENALIZACION VERDE E4
int BALIZAROJAE4  = 43;  // BALIZA DE SENALIZACION ROJA  E4

int ID3E5     = A6;        // SENSOR E5
int ID2E5     = A7;        // SENSOR E5
int ID1E5     = A8;        // SENSOR E5
int ID0E5     = A9;        // SENSOR E5
int INPLACEE5 = A10;        // DETECCIÓN PALET E5
int PISTONE5      = 45;  // ACTUADOR PALETS E5
int BALIZAVERDEE5 = 47;  // BALIZA DE SENALIZACION VERDE E5
int BALIZAROJAE5  = 49;  // BALIZA DE SENALIZACION ROJA  E5

int ID3E6     = A1;        // SENSOR E6
int ID2E6     = A2;        // SENSOR E6
int ID1E6     = A3;        // SENSOR E6
int ID0E6     = A4;        // SENSOR E6
int INPLACEE6 = A5;        // DETECCIÓN PALET E6
int PISTONE6      = 4;  // ACTUADOR PALETS E6
int BALIZAVERDEE6 = 3;  // BALIZA DE SENALIZACION VERDE E6
int BALIZAROJAE6  = 2;  // BALIZA DE SENALIZACION ROJA  E6


void setup() {
 
  pinMode(22,INPUT);    //ID0-A0  E1
  pinMode(24,INPUT);    //ID1-A1  E1
  pinMode(26,INPUT);    //ID2-A2  E1
  pinMode(28,INPUT);    //ID3-A3  E1
  pinMode(30,INPUT);    //INPLACE E1
  pinMode(42,OUTPUT);   //ACTUADOR PALETS E1
  pinMode(44,OUTPUT);   //BALIZAS DE CONTROL VERDE E1
  pinMode(46,OUTPUT);   //BALIZAS DE CONTROL ROJA  E1

  pinMode(23,INPUT);    //ID0-A0  E2
  pinMode(25,INPUT);    //ID1-A1  E2
  pinMode(27,INPUT);    //ID2-A2  E2
  pinMode(29,INPUT);    //ID3-A3  E2
  pinMode(31,INPUT);    //INPLACE E2
  pinMode(48,OUTPUT);   //ACTUADOR PALETS E2
  pinMode(50,OUTPUT);   //BALIZAS DE CONTROL VERDE E2
  pinMode(52,OUTPUT);   //BALIZAS DE CONTROL ROJA  E2

  pinMode(32,INPUT);    //ID0-A0  E3
  pinMode(34,INPUT);    //ID1-A1  E3
  pinMode(36,INPUT);    //ID2-A2  E3
  pinMode(38,INPUT);    //ID3-A3  E3
  pinMode(40,INPUT);    //INPLACE E3
  pinMode(33,OUTPUT);   //ACTUADOR PALETS E3
  pinMode(35,OUTPUT);   //BALIZAS DE CONTROL VERDE E3
  pinMode(37,OUTPUT);   //BALIZAS DE CONTROL ROJA  E3


  pinMode(A14,INPUT);    //ID0-A0  E4
  pinMode(A13,INPUT);    //ID1-A1  E4
  pinMode(A12,INPUT);    //ID2-A2  E4
  pinMode(A11,INPUT);    //ID3-A3  E4
  pinMode(A15,INPUT);    //INPLACE E4
  pinMode(39,OUTPUT);   //ACTUADOR PALETS E4
  pinMode(41,OUTPUT);   //BALIZAS DE CONTROL VERDE E4
  pinMode(43,OUTPUT);   //BALIZAS DE CONTROL ROJA  E4

  pinMode(A9,INPUT);    //ID0-A0  E5
  pinMode(A8,INPUT);    //ID1-A1  E5
  pinMode(A7,INPUT);    //ID2-A2  E5
  pinMode(A6,INPUT);    //ID3-A3  E5
  pinMode(A10,INPUT);    //INPLACE E5
  pinMode(45,OUTPUT);   //ACTUADOR PALETS E5
  pinMode(47,OUTPUT);   //BALIZAS DE CONTROL VERDE E5
  pinMode(49,OUTPUT);   //BALIZAS DE CONTROL ROJA  E5

  pinMode(A4,INPUT);    //ID0-A0  E6
  pinMode(A3,INPUT);    //ID1-A1  E6
  pinMode(A2,INPUT);    //ID2-A2  E6
  pinMode(A1,INPUT);    //ID3-A3  E6
  pinMode(A5,INPUT);    //INPLACE E6
  pinMode(4,OUTPUT);   //ACTUADOR PALETS E6
  pinMode(3,OUTPUT);   //BALIZAS DE CONTROL VERDE E6
  pinMode(2,OUTPUT);   //BALIZAS DE CONTROL ROJA  E6

  
  Serial.begin(9600);
}

void loop() {
///////////////////////////////  ESTACION 1  ///////////////////////////////
///////////////////////////////  INFORMACION DE LOS SENSORES, ACTUADORES Y BALIZAS  ///////////////////////////////

  int PALETE1 = 0; 
  int PALETE2 = 0; 
  int PALETE3 = 0; 
  int PALETE4 = 0; 
  int PALETE5 = 0; 
  int PALETE6 = 0; 
            
  if (digitalRead(INPLACEE1)==LOW)
  {
    digitalWrite(BALIZAVERDEE1,HIGH);
    digitalWrite(PISTONE1,LOW);
    digitalWrite(BALIZAROJAE1,LOW); 
    delay (500);
  } else
    {
      digitalWrite(BALIZAVERDEE1,LOW);
      digitalWrite(BALIZAROJAE1,HIGH);
      digitalWrite(PISTONE1,HIGH);
      Serial.println("PRIMERA ESTACION");
      delay(500);
    
      if (digitalRead(ID0E1)==HIGH){ PALETE1 = 1;}
      if (digitalRead(ID1E1)==HIGH){ PALETE1= PALETE1 + 2;}
      if (digitalRead(ID2E1)==HIGH){ PALETE1= PALETE1 + 4;}
      if (digitalRead(ID3E1)==HIGH){ PALETE1= PALETE1 + 8;}
      Serial.print("PALET ");
      Serial.println(PALETE1,DEC);
      delay (500);
    }
    
   if (digitalRead(INPLACEE2)==LOW)
  {
    digitalWrite(BALIZAVERDEE2,HIGH);
    digitalWrite(PISTONE2,LOW);
    digitalWrite(BALIZAROJAE2,LOW); 
    delay (500);
  } else
    {
      digitalWrite(BALIZAVERDEE2,LOW);
      digitalWrite(BALIZAROJAE2,HIGH);
      digitalWrite(PISTONE2,HIGH);
      Serial.println("SEGUNDA ESTACION");
      delay(500);
    
      if (digitalRead(ID0E2)==HIGH){ PALETE2 = 1;}
      if (digitalRead(ID1E2)==HIGH){ PALETE2= PALETE2 + 2;}
      if (digitalRead(ID2E2)==HIGH){ PALETE2= PALETE2 + 4;}
      if (digitalRead(ID3E2)==HIGH){ PALETE2= PALETE2 + 8;}
      Serial.print("PALET ");
      Serial.println(PALETE2,DEC);
      delay (500);
    }
    
   if (digitalRead(INPLACEE3)==LOW)
  {
    digitalWrite(BALIZAVERDEE3,HIGH);
    digitalWrite(PISTONE3,LOW);
    digitalWrite(BALIZAROJAE3,LOW); 
    delay (500);
  } else
    {
      digitalWrite(BALIZAVERDEE3,LOW);
      digitalWrite(BALIZAROJAE3,HIGH);
      digitalWrite(PISTONE3,HIGH);
      Serial.println("TERCERA ESTACION");
      delay(500);
    
      if (digitalRead(ID0E3)==HIGH){ PALETE3 = 1;}
      if (digitalRead(ID1E3)==HIGH){ PALETE3= PALETE3 + 2;}
      if (digitalRead(ID2E3)==HIGH){ PALETE3= PALETE3 + 4;}
      if (digitalRead(ID3E3)==HIGH){ PALETE3= PALETE3 + 8;}
      Serial.print("PALET ");
      Serial.println(PALETE3,DEC);
      delay (500);
    }

   if (digitalRead(INPLACEE4)==LOW)
  {
    digitalWrite(BALIZAVERDEE4,HIGH);
    digitalWrite(PISTONE4,LOW);
    digitalWrite(BALIZAROJAE4,LOW); 
    delay (500);
  } else
    {
      digitalWrite(BALIZAVERDEE4,LOW);
      digitalWrite(BALIZAROJAE4,HIGH);
      digitalWrite(PISTONE4,HIGH);
      Serial.println("CUARTA ESTACION");
      delay(500);
    
      if (digitalRead(ID0E4)==HIGH){ PALETE4 = 1;}
      if (digitalRead(ID1E4)==HIGH){ PALETE4= PALETE4 + 2;}
      if (digitalRead(ID2E4)==HIGH){ PALETE4= PALETE4 + 4;}
      if (digitalRead(ID3E4)==HIGH){ PALETE4= PALETE4 + 8;}
      Serial.print("PALET ");
      Serial.println(PALETE4,DEC);
      delay (500);
    }

   if (digitalRead(INPLACEE5)==LOW)
  {
    digitalWrite(BALIZAVERDEE5,HIGH);
    digitalWrite(PISTONE5,LOW);
    digitalWrite(BALIZAROJAE5,LOW); 
    delay (500);
  } else
    {
      digitalWrite(BALIZAVERDEE5,LOW);
      digitalWrite(BALIZAROJAE5,HIGH);
      digitalWrite(PISTONE5,HIGH);
      Serial.println("QUINTA ESTACION");
      delay(500);
    
      if (digitalRead(ID0E5)==HIGH){ PALETE5 = 1;}
      if (digitalRead(ID1E5)==HIGH){ PALETE5= PALETE5 + 2;}
      if (digitalRead(ID2E5)==HIGH){ PALETE5= PALETE5 + 4;}
      if (digitalRead(ID3E5)==HIGH){ PALETE5= PALETE5 + 8;}
      Serial.print("PALET ");
      Serial.println(PALETE5,DEC);
      delay (500);
    }

   if (digitalRead(INPLACEE6)==LOW)
  {
    digitalWrite(BALIZAVERDEE6,HIGH);
    digitalWrite(PISTONE6,LOW);
    digitalWrite(BALIZAROJAE6,LOW); 
    delay (500);
  } else
    {
      digitalWrite(BALIZAVERDEE6,LOW);
      digitalWrite(BALIZAROJAE6,HIGH);
      digitalWrite(PISTONE6,HIGH);
      Serial.println("SEXTA ESTACION");
      delay(500);
    
      if (digitalRead(ID0E6)==HIGH){ PALETE6 = 1;}
      if (digitalRead(ID1E6)==HIGH){ PALETE6= PALETE6 + 2;}
      if (digitalRead(ID2E6)==HIGH){ PALETE6= PALETE6 + 4;}
      if (digitalRead(ID3E6)==HIGH){ PALETE6= PALETE6 + 8;}
      Serial.print("PALET ");
      Serial.println(PALETE6,DEC);
      delay (500);
    }

///////////////////////////////  INFORMACION DE LOS SENSORES, ACTUADORES Y BALIZAS  ///////////////////////////////
///////////////////////////////  LIBERACION ESTACIONES  ///////////////////////////////   
// ESTACION 1:   
   if(Serial.available()) 
    {
      String dato1=Serial.readString();
      dato1.trim();
      if (dato1== "LIBERARE1" && digitalRead(PISTONE1)== HIGH)
       {
         digitalWrite(PISTONE1,LOW);
         digitalWrite(BALIZAROJAE1,LOW);
         digitalWrite(BALIZAVERDEE1,HIGH);
         PALETE1= 0;
         Serial.println("ESTACION 1 SIN PALET");
         Serial.print("PALET ");
         Serial.println(PALETE1,DEC);
         delay(2000);
         Serial.println("PALET VIAJANDO A ESTACION 2");
         delay(500);
         
       }else {
        if (dato1== "LIBERARE1" && digitalRead(PISTONE1)== LOW)
       {
        Serial.println("ESTACION 1 DESOCUPADA");
        digitalWrite(BALIZAVERDEE1,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE1,HIGH);
        delay (300);
        digitalWrite(BALIZAVERDEE1,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE1,HIGH);
        delay(500); }}
// ESTACION 2:   
       if (dato1== "LIBERARE2" && digitalRead(PISTONE2)== HIGH)
       {
         digitalWrite(PISTONE2,LOW);
         digitalWrite(BALIZAROJAE2,LOW);
         digitalWrite(BALIZAVERDEE2,HIGH);
         PALETE2= 0;
         Serial.println("ESTACION 2 SIN PALET");
         Serial.print("PALET ");
         Serial.println(PALETE2,DEC);
         delay(2000);
         Serial.println("PALET VIAJANDO A ESTACION 2");
         delay(500);
       }else {
        if (dato1== "LIBERARE2" && digitalRead(PISTONE2)== LOW)
       {
        Serial.println("ESTACION 2 DESOCUPADA");
        digitalWrite(BALIZAVERDEE2,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE2,HIGH);
        delay (300);
        digitalWrite(BALIZAVERDEE2,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE2,HIGH);
        delay(500); }}
// ESTACION 3:   
       if (dato1== "LIBERARE3" && digitalRead(PISTONE3)== HIGH)
       {
         digitalWrite(PISTONE3,LOW);
         digitalWrite(BALIZAROJAE3,LOW);
         digitalWrite(BALIZAVERDEE3,HIGH);
         PALETE3= 0;
         Serial.println("ESTACION 3 SIN PALET");
         Serial.print("PALET ");
         Serial.println(PALETE3,DEC);
         delay(2000);
         Serial.println("PALET VIAJANDO A ESTACION 2");
         delay(500);
       }else {
        if (dato1== "LIBERARE3" && digitalRead(PISTONE3)== LOW)
       {
        Serial.println("ESTACION 3 DESOCUPADA");
        digitalWrite(BALIZAVERDEE3,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE3,HIGH);
        delay (300);
        digitalWrite(BALIZAVERDEE3,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE3,HIGH);
        delay(500); }}
// ESTACION 4:   
       if (dato1== "LIBERARE4" && digitalRead(PISTONE4)== HIGH)
       {
         digitalWrite(PISTONE4,LOW);
         digitalWrite(BALIZAROJAE4,LOW);
         digitalWrite(BALIZAVERDEE4,HIGH);
         PALETE4= 0;
         Serial.println("ESTACION 4 SIN PALET");
         Serial.print("PALET ");
         Serial.println(PALETE4,DEC);
         delay(2000);
         Serial.println("PALET VIAJANDO A ESTACION 2");
         delay(500);
       }else {
        if (dato1== "LIBERARE4" && digitalRead(PISTONE4)== LOW)
       {
        Serial.println("ESTACION 4 DESOCUPADA");
        digitalWrite(BALIZAVERDEE4,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE4,HIGH);
        delay (300);
        digitalWrite(BALIZAVERDEE4,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE4,HIGH);
        delay(500); }}
// ESTACION 5:   
       if (dato1== "LIBERARE5" && digitalRead(PISTONE5)== HIGH)
       {
         digitalWrite(PISTONE5,LOW);
         digitalWrite(BALIZAROJAE5,LOW);
         digitalWrite(BALIZAVERDEE5,HIGH);
         PALETE5= 0;
         Serial.println("ESTACION 5 SIN PALET");
         Serial.print("PALET ");
         Serial.println(PALETE5,DEC);
         delay(2000);
         Serial.println("PALET VIAJANDO A ESTACION 2");
         delay(500);
       }else {
        if (dato1== "LIBERARE5" && digitalRead(PISTONE5)== LOW)
       {
        Serial.println("ESTACION 5 DESOCUPADA");
        digitalWrite(BALIZAVERDEE5,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE5,HIGH);
        delay (300);
        digitalWrite(BALIZAVERDEE5,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE5,HIGH);
        delay(500); }}
// ESTACION 6:   
       if (dato1== "LIBERARE6" && digitalRead(PISTONE6)== HIGH)
       {
         digitalWrite(PISTONE6,LOW);
         digitalWrite(BALIZAROJAE6,LOW);
         digitalWrite(BALIZAVERDEE6,HIGH);
         PALETE6= 0;
         Serial.println("ESTACION 6 SIN PALET");
         Serial.print("PALET ");
         Serial.println(PALETE6,DEC);
         delay(2000);
         Serial.println("PALET VIAJANDO A ESTACION 2");
         delay(500);
       }else {
        if (dato1== "LIBERARE6" && digitalRead(PISTONE6)== LOW)
       {
        Serial.println("ESTACION 6 DESOCUPADA");
        digitalWrite(BALIZAVERDEE6,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE6,HIGH);
        delay (300);
        digitalWrite(BALIZAVERDEE6,LOW);
        delay (300);
        digitalWrite(BALIZAVERDEE6,HIGH);
        delay(500); }}
        
///////////////////////////////  LIBERACION ESTACION 1  ///////////////////////////////  
///////////////////////////////  LIBERACION ESTACION 1 AUTOMATICO  /////////////////////////////// 

// ESTACION 1:    
    if (dato1== "UNOE1" && digitalRead(PISTONE1)== HIGH)
     {
         if ( digitalRead(ID3E1)== LOW && digitalRead(ID2E1)== LOW 
         && digitalRead(ID1E1)== LOW && digitalRead(ID0E1)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("PALET ");
               Serial.println(PALETE1, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE1)==HIGH)
               {
                  digitalWrite(PISTONE1,LOW);
                  digitalWrite(BALIZAROJAE1,LOW);
                  digitalWrite(BALIZAVERDEE1,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 1");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE1, DEC);
                  delay(1000);
                  PALETE1= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 2");
                  delay(500);
               }
              } 
       }

       if (dato1== "DOSE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3E1)== LOW && digitalRead(ID2E1)== LOW && digitalRead(ID1E1)== HIGH &&
         digitalRead(ID0E1)== LOW )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("PALET ");
               Serial.println(PALETE1, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE1)==HIGH)
               {
                  digitalWrite(PISTONE1,LOW);
                  digitalWrite(BALIZAROJAE1,LOW);
                  digitalWrite(BALIZAVERDEE1,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 1");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 2");
                  delay(500);
               }
              } 
       }

       if (dato1== "TRESE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3E1)== LOW && digitalRead(ID2E1)== LOW && digitalRead(ID1E1)== HIGH &&
         digitalRead(ID0E1)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("PALET ");
               Serial.println(PALETE1, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE1)==HIGH)
               {
                  digitalWrite(PISTONE1,LOW);
                  digitalWrite(BALIZAROJAE1,LOW);
                  digitalWrite(BALIZAVERDEE1,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 1");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 2");
                  delay(500);
               }
              } 
       }

       if (dato1== "CUATROE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3E1)== LOW && digitalRead(ID2E1)== HIGH && digitalRead(ID1E1)== LOW &&
         digitalRead(ID0E1)== LOW )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("PALET ");
               Serial.println(PALETE1, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE1)==HIGH)
               {
                  digitalWrite(PISTONE1,LOW);
                  digitalWrite(BALIZAROJAE1,LOW);
                  digitalWrite(BALIZAVERDEE1,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 1");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 2");
                  delay(500);
               }
              } 
       }

       if (dato1== "CINCOE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3E1)== LOW && digitalRead(ID2E1)== HIGH && digitalRead(ID1E1)== LOW &&
         digitalRead(ID0E1)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("PALET ");
               Serial.println(PALETE1, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE1)==HIGH)
               {
                  digitalWrite(PISTONE1,LOW);
                  digitalWrite(BALIZAROJAE1,LOW);
                  digitalWrite(BALIZAVERDEE1,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 1");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 2");
                  delay(500);
               }
              } 
       }

       if (dato1== "SEISE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3E1)== LOW && digitalRead(ID2E1)== HIGH && digitalRead(ID1E1)== HIGH &&
         digitalRead(ID0E1)== LOW )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("PALET ");
               Serial.println(PALETE1, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE1)==HIGH)
               {
                  digitalWrite(PISTONE1,LOW);
                  digitalWrite(BALIZAROJAE1,LOW);
                  digitalWrite(BALIZAVERDEE1,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 1");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 2");
                  delay(500);
               }
              } 
       }

// ESTACION 2: 
    if (dato1== "UNOE2" && digitalRead(PISTONE2)== HIGH)
     {
         if ( digitalRead(ID3E2)== LOW && digitalRead(ID2E2)== LOW && digitalRead(ID1E2)== LOW &&
         digitalRead(ID0E2)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 2");
               Serial.print("PALET ");
               Serial.println(PALETE2, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE2)==HIGH)
               {
                  digitalWrite(PISTONE2,LOW);
                  digitalWrite(BALIZAROJAE2,LOW);
                  digitalWrite(BALIZAVERDEE2,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 2");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE2, DEC);
                  delay(2000);
                  PALETE2= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 3");
                  delay(500);
               }
              } 
       }

       if (dato1== "DOSE2" && digitalRead(PISTONE2)== HIGH)
       {
         if ( digitalRead(ID3E2)== LOW && digitalRead(ID2E2)== LOW && digitalRead(ID1E2)== HIGH &&
         digitalRead(ID0E2)== LOW )
            {
               Serial.println("LLEGO A ESTACION 2");
               Serial.print("PALET ");
               Serial.println(PALETE2, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE2)==HIGH)
               {
                  digitalWrite(PISTONE2,LOW);
                  digitalWrite(BALIZAROJAE2,LOW);
                  digitalWrite(BALIZAVERDEE2,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 2");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE2, DEC);
                  delay(2000);
                  PALETE2= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 3");
                  delay(500);
               }
              } 
       }

       if (dato1== "TRESE2" && digitalRead(PISTONE2)== HIGH)
       {
         if ( digitalRead(ID3E2)== LOW && digitalRead(ID2E2)== LOW && digitalRead(ID1E2)== HIGH &&
         digitalRead(ID0E2)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 2");
               Serial.print("PALET ");
               Serial.println(PALETE2, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE2)==HIGH)
               {
                  digitalWrite(PISTONE2,LOW);
                  digitalWrite(BALIZAROJAE2,LOW);
                  digitalWrite(BALIZAVERDEE2,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 2");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE2, DEC);
                  delay(2000);
                  PALETE2= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 3");
                  delay(500);
               }
              } 
       }

       if (dato1== "CUATROE2" && digitalRead(PISTONE2)== HIGH)
       {
         if ( digitalRead(ID3E2)== LOW && digitalRead(ID2E2)== HIGH && digitalRead(ID1E2)== LOW &&
         digitalRead(ID0E2)== LOW )
            {
               Serial.println("LLEGO A ESTACION 2");
               Serial.print("PALET ");
               Serial.println(PALETE2, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE2)==HIGH)
               {
                  digitalWrite(PISTONE2,LOW);
                  digitalWrite(BALIZAROJAE2,LOW);
                  digitalWrite(BALIZAVERDEE2,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 2");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE2, DEC);
                  delay(2000);
                  PALETE2= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 3");
                  delay(500);
               }
              } 
       }

       if (dato1== "CINCOE2" && digitalRead(PISTONE2)== HIGH)
       {
         if ( digitalRead(ID3E2)== LOW && digitalRead(ID2E2)== HIGH && digitalRead(ID1E2)== LOW &&
         digitalRead(ID0E2)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 2");
               Serial.print("PALET ");
               Serial.println(PALETE2, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE2)==HIGH)
               {
                  digitalWrite(PISTONE2,LOW);
                  digitalWrite(BALIZAROJAE2,LOW);
                  digitalWrite(BALIZAVERDEE2,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 2");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE2, DEC);
                  delay(2000);
                  PALETE2= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 3");
                  delay(500);
               }
              } 
       }

       if (dato1== "SEISE2" && digitalRead(PISTONE2)== HIGH)
       {
         if ( digitalRead(ID3E2)== LOW && digitalRead(ID2E2)== HIGH && digitalRead(ID1E2)== HIGH &&
         digitalRead(ID0E2)== LOW )
            {
               Serial.println("LLEGO A ESTACION 2");
               Serial.print("PALET ");
               Serial.println(PALETE2, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE2)==HIGH)
               {
                  digitalWrite(PISTONE2,LOW);
                  digitalWrite(BALIZAROJAE2,LOW);
                  digitalWrite(BALIZAVERDEE2,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 2");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE2, DEC);
                  delay(2000);
                  PALETE2= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 3");
                  delay(500);
               }
              } 
       }

// ESTACION 3:
    if (dato1== "UNOE3" && digitalRead(PISTONE3)== HIGH)
     {
         if ( digitalRead(ID3E3)== LOW && digitalRead(ID2E3)== LOW && digitalRead(ID1E3)== LOW &&
         digitalRead(ID0E3)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 3");
               Serial.print("PALET ");
               Serial.println(PALETE3, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE3)==HIGH)
               {
                  digitalWrite(PISTONE3,LOW);
                  digitalWrite(BALIZAROJAE3,LOW);
                  digitalWrite(BALIZAVERDEE3,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 3");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE3, DEC);
                  delay(2000);
                  PALETE3= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 4");
                  delay(500);
               }
              } 
       }

       if (dato1== "DOSE3" && digitalRead(PISTONE3)== HIGH)
       {
         if ( digitalRead(ID3E3)== LOW && digitalRead(ID2E3)== LOW && digitalRead(ID1E3)== HIGH &&
         digitalRead(ID0E3)== LOW )
            {
               Serial.println("LLEGO A ESTACION 3");
               Serial.print("PALET ");
               Serial.println(PALETE3, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE3)==HIGH)
               {
                  digitalWrite(PISTONE3,LOW);
                  digitalWrite(BALIZAROJAE3,LOW);
                  digitalWrite(BALIZAVERDEE3,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 3");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE3, DEC);
                  delay(2000);
                  PALETE3= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 4");
                  delay(500);
               }
              } 
       }

       if (dato1== "TRESE3" && digitalRead(PISTONE3)== HIGH)
       {
         if ( digitalRead(ID3E3)== LOW && digitalRead(ID2E3)== LOW && digitalRead(ID1E3)== HIGH &&
         digitalRead(ID0E3)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 3");
               Serial.print("PALET ");
               Serial.println(PALETE3, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE3)==HIGH)
               {
                  digitalWrite(PISTONE3,LOW);
                  digitalWrite(BALIZAROJAE3,LOW);
                  digitalWrite(BALIZAVERDEE3,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 3");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE3, DEC);
                  delay(2000);
                  PALETE3= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 4");
                  delay(500);
               }
              } 
       }

       if (dato1== "CUATROE3" && digitalRead(PISTONE3)== HIGH)
       {
         if ( digitalRead(ID3E3)== LOW && digitalRead(ID2E3)== HIGH && digitalRead(ID1E3)== LOW &&
         digitalRead(ID0E3)== LOW )
            {
               Serial.println("LLEGO A ESTACION 3");
               Serial.print("PALET ");
               Serial.println(PALETE3, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE3)==HIGH)
               {
                  digitalWrite(PISTONE3,LOW);
                  digitalWrite(BALIZAROJAE3,LOW);
                  digitalWrite(BALIZAVERDEE3,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 3");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE3, DEC);
                  delay(2000);
                  PALETE3= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 4");
                  delay(500);
               }
              } 
       }

       if (dato1== "CINCOE3" && digitalRead(PISTONE3)== HIGH)
       {
         if ( digitalRead(ID3E3)== LOW && digitalRead(ID2E3)== HIGH && digitalRead(ID1E3)== LOW &&
         digitalRead(ID0E3)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 3");
               Serial.print("PALET ");
               Serial.println(PALETE3, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE3)==HIGH)
               {
                  digitalWrite(PISTONE3,LOW);
                  digitalWrite(BALIZAROJAE3,LOW);
                  digitalWrite(BALIZAVERDEE3,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 3");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE3, DEC);
                  delay(2000);
                  PALETE3= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 4");
                  delay(500);
               }
              } 
       }

       if (dato1== "SEISE3" && digitalRead(PISTONE3)== HIGH)
       {
         if ( digitalRead(ID3E3)== LOW && digitalRead(ID2E3)== HIGH && digitalRead(ID1E3)== HIGH &&
         digitalRead(ID0E3)== LOW )
            {
               Serial.println("LLEGO A ESTACION 3");
               Serial.print("PALET ");
               Serial.println(PALETE3, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE3)==HIGH)
               {
                  digitalWrite(PISTONE3,LOW);
                  digitalWrite(BALIZAROJAE3,LOW);
                  digitalWrite(BALIZAVERDEE3,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 3");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE3, DEC);
                  delay(2000);
                  PALETE3= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 4");
                  delay(500);
               }
              } 
       }

//ESTACION 4:
    if (dato1== "UNOE4" && digitalRead(PISTONE4)== HIGH)
     {
         if ( digitalRead(ID3E4)== LOW && digitalRead(ID2E4)== LOW && digitalRead(ID1E4)== LOW &&
         digitalRead(ID0E4)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 4");
               Serial.print("PALET ");
               Serial.println(PALETE4, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE4)==HIGH)
               {
                  digitalWrite(PISTONE4,LOW);
                  digitalWrite(BALIZAROJAE4,LOW);
                  digitalWrite(BALIZAVERDEE4,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 4");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE4, DEC);
                  delay(2000);
                  PALETE4= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 5");
                  delay(500);
               }
              } 
       }

       if (dato1== "DOSE4" && digitalRead(PISTONE4)== HIGH)
       {
         if ( digitalRead(ID3E4)== LOW && digitalRead(ID2E4)== LOW && digitalRead(ID1E4)== HIGH &&
         digitalRead(ID0E4)== LOW )
            {
               Serial.println("LLEGO A ESTACION 4");
               Serial.print("PALET ");
               Serial.println(PALETE4, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE4)==HIGH)
               {
                  digitalWrite(PISTONE4,LOW);
                  digitalWrite(BALIZAROJAE4,LOW);
                  digitalWrite(BALIZAVERDEE4,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 4");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE4, DEC);
                  delay(2000);
                  PALETE4= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 5");
                  delay(500);
               }
              } 
       }

       if (dato1== "TRESE4" && digitalRead(PISTONE4)== HIGH)
       {
         if ( digitalRead(ID3E4)== LOW && digitalRead(ID2E4)== LOW && digitalRead(ID1E4)== HIGH &&
         digitalRead(ID0E4)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 4");
               Serial.print("PALET ");
               Serial.println(PALETE4, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE4)==HIGH)
               {
                  digitalWrite(PISTONE4,LOW);
                  digitalWrite(BALIZAROJAE4,LOW);
                  digitalWrite(BALIZAVERDEE4,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 4");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE4, DEC);
                  delay(2000);
                  PALETE4= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 5");
                  delay(500);
               }
              } 
       }

       if (dato1== "CUATROE4" && digitalRead(PISTONE4)== HIGH)
       {
         if ( digitalRead(ID3E4)== LOW && digitalRead(ID2E4)== HIGH && digitalRead(ID1E4)== LOW &&
         digitalRead(ID0E4)== LOW )
            {
               Serial.println("LLEGO A ESTACION 4");
               Serial.print("PALET ");
               Serial.println(PALETE4, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE4)==HIGH)
               {
                  digitalWrite(PISTONE4,LOW);
                  digitalWrite(BALIZAROJAE4,LOW);
                  digitalWrite(BALIZAVERDEE4,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 4");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE4, DEC);
                  delay(2000);
                  PALETE4= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 5");
                  delay(500);
               }
              } 
       }

       if (dato1== "CINCOE4" && digitalRead(PISTONE4)== HIGH)
       {
         if ( digitalRead(ID3E4)== LOW && digitalRead(ID2E4)== HIGH && digitalRead(ID1E4)== LOW &&
         digitalRead(ID0E4)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 4");
               Serial.print("PALET ");
               Serial.println(PALETE4, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE4)==HIGH)
               {
                  digitalWrite(PISTONE4,LOW);
                  digitalWrite(BALIZAROJAE4,LOW);
                  digitalWrite(BALIZAVERDEE4,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 4");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE4, DEC);
                  delay(2000);
                  PALETE4= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 5");
                  delay(500);
               }
              } 
       }

       if (dato1== "SEISE4" && digitalRead(PISTONE4)== HIGH)
       {
         if ( digitalRead(ID3E4)== LOW && digitalRead(ID2E4)== HIGH && digitalRead(ID1E4)== HIGH &&
         digitalRead(ID0E4)== LOW )
            {
               Serial.println("LLEGO A ESTACION 4");
               Serial.print("PALET ");
               Serial.println(PALETE4, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE4)==HIGH)
               {
                  digitalWrite(PISTONE4,LOW);
                  digitalWrite(BALIZAROJAE4,LOW);
                  digitalWrite(BALIZAVERDEE4,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 4");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE4, DEC);
                  delay(2000);
                  PALETE4= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 5");
                  delay(500);
               }
              } 
       }

// ESTACION 5:
    if (dato1== "UNOE5" && digitalRead(PISTONE5)== HIGH)
     {
         if ( digitalRead(ID3E5)== LOW && digitalRead(ID2E5)== LOW && digitalRead(ID1E5)== LOW &&
         digitalRead(ID0E5)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 5");
               Serial.print("PALET ");
               Serial.println(PALETE5, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE5)==HIGH)
               {
                  digitalWrite(PISTONE5,LOW);
                  digitalWrite(BALIZAROJAE5,LOW);
                  digitalWrite(BALIZAVERDEE5,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 5");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE5, DEC);
                  delay(2000);
                  PALETE5= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 6");
                  delay(500);
               }
              } 
       }

       if (dato1== "DOSE5" && digitalRead(PISTONE5)== HIGH)
       {
         if ( digitalRead(ID3E5)== LOW && digitalRead(ID2E5)== LOW && digitalRead(ID1E5)== HIGH &&
         digitalRead(ID0E5)== LOW )
            {
               Serial.println("LLEGO A ESTACION 5");
               Serial.print("PALET ");
               Serial.println(PALETE5, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE5)==HIGH)
               {
                  digitalWrite(PISTONE5,LOW);
                  digitalWrite(BALIZAROJAE5,LOW);
                  digitalWrite(BALIZAVERDEE5,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 5");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE5, DEC);
                  delay(2000);
                  PALETE5= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 6");
                  delay(500);
               }
              } 
       }

       if (dato1== "TRESE5" && digitalRead(PISTONE5)== HIGH)
       {
         if ( digitalRead(ID3E5)== LOW && digitalRead(ID2E5)== LOW && digitalRead(ID1E5)== HIGH &&
         digitalRead(ID0E5)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 5");
               Serial.print("PALET ");
               Serial.println(PALETE5, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE5)==HIGH)
               {
                  digitalWrite(PISTONE5,LOW);
                  digitalWrite(BALIZAROJAE5,LOW);
                  digitalWrite(BALIZAVERDEE5,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 5");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE5, DEC);
                  delay(2000);
                  PALETE5= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 6");
                  delay(500);
               }
              } 
       }

       if (dato1== "CUATROE5" && digitalRead(PISTONE5)== HIGH)
       {
         if ( digitalRead(ID3E5)== LOW && digitalRead(ID2E5)== HIGH && digitalRead(ID1E5)== LOW &&
         digitalRead(ID0E5)== LOW )
            {
               Serial.println("LLEGO A ESTACION 5");
               Serial.print("PALET ");
               Serial.println(PALETE5, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE5)==HIGH)
               {
                  digitalWrite(PISTONE5,LOW);
                  digitalWrite(BALIZAROJAE5,LOW);
                  digitalWrite(BALIZAVERDEE5,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 5");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE5, DEC);
                  delay(2000);
                  PALETE5= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 6");
                  delay(500);
               }
              } 
       }

       if (dato1== "CINCOE5" && digitalRead(PISTONE5)== HIGH)
       {
         if ( digitalRead(ID3E5)== LOW && digitalRead(ID2E5)== HIGH && digitalRead(ID1E5)== LOW &&
         digitalRead(ID0E5)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 5");
               Serial.print("PALET ");
               Serial.println(PALETE5, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE5)==HIGH)
               {
                  digitalWrite(PISTONE5,LOW);
                  digitalWrite(BALIZAROJAE5,LOW);
                  digitalWrite(BALIZAVERDEE5,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 5");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE5, DEC);
                  delay(2000);
                  PALETE5= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 6");
                  delay(500);
               }
              } 
       }

       if (dato1== "SEISE5" && digitalRead(PISTONE5)== HIGH)
       {
         if ( digitalRead(ID3E5)== LOW && digitalRead(ID2E5)== HIGH && digitalRead(ID1E5)== HIGH &&
         digitalRead(ID0E5)== LOW )
            {
               Serial.println("LLEGO A ESTACION 5");
               Serial.print("PALET ");
               Serial.println(PALETE5, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE5)==HIGH)
               {
                  digitalWrite(PISTONE5,LOW);
                  digitalWrite(BALIZAROJAE5,LOW);
                  digitalWrite(BALIZAVERDEE5,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 5");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE5, DEC);
                  delay(2000);
                  PALETE5= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 6");
                  delay(500);
               }
              } 
       }

//ESTACION 6:
    if (dato1== "UNOE6" && digitalRead(PISTONE6)== HIGH)
     {
         if ( digitalRead(ID3E6)== LOW && digitalRead(ID2E6)== LOW && digitalRead(ID1E6)== LOW &&
         digitalRead(ID0E6)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 6");
               Serial.print("PALET ");
               Serial.println(PALETE6, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE6)==HIGH)
               {
                  digitalWrite(PISTONE6,LOW);
                  digitalWrite(BALIZAROJAE6,LOW);
                  digitalWrite(BALIZAVERDEE6,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 6");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE6, DEC);
                  delay(2000);
                  PALETE6= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 1");
                  delay(500);
               }
              } 
       }

       if (dato1== "DOSE6" && digitalRead(PISTONE6)== HIGH)
       {
         if ( digitalRead(ID3E6)== LOW && digitalRead(ID2E6)== LOW && digitalRead(ID1E6)== HIGH &&
         digitalRead(ID0E6)== LOW )
            {
               Serial.println("LLEGO A ESTACION 6");
               Serial.print("PALET ");
               Serial.println(PALETE6, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE6)==HIGH)
               {
                  digitalWrite(PISTONE6,LOW);
                  digitalWrite(BALIZAROJAE6,LOW);
                  digitalWrite(BALIZAVERDEE6,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 6");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE6, DEC);
                  delay(2000);
                  PALETE6= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 1");
                  delay(500);
               }
              } 
       }

       if (dato1== "TRESE6" && digitalRead(PISTONE6)== HIGH)
       {
         if ( digitalRead(ID3E6)== LOW && digitalRead(ID2E6)== LOW && digitalRead(ID1E6)== HIGH &&
         digitalRead(ID0E6)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 6");
               Serial.print("PALET ");
               Serial.println(PALETE6, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE6)==HIGH)
               {
                  digitalWrite(PISTONE6,LOW);
                  digitalWrite(BALIZAROJAE6,LOW);
                  digitalWrite(BALIZAVERDEE6,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 6");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE6, DEC);
                  delay(2000);
                  PALETE6= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 1");
                  delay(500);
               }
              } 
       }

       if (dato1== "CUATROE6" && digitalRead(PISTONE6)== HIGH)
       {
         if ( digitalRead(ID3E6)== LOW && digitalRead(ID2E6)== HIGH && digitalRead(ID1E6)== LOW &&
         digitalRead(ID0E6)== LOW )
            {
               Serial.println("LLEGO A ESTACION 6");
               Serial.print("PALET ");
               Serial.println(PALETE6, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE6)==HIGH)
               {
                  digitalWrite(PISTONE6,LOW);
                  digitalWrite(BALIZAROJAE6,LOW);
                  digitalWrite(BALIZAVERDEE6,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 6");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE6, DEC);
                  delay(2000);
                  PALETE6= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 1");
                  delay(500);
               }
              } 
       }

       if (dato1== "CINCOE6" && digitalRead(PISTONE6)== HIGH)
       {
         if ( digitalRead(ID3E6)== LOW && digitalRead(ID2E6)== HIGH && digitalRead(ID1E6)== LOW &&
         digitalRead(ID0E6)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 6");
               Serial.print("PALET ");
               Serial.println(PALETE6, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE6)==HIGH)
               {
                  digitalWrite(PISTONE6,LOW);
                  digitalWrite(BALIZAROJAE6,LOW);
                  digitalWrite(BALIZAVERDEE6,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 6");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE6, DEC);
                  delay(2000);
                  PALETE6= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 1");
                  delay(500);
               }
              } 
       }

       if (dato1== "SEISE6" && digitalRead(PISTONE6)== HIGH)
       {
         if ( digitalRead(ID3E6)== LOW && digitalRead(ID2E6)== HIGH && digitalRead(ID1E6)== HIGH &&
         digitalRead(ID0E6)== LOW )
            {
               Serial.println("LLEGO A ESTACION 6");
               Serial.print("PALET ");
               Serial.println(PALETE6, DEC);
               delay(1000);
            }
            else
              {
                if(digitalRead(PISTONE6)==HIGH)
               {
                  digitalWrite(PISTONE6,LOW);
                  digitalWrite(BALIZAROJAE6,LOW);
                  digitalWrite(BALIZAVERDEE6,HIGH);
                  Serial.println("LIBERADO DE LA ESTACION 6");
                  delay(1000);
                  Serial.print("PALET ");
                  Serial.println(PALETE6, DEC);
                  delay(2000);
                  PALETE6= 0;
                  Serial.println("PALET VIAJANDO A ESTACION 1");
                  delay(500);
               }
              } 
       }

///////////////////////////////  LIBERACION ESTACIONES  ///////////////////////////////   
///////////////////////////////  LIBERAR TODAS LAS ESTACIONES  /////////////////////////////// 
     
     if (dato1== "LIBERARTODO")
      {
        digitalWrite(PISTONE1,LOW);
        digitalWrite(BALIZAROJAE1,LOW);
        digitalWrite(BALIZAVERDEE1,HIGH);
        PALETE1= 0;
        digitalWrite(PISTONE2,LOW);
        digitalWrite(BALIZAROJAE2,LOW);
        digitalWrite(BALIZAVERDEE2,HIGH);
        PALETE2= 0;
        digitalWrite(PISTONE3,LOW);
        digitalWrite(BALIZAROJAE3,LOW);
        digitalWrite(BALIZAVERDEE3,HIGH);
        PALETE3= 0;
        digitalWrite(PISTONE4,LOW);
        digitalWrite(BALIZAROJAE4,LOW);
        digitalWrite(BALIZAVERDEE4,HIGH);
        PALETE4= 0;
        digitalWrite(PISTONE5,LOW);
        digitalWrite(BALIZAROJAE5,LOW);
        digitalWrite(BALIZAVERDEE5,HIGH);
        PALETE5= 0;
        digitalWrite(PISTONE6,LOW);
        digitalWrite(BALIZAROJAE6,LOW);
        digitalWrite(BALIZAVERDEE6,HIGH);
        PALETE6= 0;   
        Serial.println("ESTACIONES LIBERADAS");
        delay(2000);
      }
///////////////////////////////  LIBERAR TODAS LAS ESTACIONES  ///////////////////////////////     
    }//Serial.available()
}//void loop()

  
