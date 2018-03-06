#include "main.h"

void drawMenu (TMenuText menuText,int pos)
{
    system("cls");
    for(int i=0;menuText[i]!="";i++)
        cout << ((pos==i)?"> ":"  ") <<menuText[i] << "\n";
}

int takeAnswer ()
{
    int key = 0;
    if(!kbhit())
        key = getch();
    if (key == 224) key = getch(); // Защита для нажатия стрелок. Получение конечного кода нажатой стрелки.
    return (key);
}

void mainMenu()
{
    TMenuText mainMenuText = {"Start" , "Exit", ""};
    int pos = 0;
    int answer = 0;
    bool codeMode = false;
    string code = "";
    do{
        if (!codeMode)
            drawMenu(mainMenuText, pos);
        answer = takeAnswer();
        if ((answer == 80)&&(pos < 1)) pos++;
        if ((answer == 72)&&(pos > 0)) pos--;
        if ((answer == 36)) {codeMode = true; cout << '$';}
        if (codeMode) {cin >> code; cout << '\n' << code << '\n'; codeMode = false;}
        cout<<answer;
        getch();
    }while(answer != 13);

}
