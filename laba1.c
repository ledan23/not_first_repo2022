#include<stdio.h>/* підключення стандартної бібліотеки*/
#include<math.h>/* підключення математичної бібліотеки*/

/* обявлення головної фунції */
int main(){
    double x = 0.067, y = 3.017, output; /* обявлення змінної */
    output = 137*pow(x,3)+cos(pow(y,3)/pow(y,4))+tan(14*y)-7*pow(x,6); /* вираховування по формулі */ 
    printf("%f", output); /* вивід результату */ 
}
// adding frist coment
