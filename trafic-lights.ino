void setup() {
  // put your setup code here, to run once:
 pinMode(3, INPUT);
 pinMode(0, OUTPUT);
 pinMode(1, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 digitalWrite(3, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(0, LOW);// gelb
 digitalWrite(1, LOW);//grün
 digitalWrite(2, HIGH);//rot
 digitalWrite(8, LOW);//gelb
 digitalWrite(9, LOW);//grün
 digitalWrite(10, HIGH);//rot
 delay(1000);
 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

 digitalWrite(0, LOW);//gelb
 digitalWrite(1, LOW);//grün
 digitalWrite(2, HIGH);//rot
 digitalWrite(8, HIGH);//gelb
 digitalWrite(9, LOW);//grün
 digitalWrite(10, HIGH);//rot
 delay(2000);
 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

 digitalWrite(0, LOW);//gelb
 digitalWrite(1, LOW);//grün
 digitalWrite(2, HIGH);//rot
 digitalWrite(8, LOW);//grün
 digitalWrite(9, HIGH);//grün
 digitalWrite(10, LOW);//rot
 delay(5000);
 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

 digitalWrite(0, LOW);//gelb
 digitalWrite(1, LOW);//grün
 digitalWrite(2, HIGH);//rot
 digitalWrite(8, HIGH);//gelb
 digitalWrite(9, LOW);//grün
 digitalWrite(10, LOW);//rot
 delay(2000);
 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

 digitalWrite(0, LOW);//gelb
 digitalWrite(1, LOW);//grün
 digitalWrite(2, HIGH);//rot
 digitalWrite(8, LOW);//gelb
 digitalWrite(9, LOW);//grün
 digitalWrite(10, HIGH);//rot
 delay(1000);
 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

 digitalWrite(0, HIGH);//gelb
 digitalWrite(1, LOW);//grün
 digitalWrite(2, HIGH);//rot
 digitalWrite(8, LOW);//gelb
 digitalWrite(9, LOW);//grün
 digitalWrite(10, HIGH);//rot
 delay(2000);
 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

 digitalWrite(0, LOW);//gelb
 digitalWrite(1, HIGH);//grün
 digitalWrite(2, LOW);//rot
 digitalWrite(8, LOW);//gelb
 digitalWrite(9, LOW);//grün
 digitalWrite(10, HIGH);//rot
 delay(5000);
 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

 digitalWrite(0, HIGH);//gelb
 digitalWrite(1, LOW);//grün
 digitalWrite(2, LOW);//rot
 digitalWrite(8, LOW);//gelb
 digitalWrite(9, LOW);//grün
 digitalWrite(10, HIGH);//rot
 delay(2000);

 if(digitalRead (3)==LOW) {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW); 
    digitalWrite(2, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    digitalWrite(13, HIGH);
    delay(5000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(5000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    }

}
