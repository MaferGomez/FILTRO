double a=0,T=0,x[7]={0},y[7]={0},aux=0, van=0;
int i,c=0,j;
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop()
{
  van = analogRead(A0);
  T = (van*30)/1023;
  x[6] = T;
  for(i=0;i<7;i++)
  {
    y[i]=x[i];
  }
  //Acomodo de menor a mayor
  //Método burbuja
    for(i=0;i<6;i++)
    {
      for(j=0;j<6-i;j++)
      {
        if(x[j]>x[j+1])
        {
          aux=x[j];
          x[j]=x[j+1];
          x[j+1]=aux;
        }
      }
    }
    
  //Imprime valor medio
    Serial.println(x[3],10);
    //Serial.println(T,10);
  for(i=0;i<7;i++)
  {
    x[i]=y[i];
  }
 for(i=0;i<7;i++)
 {
  x[i]=x[i+1];
 }
  delay(10);
}
