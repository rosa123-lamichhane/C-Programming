#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT gm;
    initgraph(&gd,&gm,"");
    //functions
//    outtext
//    system("pause");
//    setcolor(color_name);

    setcolor(BLUE)
    for(int i=50;i<=200;i+=30)
    {
        circle(250,200,i);
    }






    getch();
    closegraph();
}
