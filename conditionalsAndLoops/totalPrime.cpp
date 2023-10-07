#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

//Write your totalPrime function here
int totalPrime(int n1, int n2){
    int count = 0;
    for(int i=n1;i<n2;i++){
        bool prime = true;
        for (int j=2 ; j*j <= i ; j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
         }
        if(prime) 
        count++;
    }


return count;

    }

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}