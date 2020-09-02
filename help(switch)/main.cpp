#include <iostream>          ///   |             case 1:
#include <conio.h>           ///   |                 cout<<(char)1<<endl;
using namespace std;         ///   |

int main()
{
    for(int s=1;s<=255;s++)
    {
        cout<<"case "<<s<<":"<<endl;
        if(s==256) break;

        cout<<" cout<<(char)"<<s<<"<<endl;"<<endl;
        cout<<"break;"<<endl;
        if (s==100) getch();

        if (s==200) getch();
    }
        getch();
    return 0;
}
