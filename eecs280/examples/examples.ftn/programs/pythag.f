*
* pythag - Calaculates the hypotenuse given two sides of a triangle
*
*  Written by: C. Severance 16Mar92
*
* Declare the variables:
*
      REAL A,B,HYP
*
* Prompt the user two sides of the triangle
*
      PRINT *,'Enter the first side of the triangle - '
      READ *,A
      PRINT *,'Enter the second side of the triangle - '
      READ *,B
*
* Calculate the hypotenuse
*
      HYP = SQRT ( A ** 2 + B ** 2 )
      PRINT *,'Third side of the triangle is - ',HYP
      END
