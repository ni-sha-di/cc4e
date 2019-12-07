*
* calculus - Estimate the area under the curve Y=X**2 from 0-1
*
*  Written by: C. Severance 16Mar92
*
      REAL X,AREA,RECT,ERROR
*
* Print out the table a different way - Use a real number for the index
*
      AREA = 0.0
      DO X=0.0,1.0,0.1
        RECT = 0.1 * (X ** 2)
        AREA = AREA + RECT
      ENDDO
*
* Print out the approximate area and actual area and the error
*
      PRINT *,'Approximate area =',AREA
      PRINT *,'Actual area =',1.0/3.0
      ERROR = ABS ( (1.0/3.0) - AREA )
      PRINT *,'Error =',ERROR
      END
