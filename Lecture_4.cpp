#include <iostream>
using namespace std ;
int main() {
    
    for(int i= 1; i<=5; i++){
        int m = 5;
        
        for( int i=1; i<=m; i++){
            cout << i << " " ;
        }
        cout << endl;
    }

    return 0;
}



#include <iostream>
using namespace std ;
int main() {
    int n = 10 ;
    for(int i= 1; i<=n; i++){
       
        
        for( int j=1; j<=i; j++){
            cout   << " * " ;
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std ;
int main() {
    int n = 26 ;
    for(int i= 1; i<=n; i++){
        char ch= 'A';
        for( int j=1; j<=n; j++){
            cout   << ch ;
            ch = ch +1 ;
        }
        cout << endl;
    }

    return 0;
}