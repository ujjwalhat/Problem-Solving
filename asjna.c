#include <stdio.h>

int main(void) {
	int t,cc,cfi,step,ns=1;
	scanf("%d",&t);
	while(t--)
	    {
	    scanf("%d%d%d",&cc,&cfi,&step);
		int cc2 ;
		cc2=cc ;

	    if(cc==cfi)
	    {
	        printf("0\n");
	    }
	    
		else if(cc<cfi)
		{
			 int cc2 =cc ;
	    while( cc < cfi )
	    {
	    cc2 +=step ;
	        if ( cfi > cc2)
	        {
	            ns++;
	        }
	        else 
	        {
	            step--;
	        }
	    }
	    printf("%d\n",ns);
	       
	    }
		else {
			printf("The steps are greater");
		}
	
	return 0;
}
}
