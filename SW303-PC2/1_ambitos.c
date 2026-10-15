#include <stdio.h>
int x = 100; // variable global
void funcionA() {
 int x = 10; // variable local
 static int y = 5; // variable estática local
 x++;
 y++;
 printf("A: x=%d, y=%d, global=%d\n", x, y, ::x); // ::x accede a global
}
void funcionB() {
 static int y = 0;
 x++; // modifica la variable global
 y++;
 printf("B: x=%d, y=%d\n", x, y);
}
int main() {
 funcionA();
 funcionA();
 funcionB();
 funcionA();
 funcionB();
 return 0;
}
