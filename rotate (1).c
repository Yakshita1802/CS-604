// rotate four integers by one position. Function rotate_4() takes four integer pointers as parameters and returns nothing.
//%  ./rotate 1 2 3 4
//% 2 3 4 1

#include <stdio.h>
#include <stdlib.h>

void rotate_4(int *p_a, int *p_b, int *p_c, int *p_d) {
    //TO-DO: please implement left-rotate 4 integers by one position
  /* rotate using temp variable. The temp variable will be store the value of the first variable.
      this will help me to rotate two variables and then assign the value of temp to the second variable.
      */
    int temp = *p_a;
    *p_a = *p_b;
    *p_b = *p_c;
    *p_c = *p_d;
    *p_d = temp;
}

//Please do not modify main function
int main(int argc, char ** argv) {

    if (argc != 5) {
      printf("Error! Not Enough Inputs! \n");
    }
    else {
      int a = atoi(argv[1]); //atoi converts string to int
      int b = atoi(argv[2]);
      int c = atoi(argv[3]);
      int d = atoi(argv[4]);
      rotate_4(&a, &b, &c, &d);
      printf("%d %d %d %d\n", a, b, c, d);
    }
    return 0;
}
