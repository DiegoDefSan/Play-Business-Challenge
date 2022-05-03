#include<iostream>

using namespace std;

//A través de una progresión aritmética de segundo grado se consiguió esta ecuación
//1; 5; 13; 25; 41;...
// +4 +8  +12 +16 ...
//   +4 +4  +4
long long foo(int n) {
    return 2*n*n-2*n+1;
}

int main() {
    int n;
    
    scanf("%d", &n);
    printf("%d", foo(n));

    return 0;
}