#include <iostream.h>
#include <conio.h>
#include <string>
int main(int argc, char *argv[])
{
	cout<<"by ma.orojloo"<<endl;
	int charecter1,charecter2;
	
	for(;;)
	{
		
		charecter1=getch();
		charecter2=getch();
		if(charecter2==charecter1)
		{
		cout<<"="<<charecter1<<endl<<endl;
		charecter2=0;	
		}
		else
		cout<<"="<<charecter1<<charecter2<<endl<<endl;
	}
	return 0;
}
