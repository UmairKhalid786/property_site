void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600); 
}

int choice = 0;
char incomingByte = 0;
String Mobile = "";  
String Address = "";  
String Email = "";  

void loop() {

   Menu();
    
    
     //while (Serial.available() == 0) {}
 
 if(Serial.available()>0)
  {
    while (Serial.available() == 0) {}
    int incomingData= Serial.read();

    switch(incomingData)
   {
    case '1':
           // handle '1'
            Serial.print("1 choice");
           break;

        case '2':
           // handle '2'
            Serial.print("2 choice");
           break;

        case '3':
           // handle '3'
            
            Serial.print("3 choice");
           break;

        default:
           // handle unwanted input here
            Serial.print("default choice");
           break;
   }

  }
    
//    while (Serial.available() == 0)  {
//      while (Serial.available() == 0) {}
//      name = Serial.readString(); 
//      Serial.println("YOUR NAME:" + name);
//    }
//    while (Serial.available() == 0)  {}
//    while (Serial.available() == 0)   
//    { //Wait for user input  }  
//    name = Serial.readString(); //Reading the Input string from Serial port.  
//    Serial.println("Enter your Moblie No.");  
//    while (Serial.available() == 0) {}  
//    Mobile = Serial.readString();  
//    Serial.println("Enter your Address.");  
//    while (Serial.available() == 0) {}  
//    Address = Serial.readString();  
//    Serial.println("Enter your Email.");  
//    while (Serial.available() == 0) {}  
//    Email = Serial.readString();  
//    Serial.println("-------------------------"); //Showing the details  
//    Serial.println("YOUR NAME:" + name);  
//    Serial.println("YOUR MOBILE NO:" + Mobile);  
//    Serial.println("YOUR ADDRESS:" + Address);  
//    Serial.println("YOUR EMAIL:" + Email);  
//    Serial.println("Thanks You...");  
//    Serial.println("");  
//    while (Serial.available() == 0) {}  
//
//    }
    
   }
  // put your main code here, to run repeatedly:


  void hello(){
  Serial.println("Enter your name.");    
  }

  void Menu() {
   Serial.println("|****************************|");
   Serial.println("|**|Ardnoid Configuration |**|");
   Serial.println("|**|        Menu          |**|");
   Serial.println("|****************************|");

   Serial.print("Please enter choices :");
   Serial.print("    1. Enter Weekly Data");
   Serial.print("    2. Show Report");
    
   for (;;) {
        switch (Serial.read()) {
            case '1': ldrConfig(); break;
            case '2': srvConfig(); break;
            case '3': return;
            default: continue;  // includes the case 'no input'
        }
    }
}

void ldrConfig(){
  Serial.println("|**|idr Configuration |**|");  
}
void  srvConfig() {
  Serial.println("|**|SRV Configuration |**|");  
}
//   Serial.print("Enter number");
 
//  Serial.println(number);
//
//  delay(2000);
//  number++;
//}
