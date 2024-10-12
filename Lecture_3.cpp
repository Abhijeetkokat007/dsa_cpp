// Condition statement
#include <iostream>
using namespace std;
int main() {
   int num = -10 ;
   if(num >= 0){
       cout << num << " is positive number";
   } else {
       cout << num << " is negative number";
   }

    return 0;
}




#include <iostream>
using namespace std;
int main() {
   int age ;
    cout  << " Enter your age" <<endl;
   cin >> age ;
   if(age >= 18){
       cout  << " You are eligible for voting" <<endl;
   } else {
       cout <<  " You are not eligible for voting" <<endl;
   }

    return 0;
}


#include <iostream>
using namespace std;
int main() {
   int marks ;
    cout  << "Enter your marks" <<endl;
   cin >> marks ;
   if(marks >= 90){
       cout << marks  << " your gread is A " <<endl;
   }else if  (marks >= 80 && marks < 90) {
       cout << marks  << " your gread is B" <<endl;
   } else if  (marks >= 36 && marks < 80) {
       cout << marks  << " your gread is C" <<endl;
   } else {
        cout << marks  << " your gread is F" <<endl;
   }

    return 0;
}

#include <iostream>
using namespace std;
int main() {
   char ch ;
    cout  << "Enter Character" <<endl;
   cin >> ch ;
   if(ch >= 65 && ch <=90){
       cout << ch  << " is Uppercase " <<endl;
   } else {
        cout << ch  << " is Lowercase" <<endl;
   }

    return 0;
}


// Ternary Operator
#include <iostream>
using namespace std;
int main() {
   int num ;
    cout  << "Enter Number" <<endl;
   cin >> num ;
  (num >= 0 ) ? cout << "number is positive" <<endl : cout << "number is Negative" <<endl ;

    return 0;
}


// Loop 

// 1> While loop

// print 1 to 50 number
#include <iostream>
using namespace std;
int main() {
   int num = 1 ;
   
   while (num <= 50){
       cout  << num <<endl;
       num++;
   }
   

    return 0;
}

// print n odd number of sum
#include <iostream>
using namespace std ;

int main() {
    int n = 20;
    int i ;
    int sum = 0 ;
    while (i<= n){
        if(i%2 != 0){
            cout << i << endl;
            sum = sum + i;
        }
        i++ ;
    }
    cout << "sum = " << sum << endl;
    

    return 0;
}

// 2> For loop

#include <iostream>
using namespace std;
int main() {
   
   
   for(num = 1; num <= 30; num++){
       cout  << num <<endl;
   }

    return 0;
}

// print n odd number sum 
#include <iostream>
using namespace std ;

int main() {
    int n = 20;
    int i ;
    int sum = 0 ;
    for(i=1; i<=n; i++){
        if(i%2 != 0){
            cout << i << endl;
            sum = sum + i;
        }
    }
    cout << "sum = " << sum << endl;
    

    return 0;
}

// sum of n number

#include <iostream>
using namespace std;
int main() {
   int n ;
   int sum = 0 ;
   int i ;
   cout  << "Enter number"  <<endl;
   cin >> n ;
   
   for(i=1; i <= n; i++){
       cout  << i <<endl;
       sum = sum + i ;
   }
   cout  << "Sum = " << sum <<endl;

    return 0;
}

// 3> do While loop

// print n number using do while loop
#include <iostream>
using namespace std ;

int main() {
    int n = 20;
    int i= 1 ;
   do{
       cout << i <<endl ;
       i++ ;
   } while (i<=n);
    return 0;
}

// Break keyword 

#include <iostream>
using namespace std;
int main() {
   int n ;
   int sum = 0 ;
   int i ;
   cout  << "Enter number"  <<endl;
   cin >> n ;
   
   for(i=1; i <= n; i++){
       cout  << i <<endl;
       sum = sum + i ;
       if(i == 15){
           break;
       }
   }

   
   

   cout  << "Sum = " << sum <<endl;

    return 0;
}


// print n number is prime or non prime

#include <iostream>
using namespace std ;

int main() {
    int n = 11;
    bool isPrime = true ;
   for( int i=2; i <=n-1; i++){
       if(n%i == 0){
           isPrime = false ;
           break ;
       }
   }
   if(isPrime == true){
       cout << n << " =  Prime Number" <<endl;
   }
    if(isPrime == false){
       cout << n << " = NonPrime Number" <<endl;
   }
    return 0;
}