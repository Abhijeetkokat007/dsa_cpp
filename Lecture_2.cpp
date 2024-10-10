#include <iostream>
using namespace std ;
int main() {
   int a = 1;
   char gread = 'A';
   float PI = 3.14f;
   bool isSafe = true ;
   double big = 100.34;
   
   cout << "float Byte = "  << sizeof PI  << endl ;
   cout << "Int Byte = "  << sizeof a <<  endl ;
   cout << "Char Byte = "  << sizeof gread << endl ;
   cout << "bool Byte = "  << sizeof isSafe << endl ;
   cout << "double Byte = "  << sizeof big << endl ;
   
   
    cout << "I am Abhiii" << "\n" << sizeof a << "\n" << "\n"<< a << "\n" << "Kokat";

    return 0;
}

// Type Casting

#include <iostream>
using namespace std ;
int main() {
   double price = 100.34;
   int newprice = (int)price;
   
  
   
   cout << "price = "  << price  << endl ;
   cout << "new price = "  << price <<  endl ;
  
   
   
   

    return 0;
}

// inputs

#include <iostream>
using namespace std ;
int main() {
   int age;
   
  
   
   cout << "Enter Your age = " ;
   cin >> age;
  

    return 0;
}

// operators

// 1) Arithmetic 

#include <iostream>
using namespace std ;
int main() {
   int a=10 , b=5;
   int sum = a+b ;
  
   
   cout << "adition = " << sum <<endl ;
   cout << "subtraction = " << (a-b) <<endl ;
   cout << "Multiplication = " << (a*b) <<endl ;
   cout << "Division = " << (a/b) <<endl ;
   cout << "Modulo = " << (a%b) <<endl ;
  
  

    return 0;
}

// 2) Relational

#include <iostream>
using namespace std ;
int main() {
  
 
   cout  << (10<12) <<endl ;
   cout << (12==13) <<endl ;
   cout << (10>=6) <<endl ;
   cout << (10!=12) <<endl ;
  
  

    return 0;
}

// 3) LOgical

#include <iostream>
using namespace std ;
int main() {
  
 
   cout  << ((10<12) || (10>12)) <<endl ;
   cout << ((12==13) && (12==12)) <<endl ;
   cout << !(10>=6) <<endl ;
   
  
  

    return 0;
}