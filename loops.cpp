// while loop example
#include <iostream>
using namespace std;

int main() {
    int count = 1;
    while (count <= 10) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
}   
// for loop example
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for(int i=1; i<=n; i+2) {
        cout << i;
    }
    cout << endl;
    return 0;
}
// sum of numbers from 1 to n.
#include <iostream>
using namespace std;

int main() {
    int n = 100;
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i; 
        if(i==5){
            break;
        }
    }
    cout << "sum = " << sum << endl;
    return 0; 
}
// print of odd numbers from 1 to n
#include <iostream>
using namespace std;

int main() {
    int n =50;
    int oddSum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            oddSum += i;
        }
    }
    cout <<"oddsum = " << oddSum << endl;
    return 0;
}
// do while loop example
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int i = 1;
    
    do {
        cout << i << " ";
        i++;
    }while(i<=n);
    cout << endl;
    return 0;
}
// check if a number is prime or not 
#include <iostream>
using namespace std;

int main() {
    int n=5;
    bool isprime = true;

    for(int i=2; i<=n-1; i++){
        if(n%i == 0) {
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout << "prime no\n";
    }else{
        cout << "not a prime no\n";
    }
    return 0;
}
//nested loops example
#include <iostream>
using namespace std;

int main() {
    
    for(int i=1; i<=5; i++){
        int m = 10;
        for(int j =1; j<=m; j++){
            cout << "*";
        }
    }
    cout << endl;
    return 0;
}