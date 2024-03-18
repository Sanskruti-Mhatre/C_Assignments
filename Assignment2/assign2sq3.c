#include<stdio.h>

int main ()
{
	int empid,deptno;
        char dsgcode;

	printf("Enter Emp ID:");
	scanf("%d",&empid);

	printf("Enter Dept No:");
	scanf("%d",&deptno);

	printf("dsgcode:");
	getchar();
	dsgcode = getchar();

	switch(deptno)
	{
		case 10 : printf("Employee with emp id : %d is working in Marketing Dept",empid);
			  break;

	       	case 20 : printf("Employee with emp id : %d is working in Management Dept",empid);
			  break;

		case 30 : printf("Employee with emp id : %d is working in Sales Dept",empid);
			  break;
			  
		case 40 : printf("Employee with emp id : %d is working in Designing Dept",empid);
			  break;

	}

	switch (dsgcode)
	{                 {
		case 'M' : printf("As a Manager\n");
			   break;
                          }

                case 'S' : printf("As a Supervisor\n");
			   break;


	        case 's' : printf("As a Security officer\n");
			   break;


	        case 'C' : printf("As a CLerk\n");
                           break;
	}

        return 0;
} 
