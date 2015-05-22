/*************************************************************************
**                                                                      **
**             Descripció Programa                                      **
**                                                                      **
*************************************************************************/

//****** Includes ********************************************************

//****** Variables *******************************************************

int led0 = 3;
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;
int led7 = 10;
int pot = A0;

int valor;

//******  Setup  *********************************************************

void setup () 
 {
   Serial.begin(9600);
  pinMode ( led0, OUTPUT );
  pinMode ( led1, OUTPUT );
  pinMode ( led2, OUTPUT );
  pinMode ( led3, OUTPUT );
  pinMode ( led4, OUTPUT );
  pinMode ( led5, OUTPUT );
  pinMode ( led6, OUTPUT );
  pinMode ( led7, OUTPUT );
  pinMode ( pot, INPUT );
  
  }

//****** Loop ************************************************************

void loop ()
{
  analogRead ( pot );
  
  valor = analogRead ( pot ); 
  Serial.print("valor: ");Serial.println(valor);
  analogWrite ( pot,valor );
  
  }
  
  




