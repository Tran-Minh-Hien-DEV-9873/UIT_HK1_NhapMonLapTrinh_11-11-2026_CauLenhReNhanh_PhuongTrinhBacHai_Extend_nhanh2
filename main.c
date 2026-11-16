#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x;
    double delta, x1, x2;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    if (a == 0) 
	{
        printf("----------------- Phuong trinh bac 1 ------------------------------");
        
       if(b == 0)
       {
       		if(c == 0)
       		{
       			printf("Phuong trinh vo so nghiem");
       		}
       		else
       		{
       			printf("Phuong trinh vo nghiem");
       		}
       }
       else
       {
       		x1 = (double)-c/b;
       		printf("Phuong trinh co nghiem x la: %0.2f", x1);
       }
        
    }
    else 
	{
        printf("----------------- Phuong trinh bac 2 ------------------------------");
        
        delta = (double)b * b - 4.0 * a * c;
        
        if (delta < 0) 
		{
        	printf("Phuong trinh vo nghiem\n");
    	}
    	else
    	{
    		if (delta == 0) 
			{
	        	x1 = (double)-b / (2 * a);
	        	
	        	printf("Phuong trinh co nghiem kep x1 = %0.2f\n", x1);
			}
			else
			{
				printf("Phuong trinh co 2 nghiem kep \n");
				
				x1 = (-b + sqrt(delta)) / (2 * a);
        		x2 = (-b - sqrt(delta)) / (2 * a);
        		
        		printf("x1 = %0.2f\n", x1);
        		printf("x2 = %0.2f\n", x2);
			}
    	}
	}

    return 0;
}



