/*
Given a number N, verify if N is prime or not.

Return 1 if N is prime, else return 0.
*/

int Solution::isPrime(int A) {
    if(A == 1)
        return false;
    if(A == 2)
        return true;
    
    
    int n = A/2;
    int counter = 1;

    for(int i=2; i<n;i++){
        if(A % i == 0){
            counter = 0;
            return false;
        }
    }
    if(counter == 1){
        return true;
    }
}