
const int botao = 3;
const int ledVer = 4;


void setup()
{
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
}



int var;



void loop()
{
  var = digitalRead(botao);
  if (var){
    digitalWrite (ledVer, HIGH);
  }
  }