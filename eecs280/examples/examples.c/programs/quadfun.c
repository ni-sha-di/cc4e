
/* Program quadfun - calculate the quadratic formula roots using a function */

/* Written by - C. Severance  - Tue Dec  7 22:36:33 EST 1993 */

quadfun(float*,float*,float,float,float);

main() {

  float a,b,c,root1,root2;
  float q,r,s,roota,rootb;

  printf("enter a,b,c -");
  scanf("%f %f %f",&a,&b,&c);

  quadfun(&root1,&root2,a,b,c);

  printf("root1 =  %f\n",root1);
  printf("root2 =  %f\n",root2);

/* Lets do it again */

  printf("enter q,r,s -");
  scanf("%f %f %f",&q,&r,&s);

  quadfun(&roota,&rootb,q,r,s);

  printf("roota =  %f\n",roota);
  printf("rootb =  %f\n",rootb);

}

/* Function quadfun */

quadfun(r1,r2,a,b,c)

  float* r1;
  float* r2;
  float a,b,c;

{
  double td;
  double sqrt();

  td = b*b - 4 * a * c;
  td = sqrt ( td ) ;

  *r1 = ( -1.0*b + td ) /  ( 2 * a );
  *r2 = ( -1.0*b - td ) /  ( 2 * a );

  return;
}
