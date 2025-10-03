#include<stdio.h>
#include<string.h>

struct part{
	int year;
	char material[20];
	int quantity;
	char serial[4];
};

void generate_serial(int index, char serial[]){
  char first = 'A' + (index/60);                      /*First Letter*/
  char second = 'A' + ((index%60)/10);                /*Second Letter */
  char digit = '0' + (index%10);                      /*Digit */

  serial[0] = first;
  serial[1] = second;
  serial[2] = digit;
  serial[3] = '\0';                                   /*End of String */
}

void main(){
  struct part p[5];
  int i;

  for(i=0; i<5; i++){
    generate_serial(i, p[i].serial);

    printf("\nSerial Number: %s\n", p[i].serial);
    printf("Enter Year of Manafacture: ");
    scanf("%d", &p[i].year);
    printf("Enter Material: ");
    scanf("%s", p[i].material);
    printf("Enter Quantity: ");
    scanf("%d", &p[i].quantity);
  }

  printf("\n Parts Entered \n");
  for(i=0; i<5; i++) {
    printf("%s | Year: %d | Material: %s | Quantity: %d\n",
    p[i].serial, p[i].year, p[i].material, p[i].quantity);
  }
}
