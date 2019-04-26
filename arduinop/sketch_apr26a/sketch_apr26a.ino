const int LED = 11;
const int BOTON = 10;
int val;
int est;
int valA;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTON, INPUT);

}

void loop() {

 Funcion(val,est,valA);

}

void Funcion (int valor, int estado, int valor_viejo )
{
  valor = 0;
  valor_viejo = 0;
  estado = 0;
  valor = digitalRead(BOTON);

  if ((valor == HIGH) && (valor_viejo == LOW))
  {
    estado = 1 - estado;
    delay(10);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}

