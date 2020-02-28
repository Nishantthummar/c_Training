#include<stdio.h>
void fun();
void main()
{

	int i;
	for(i=0;i<3;i++)
	{
		fun();
	}

}
	void fun(){
	int x=10;
	static int y=10;
	x=x+1;
	y=y+1;
	printf("\nx=%d,y=%d\n",x,y);
}
