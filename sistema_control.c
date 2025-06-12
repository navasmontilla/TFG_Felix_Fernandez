// Pines de los drivers

// Motor A1

int ENA1 = 6;              // Control de la velocidad de giro del motor

int IN11 = 5;              // Control del sentido de giro del motor

int IN21 = 4;              // Control del sentido de giro del motor

 

// Motor B

int ENB = 3;

int IN3 = 8;

int IN4 = 7;

 

// Motor A2

int ENA2 = 11;

int IN12 = 13;

int IN22 = 12;

 

// Pines de los sensores

int sensor1 = 10;

int sensor2 = 9;

int sensor3 = 2;

 

// Valores de los sensores

int valor_sensor1 = 0;

int valor_sensor2 = 0;

int valor_sensor3 = 0;

 

void setup() {

  // Se inicia puerto serie

  Serial.begin (9600);

 

  // Los pines de los drivers se declaran como salidas

  pinMode (ENA1, OUTPUT);

  pinMode (IN11, OUTPUT);

  pinMode (IN21, OUTPUT);

  pinMode (ENB, OUTPUT);

  pinMode (IN3, OUTPUT);

  pinMode (IN4, OUTPUT);

  pinMode (ENA2, OUTPUT);

  pinMode (IN12, OUTPUT);

  pinMode (IN22, OUTPUT);

 

  // Los pines de los sensores se declaran como entradas

  pinMode (sensor1, INPUT);

  pinMode (sensor2, INPUT);

  pinMode (sensor3, INPUT);

}

 

void loop() {

  valor_sensor1 = digitalRead (sensor1);

  valor_sensor2 = digitalRead (sensor2);

  valor_sensor3 = digitalRead (sensor3);

 

  // Control del motor 1

  if (valor_sensor1 == LOW){

    Pararmotor1();

  } else{

    Motor1girando();

  }

 

  // Control del motor 2

  if (valor_sensor2 == LOW){

    Pararmotor2();

  } else{

    Motor2girando();

  }

 

  // Control del motor 3

  if (valor_sensor3 == LOW){

    Pararmotor3();

  } else{

    Motor3girando();

  }

}

 

void Motor1girando (){

  // Para que el motor gire, se pone un IN en alto y el otro en bajo.

  // Si se quiere que gire en sentido contrario, cambiar HIGH por LOW y viceversa

  digitalWrite (IN11, LOW);

  digitalWrite (IN21, HIGH);

  // Velocidad del motor (255: velocidad maxima)

  analogWrite (ENA1, 100);

}

 

void Motor2girando (){

  // Para que el motor gire, se pone un IN en alto y el otro en bajo.

  // Si se quiere que gire en sentido contrario, cambiar HIGH por LOW y viceversa

  digitalWrite (IN3, LOW);

  digitalWrite (IN4, HIGH);

  // Velocidad del motor (255: velocidad maxima)

  analogWrite (ENB, 100);

}

 

void Motor3girando (){

  // Para que el motor gire, se pone un IN en alto y el otro en bajo.

  // Si se quiere que gire en sentido contrario, cambiar HIGH por LOW y viceversa

  digitalWrite (IN12, LOW);

  digitalWrite (IN22, HIGH);

  // Velocidad del motor (255: velocidad maxima)

  analogWrite (ENA2, 100);

}

 

void Pararmotor1 (){

  // Para que el motor pare, ambos a LOW

  digitalWrite (IN11, LOW);

  digitalWrite (IN21, LOW);

  // Velocidad del motor (255: velocidad maxima)

  analogWrite (ENA1, 0);

}

 

void Pararmotor2 (){

  // Para que el motor pare, ambos a LOW

  digitalWrite (IN3, LOW);

  digitalWrite (IN4, LOW);

  // Velocidad del motor (255: velocidad maxima)

  analogWrite (ENB, 0);

}

 

void Pararmotor3 (){

  // Para que el motor pare, ambos a LOW

  digitalWrite (IN3, LOW);

  digitalWrite (IN4, LOW);

  // Velocidad del motor (255: velocidad maxima)

  analogWrite (ENB, 0); 
