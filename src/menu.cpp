#include "main.h"
void drawMenu(TMenuText menuText,int pos)
{
    system("cls");
    for(int i=0;menuText[i]!="";i++)
        cout << ((pos==i)?"> ":"  ") <<menuText[i] << "\n";
}



void mainMenu()
{
    TMenuText mainMenuText = {"Start" , "Exit"};
    /*
    mainMenuText[0] = "Start";
    mainMenuText[1] = "Exit";
    mainMenuText[2] = "";
    */
    int pos = 0;
    drawMenu(mainMenuText, pos);
}
