void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

// Fibonacci
int fib(int initial) {
  if (initial <=1) {
    return initial;
  }
  else {
    return fib(initial-1)+fib(initial-2);
  }
}

void blinker(int times)
{
  int ii;
  for (ii = 1; ii <= times; ii++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }

}

void sleep(int n)
{
  digitalWrite(12, HIGH);
  delay(n);
  digitalWrite(12, LOW);
}

void loop()
{
  int i;
  int fib_i;
  if (i > 5) {
    i = 1;
  } else {
    i++;
  }
  fib_i = fib(i);
  Serial.println("i: " + String(i) + ", fib(i): " + String(fib_i));
  blinker(fib_i);
  sleep(1200);
}
