#include <stdio.h>
#include <stdlib.h>

/*int primo(int x) {
  int i, div = 0;
  for(i = 1; i<= x; i++){
    if(x % i == 0)
      div++;
  }
  if(div == 2)
    return 1;
  else
    return 0;  
}*/

/*int main(){
  float i;
  for(i = 3.14; i<=3.14159265359; i++){
    if (primo(i) == 1);
      printf("%f, ", i);
  }
  return 0;
  }*/



int palindromo(int n){
  int v[4];
  v[3] = n%10;
  n = n/10;
  n = n/10;
  v[1] = n/10;
  n /= 10;
  v[0] = n%10;
  int i;
  for ( i = 0; i < 4; i++){
    printf("%i", v[i]);
  }
  if (v[0] == v[3] && v[1] == v[2]){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int a = 1234;

  if (palindromo(a)== 1)
    printf("%i Eh palindromo");
  else
    printf("Não é palindromo");

  return 0;
}