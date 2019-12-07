*
* payroll - calculate pay given time and a half for overtime
*
*  Written by: C. Severance 16Mar92
*
* Declare the variables:
*
      REAL RATE,HOURS,PAY
*
* Prompt the user for hours and the rate
*
      PRINT *,'Enter the hours worked - '
      READ *,HOURS
      PRINT *,'Enter the pay per hour -'
      READ *,RATE
*
* Calculate the pay compensating for overtime
*
      IF ( HOURS .GT. 40.0 ) THEN
        PAY = RATE * 40.0 + ( RATE * 1.5 * (HOURS - 40.0))
      ELSE
        PAY = RATE * HOURS
      ENDIF
*
* Print out the pay
*
      PRINT *,'PAY is - ',PAY
      END
