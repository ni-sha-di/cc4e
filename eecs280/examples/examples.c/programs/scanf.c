
main() {

  int i,j;

  int n;

  while (1) {

    printf("Calling scanf ");
    n = scanf("%d %d",&i,&j);

    printf("n=%d i=%d j=%d\n",n,i,j);

    if ( n <= 0 ) break;

  }

}

/*
$ a.out
Calling scanf 1
2
n=2 i=1 j=2
Calling scanf 1 2 3 4 5 6 7
n=2 i=1 j=2
Calling scanf n=2 i=3 j=4
Calling scanf n=2 i=5 j=6
Calling scanf 1 2
n=2 i=7 j=1
Calling scanf 


9
n=2 i=2 j=9
Calling scanf 1 3
n=2 i=1 j=3
Calling scanf n=-1 i=1 j=3
*/
