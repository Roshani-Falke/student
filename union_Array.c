#include<stdio.h>
int main(){
    int n=3,m=4;
    int ARR1[3]={1,2,3};
    int ARR2[4]={2,4,6,7};
    int i=0,j=0,a=0,b=0;
    int k=n+m;
    int Array1[k];
    int Array2[k];
    for(i; i<n; i++)
    {
    	for(j; j<m; j++)
    	{
    		if(ARR1[i]==ARR2[j])
    		{
    			Array1[b]=ARR1[i];
    			b++;
    			
    		}
    		else if(ARR1[i]<ARR2[j])
    		{
    			Array2[a]=ARR1[i];
    			a++;
    		}
    		else
    		{
    			Array2[a]=ARR2[j];
    			a++;
    		}
    	}
    	int w=i;
    	while(w<n)
    	{
    		Array2[a]=ARR1[i];
    		a++;
    		w++;
    	}
    }
    int q=j;
    while(j<m)
    {
    	Array2[a]=ARR2[j];
    	j++;
    	a++;
    }
    for(int i=0; i<2; i++)
    {
    	printf("%d ",Array1[i]);
    }
    printf("\n");
    for(int i=0; i<k; i++)
    {
    	printf("%d ",Array2[i]);
    }
    
    
    
    

return 0;
}
