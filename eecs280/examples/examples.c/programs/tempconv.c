
/* tempconv - Converts temperature from Farenheight to Centigrade */
/* and Kelvin */

/*  Written by: C. Severance  - Tue Dec  7 23:01:34 EST 1993 */

main() {

  float cent,faren,kelvin;

/* Prompt the user for the Farenheight temperature */

  printf("enter the farenheight temperature -");
  scanf("%f",&faren);

/* Calculate the centigrade temperature  */

  cent = ( faren - 32.0 ) * ( 5.0 / 9.0 ) ;
  printf("centigrade temperature is -  %f\n",cent);

/* Calculate the kelvin temperature */

  kelvin = cent + 273.0;
  printf(" kelvin temperature is -  %f\n",kelvin);
}
