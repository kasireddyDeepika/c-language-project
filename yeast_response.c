/*calculating and comparing yeast growth rates by using different repurposed drugs*/
#include<stdio.h>
int main()
{
  int i,n;
  char drug[10][30];
float initial_pop,final_pop,time;
float growth_rate;
printf("enter number of drugs tested");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter drug name:");
scanf("%s",&drug[i]);
printf("enter initial yeast population:");
scanf("%f",& initial_pop);
printf("enter final yeast population:");
scanf("%f",& final_pop);
printf("enter time period:");
scanf("%f",&time);
if(time!=0)
{
growth_rate=final_pop-initial_pop/time;
printf("growth_rate=%2f\n", growth_rate);
if(growth_rate<=0)
{
printf("%s is most effective\n",drug[i]);
}
else if(growth_rate>0&&growth_rate<=5)
{
printf("%s is moderately effective drug",drug[i]);
}
else
{
printf("%s is less effective\n",drug[i]);
}
}
else
{
printf("time cannot be zero");
}
}
return 0;
}
