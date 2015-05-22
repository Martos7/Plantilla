/*************************************************************************
**   Se enciende i se apaga durante un segundo repetidamente            **
**    el LED que por defecto esta puesto en el pin 13                   **
**                                                                      **
*************************************************************************/



//La función se ejecuta una vez en pulsar reset o alimentar la placa

void setup () 
{
  pinMode(13, OUTPUT);
}

//El loop funcionará sin parar

void loop ()
{
  digitalWrite(13, HIGH);   
  delay(1000);              
  digitalWrite(13, LOW);    
  delay(1000);
}

