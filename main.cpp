#include <iostream>
using namespace std;


//La funcion realiza una sumatoria recursiva
int func(int n){
    if(n==0)
        return(0);
    return(n + func(n-1));
}

int funR(int n){
    int suma =  0;
    for(int i=0; i<=n; i++){
        suma+=i;
    }
    return suma;
}

int main() {
    cout<<func(4)<<endl;
    cout<<funR(4)<<endl;
    return 0;
}