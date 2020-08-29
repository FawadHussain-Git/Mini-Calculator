#ifndef compute_H_INCLUDED
#define compute_H_INCLUDED

void calculator_operations()
{

    printf("\n             Welcome to Mini Computer \n\n");

    printf("******* Press 'Q' or 'q' to quit the program ********\n ");
    printf("***** Press 'H' or 'h' to display below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n");
    printf("Enter S symbol for Sine \n");
    printf("Enter E symbol for Cos \n");
    printf("Enter T symbol for Tan \n");
    printf("Enter W symbol for Coscant \n");
    printf("Enter P symbol for Secant \n");
    printf("Enter G symbol for Cotangent \n");
    printf("Enter M symbol for Mode \n");
    printf("Enter A symbol for Mean \n");
    printf("Enter I symbol for Transpose \n");
    printf("Enter J symbol for Add or subtract of matrics \n");
    printf("Enter O symbol for celsius to fahreneheit \n\n");

}

void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a-b;
    printf("\nDifference  of entered numbers=%d\n",d);
}

void multiplication()
{
int n, total=1, k=0, number;
    printf("\nEnter the number of elements you want to Multiply:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total*number;
        k=k+1;
    }
    printf("Multiplication of %d numbers = %d \n",n,total);
}

void division()
{
    int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}

int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}

void mode()
{
    int i, j, a[20] = {0}, sum = 0, n, t, b[20] = {0}, k = 0, c = 1, max = 0, mode;
    float x = 0.0, y = 0.0;
    printf("\nEnter the limit\n");
    scanf("%d", &n);
    printf("Enter the set of numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        mode = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j]) {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0)) {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max) {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            c++;
        }
        if (c == n)
            printf("\nThere is no mode");
        else
        {
            printf("\nMode\t= ");
            for (i = 0; i < k; i++)
                printf("%d ",b[i]);
        }

    }



void mean()
{
    int n, i;
    float num[100], sum=0.0, average;
    printf("Enter the numbers of data: ");
    scanf("%d",&n);
    while (n>100 || n<=0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d",&n);
    }
   for(i=0; i<n; ++i)
   {
      printf("%d. Enter number: ",i+1);
      scanf("%f",&num[i]);
      sum+=num[i];
   }
   average=sum/n;
   printf("Average = %.2f",average);
   return 0;

}

void median()
{
int a[100],i,n;
float m;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(n%2==0)
{
m=(a[n-1/2]+(a[n/2]))/2;
}
else
{
m=a[n/2];
}
printf("\nMedian is %f",m);
}

//********************* qasim *************************//


void transpose()
{
    int a[10][10], trans[10][10], r, c, i, j;
    printf("Enter rows and column of matrix: ");
    scanf("%d %d", &r, &c);

/* Storing element of matrix entered by user in array a[][]. */
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
    for(j=0; j<c; ++j)
    {
        printf("Enter elements a%d%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
/* Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
    for(j=0; j<c; ++j)
    {
        printf("%d  ",a[i][j]);
        if(j==c-1)
            printf("\n\n");
    }

/* Finding transpose of matrix a[][] and storing it in array trans[][]. */
    for(i=0; i<r; ++i)
    for(j=0; j<c; ++j)
    {
       trans[j][i]=a[i][j];
    }

/* Displaying the transpose,i.e, Displaying array trans[][]. */
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
    for(j=0; j<r; ++j)
    {
        printf("%d  ",trans[i][j]);
        if(j==r-1)
            printf("\n\n");
    }
    return 0;
}
void add_sub_matrices()

{

    int array1[10][10], array2[10][10], arraysum[10][10],

    arraydiff[10][10];

    int i, j, m, n, option;



    printf("\nEnter the order of the matrix array1 and array2 \n");

    scanf("%d %d", &m, &n);

    printf("Enter the elements of matrix array1 \n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < n; j++)

        {

            scanf("%d", &array1[i][j]);

        }

    }

    printf("MATRIX array1 is \n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < n; j++)

        {

            printf("%3d", array1[i][j]);

        }

        printf("\n");

    }

    printf("Enter the elements of matrix array2 \n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < n; j++)

        {

            scanf("%d", &array2[i][j]);

        }

    }

    printf("MATRIX array2 is \n");

    for (i = 0; i < m; i++)

    {

        for (j = 0; j < n; j++)

        {

            printf("%3d", array2[i][j]);

        }

        printf("\n");

    }

    printf("Enter your option: 1 for Addition and 2 for Subtraction \n");

    scanf("%d", &option);

    switch (option)

    {

    case 1:

        for (i = 0; i < m; i++)

        {

            for (j = 0; j < n; j++)

            {

                arraysum[i][j] = array1[i][j] + array2[i][j];

            }

        }

        printf("Sum matrix is \n");

        for (i = 0; i < m; i++)

        {

            for (j = 0; j < n; j++)

            {

                printf("%3d", arraysum[i][j]) ;

            }

            printf("\n");

        }



        break;

    case 2:

        for (i = 0; i < m; i++)

        {

            for (j = 0; j < n; j++)

            {

                arraydiff[i][j] = array1[i][j] - array2[i][j];

            }

        }

        printf("Difference matrix is \n");

        for (i = 0; i < m; i++)

        {

            for (j = 0; j < n; j++)

            {

                printf("%3d", arraydiff[i][j]) ;

            }

            printf("\n");

        }


        break;

    }



}

void fahr()
  {
        float fahr, celsius;

        printf("\nEnter the value for celsius:");
        /* get a value in celsius from user */
        scanf("%f", &celsius);

        /* convert celsius to fahreneheit */
        fahr =(9.0/5.0) * celsius + 32;

        /* print the result */
        printf("%.3fc is equal to %.3fF\n", celsius, fahr);
        return 0;
  }

 void feet()
  {
        float feet, inches;

        /* get the number of feet from ther user */
        printf("\nEnter the number of feet:");
        scanf("%f", &feet);

        /*
         * converting feet to inches
         * 1 feet is equal to 12 inches
         */
        inches = feet * 12.0;
        printf("%.2f feet is equal to %.2f inches\n", feet, inches);
        return 0;

  }

  #endif // compute_H_INCLUDED
