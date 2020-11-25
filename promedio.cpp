#include <iostream>
using namespace std;
float total=0;
float promedio(int n){
  total=total+n;
  return total/5;
}
int main() {
  int n;
  for(int i=0;i<5;i++){
    cout <<"Digite un numero: "<<endl;
    cin>>n;
    promedio(n);
  }
  cout << "El promedio es: " <<promedio(0)<< endl;
  system("pause");
  return 0;
}
