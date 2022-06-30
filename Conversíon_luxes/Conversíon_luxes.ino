int luxes = 6000;
void setup(){
Serial.begin(9600); //Comunicacion puerto serial.
}

void loop()
{
int luz = analogRead(A0); //Lectura pin A0 (Se puede cambiar al gusto del usuario).
float conversion = (luz / 1024.0) * luxes; //Conversion sensor lux(el valor puede variar dependiendo del sensor )
Serial.println(conversion);
Serial.print("lux");
delay(1000);
}
