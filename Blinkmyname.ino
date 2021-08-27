//JASDEEP SINGH

/*
  TASK - 2.1 
  BLINK MY FIRST NAME

  MY NAME IS JASDEEP SINGH 
  In this taskk I have used morse code to blink my first name using in built led in arduino nano 33 iot board 
  this is website link which is used to convert aphabets to dots and dashes.
  https://morsecode.world/international/morse2.html
    
 */

//#define LED  D12                        //defining pin number


void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);              //  declaring pinMode

    // Writing Jasdeep with morsecode
//----------------------------------------------------------------------------------------------------------------
  // J is written as . _ _ _
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);  
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(5000); 
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(5000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);    

//----------------------------------------------------------------------------------------------------------------
  // A is written as . _
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);  
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(5000); 
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 

//----------------------------------------------------------------------------------------------------------------
  // S is written as . . . 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 

//----------------------------------------------------------------------------------------------------------------
  // D is written as _ . .
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(5000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);         

//----------------------------------------------------------------------------------------------------------------
  // E is written as .
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);       

//----------------------------------------------------------------------------------------------------------------
  // E is written as .
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);  


//----------------------------------------------------------------------------------------------------------------
  // P is written as . _ _ .
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);  
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(5000); 
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(5000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);   
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);}


void loop() 
{


}
