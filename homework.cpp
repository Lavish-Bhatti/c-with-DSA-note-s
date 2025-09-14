// homeowrk question 1 done
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0){
           sum += i; 
        }
    }
    cout << sum << endl;
    return 0;
}
// homework question 2 done
#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial =1; 
    cout << "enter a number";
    cin >> n;
    for(int i =1; i<=n; i++){
        factorial *= i;
    }
    cout << "factorial of "<< n <<  "=" << factorial << endl;
    return 0;
}
// pattern homework question 3 done
