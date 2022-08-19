

int ID3     = 28;        // RECONOCIMIENTO E1
int ID2     = 26;        // RECONOCIMIENTO E1
int ID1     = 24;        // RECONOCIMIENTO E1
int ID0     = 22;        // RECONOCIMIENTO E1
int INPLACE = 30;        // DETECCIÓN PALET E1

int PISTONE1      = 42;  // ACTUADOR PALETS
int BALIZAVERDEE1 = 44;  // BALIZAS DE SENALIZACION VERDE
int BALIZAROJAE1  = 46;  // BALIZAS DE SENALIZACION ROJA



void setup() {
 
  pinMode(22,INPUT);    //ID0-A0  E1
  pinMode(24,INPUT);    //ID1-A1  E1
  pinMode(26,INPUT);    //ID2-A2  E1
  pinMode(28,INPUT);    //ID3-A3  E1
  pinMode(30,INPUT);    //INPLACE E1
  pinMode(42,OUTPUT);   //ACTUADOR PALETS E1
  pinMode(44,OUTPUT);   //BALIZAS DE CONTROL VERDE E1
  pinMode(46,OUTPUT);   //BALIZAS DE CONTROL ROJA  E1
  Serial.begin(9600);
}

void loop() {
///////////////////////////////  ESTACION 1  ///////////////////////////////
///////////////////////////////  INFORMACION DE LOS SENSORES, ACTUADORES Y BALIZAS  ///////////////////////////////

  int PALETE1 = 0; 
            
  if (digitalRead(INPLACE)==LOW)
  {
    digitalWrite(BALIZAVERDEE1,HIGH);
    digitalWrite(PISTONE1,LOW);
    digitalWrite(BALIZAROJAE1,LOW); 
    delay (1000);
  } else
    {
      digitalWrite(BALIZAVERDEE1,LOW);
      digitalWrite(BALIZAROJAE1,HIGH);
      digitalWrite(PISTONE1,HIGH);
      Serial.println("PRIMERA ESTACION");
      delay(1000);
      }
   if (digitalRead(ID0)==HIGH){ PALETE1 = 1;}
   if (digitalRead(ID1)==HIGH){ PALETE1= PALETE1 + 2;}
   if (digitalRead(ID2)==HIGH){ PALETE1= PALETE1 + 4;}
   if (digitalRead(ID3)==HIGH){ PALETE1= PALETE1 + 8;}
   Serial.print("ELEMENTO ");
   Serial.println(PALETE1,DEC);
   delay (1000);   

///////////////////////////////  INFORMACION DE LOS SENSORES, ACTUADORES Y BALIZAS  ///////////////////////////////
///////////////////////////////  LIBERACION ESTACION 1  ///////////////////////////////   

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
         Serial.print("ELEMENTO ");
         Serial.println(PALETE1,DEC);
         delay(2000);
       }
       else{
              //Serial.println("COMANDO NO VALIDO");
        }
        
///////////////////////////////  LIBERACION ESTACION 1  ///////////////////////////////  
///////////////////////////////  LIBERACION ESTACION 1 AUTOMATICO  /////////////////////////////// 
    
    if (dato1== "UNOE1" && digitalRead(PISTONE1)== HIGH)
     {
         if ( digitalRead(ID3)== LOW && digitalRead(ID2)== LOW && digitalRead(ID1)== LOW &&
         digitalRead(ID0)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("ELEMENTO ");
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
                  Serial.print("ELEMENTO ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
               }
              } 
       }

       if (dato1== "DOSE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3)== LOW && digitalRead(ID2)== LOW && digitalRead(ID1)== HIGH &&
         digitalRead(ID0)== LOW )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("ELEMENTO ");
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
                  Serial.print("ELEMENTO ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
               }
              } 
       }

       if (dato1== "TRESE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3)== LOW && digitalRead(ID2)== LOW && digitalRead(ID1)== HIGH &&
         digitalRead(ID0)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("ELEMENTO ");
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
                  Serial.print("ELEMENTO ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
               }
              } 
       }

       if (dato1== "CUATROE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3)== LOW && digitalRead(ID2)== HIGH && digitalRead(ID1)== LOW &&
         digitalRead(ID0)== LOW )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("ELEMENTO ");
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
                  Serial.print("ELEMENTO ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
               }
              } 
       }

       if (dato1== "CINCOE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3)== LOW && digitalRead(ID2)== HIGH && digitalRead(ID1)== LOW &&
         digitalRead(ID0)== HIGH )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("ELEMENTO ");
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
                  Serial.print("ELEMENTO ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
               }
              } 
       }

       if (dato1== "SEISE1" && digitalRead(PISTONE1)== HIGH)
       {
         if ( digitalRead(ID3)== LOW && digitalRead(ID2)== HIGH && digitalRead(ID1)== HIGH &&
         digitalRead(ID0)== LOW )
            {
               Serial.println("LLEGO A ESTACION 1");
               Serial.print("ELEMENTO ");
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
                  Serial.print("ELEMENTO ");
                  Serial.println(PALETE1, DEC);
                  delay(2000);
                  PALETE1= 0;
               }
              } 
       }

///////////////////////////////  LIBERACION ESTACION 1 AUTOMATICO  /////////////////////////////// 
///////////////////////////////  LIBERAR TODAS LAS ESTACIONES  /////////////////////////////// 
     
     if (dato1== "LIBERARTODO" && digitalRead(PISTONE1)== HIGH)
      {
        digitalWrite(PISTONE1,LOW);
        digitalWrite(BALIZAROJAE1,LOW);
        digitalWrite(BALIZAVERDEE1,HIGH);
        PALETE1= 0;
        Serial.println("ESTACIONES LIBERADAS");
        delay(1000);
      }
    
///////////////////////////////  LIBERAR TODAS LAS ESTACIONES  ///////////////////////////////     
    
    }//Serial.available()

}//void loop()
  
