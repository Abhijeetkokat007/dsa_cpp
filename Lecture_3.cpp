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


// 1> For loop

