#include <iostream>
#include<graphics.h>
#include<fstream>
#include<time.h>
#include<math.h>
#define num 10
#define limit 10
#define text  setbkcolor(COLOR(235,233,234))
#define textcolor setcolor(0)
#define btnclr setbkcolor(COLOR(94,46,156))
//Menu Colors
#define RoyalBlue COLOR(65,105,225)
#define AppleRed COLOR(170, 5, 5)
#define Green COLOR(67, 98, 40)
#define Dark COLOR(102,0,41)
using namespace std;
// Functions
void DrawPlayers(); // Draw Player On Screen
void DrawTracker();// Draw Tracker
void FindDistance(); // Find Distance from there Location
void FindSmallDistance();// Find Small Distance From Distance Array
void DrawPath(); // Draw Path From Tacker to Player That Position We Have
void ChangeTrackerLocation();// Change Location of Tracker
void RemoveLoction(); // remove Location From Player That we Reached
void RandomLOC();
void DrawMenu(); // Draw menu function
void CreateBTN(int BTN_no,int BTN_COLOR,char BTN_TEXT[10]);
void MenuControls();
void RandomBTN();
void ObjectBTN();
void TrackerBTN();
void StartBTN();
void ContactBTN();
void GetDetails(int x,int y);
//Variables
int Player[num][2];
int Tracker[2]={500,500};
float Distance[num];
int Position;
int Index = num; // For Player No.
int MenuLayout[]={1150,766};
int Button[]={1188,57,1324,97};
int BTNdif=123-Button[1];
bool Random_BTN=false;
bool Object_BTN=false;
bool Tracker_BTN=false;
bool Start_BTN=false;
bool Exit_BTN=false;
bool Clean_BTN=false;
bool Contact_BTN=false;
int MouseX,MouseY;
void Run()
{
    settextstyle(3,0,1);
    RandomLOC();
    MenuControls();
}
int starting();
void table(int Sr);
void rep(string &);
void impo();
int editing();
void in_file();
void in_variables();
void sandeep();
int m=0,h=0,j,l,a,b,x,y,z,del=0,xx,yy;
int aa,ab,es,ka=150,kb=550,ij;
string n[limit],p[limit],em[limit],v,u,sk,ak,gud,k;
char c;
void start();
int main()
{
    initwindow(1366,766,"");
    start();
    return 0;
}

void start()
{
    in_variables();
    settextstyle(4,HORIZ_DIR,1);
    e:;
    cleardevice();
    ka=150,kb=550;
    aa=ka,ab=kb;
    j=starting();
    if(j==1)
        goto q;
    else if(j==2)
        goto w;
    else if(j==4||j==32)
        goto r;
    else if(j==23)
        goto y;
    else if(j==5)
        goto o;
    else if(j==6)
    {
        sandeep();
        goto e;
    }

q:
//-------------------------add contacts---------------------------//
    for(int i=0;i<50;i++)
    {
        if(j==1)
        {
            i=m;
            cleardevice();
            readimagefile("AddContact.jpg",0,0,1366,766);
        }
        settextstyle(3,HORIZ_DIR,1);
        x=840,y=295;
       text;
       textcolor;
         //-----------------to enter name---------------------//
        for(es=0;;es++)
        {
            c=getch();
            if(c==1)
                goto e;
            if(c==8&&x==840)
                continue;
            if(c==8)
            {
                x=840,y=295;
                readimagefile("textbox.jpg",798,277,1160,331);
                rep(v);
                continue;
            }
            if(c==13)
                break;
            if(x==1020)
                continue;
            outtextxy(x,295,&c);
            x+=12;
            if(es==0)
                v=c;
            else
                v=v+c;
         }
        x=840;
        sf:;
    //-----------------to phone number---------------------//
        for(es=0;;es++)
        {
            c=getch();
            if(c==1)
                goto e;
            if(c==8&&x==840)
                continue;
            if(c==8)
            {
                x=840,y=370;
                readimagefile("textbox.jpg",798,349,1160,404);
                rep(u);
                continue;
            }
            if(c==13)
                break;
            if(x==1020)
                continue;
            outtextxy(x,370,&c);
            x+=12;
            if(es==0)
                u=c;
            else
                u=u+c;
        }
        //--------------------to enter email id--------------------//
        x=840;
        qwerty:;
        for(es=0;;es++)
        {
            c=getch();
            if(c==1)
                goto e;
            if(c==8&&x==840)
                continue;
            if(c==8)
            {
                x=840,y=445;
                readimagefile("textbox.jpg",798,425,1160,479);
                rep(k);
                continue;
            }
            if(c==13)
                break;
            if(x==1020)
                continue;
            outtextxy(x,445,&c);
            x+=12;
            if(es==0)
                k=c;
            else
                k=k+c;
        }
        setbkcolor(0);
        setcolor(15);
        settextstyle(3,HORIZ_DIR,1);
        readimagefile("BTN.jpg",1010,500,1160,575);
        readimagefile("BTN.jpg",803,500,953,575);
        btnclr;
        outtextxy(1050,530,"Dont save");
        outtextxy(860,530,"save");
        while(1)
        {
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=803&&x<=953&&y>=500&&y<=675)
                break;
            else if(x>=1010&&x<=1160&&y>=500&&y<=575)
            {
                cleardevice();
                goto e;
            }
        }
        n[i]=v;
        p[i]=u;
        em[i]=k;
        m++;
        in_file();
        settextstyle(3,HORIZ_DIR,1);
        readimagefile("BTN.jpg",100,180,250,255);
        readimagefile("BTN.jpg",100,255,250,330);
        btnclr;
        outtextxy(140,208,"Add More");
        outtextxy(130,283,"Go to Menu");
        setbkcolor(0);
        x=y=0;
        while(1)
        {
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=100&&x<=250&&y>=180&&y<=255)
            {
                j=1;
                goto q;
            }
            else if(x>=100&&x<=250&&y>=255&&y<=330)
            {
                cleardevice();
                goto e;
            }
        }
     }
//--------------------------Searching--------------------------------//
    w:;
    v="y";
    ka=197,kb=525;
    aa=ka,ab=kb;
    h=0,l=0;
    cleardevice();
    fc:;
    readimagefile("DeleteContact.jpg",0,0,1366,766);
    x=275,y=285;
    text;
    textcolor;
    settextstyle(3,HORIZ_DIR,1);
    for(es=0;;es++)
    {
        c=getch();
        if(c==1)
            goto e;
        if(c==8&&x==275)
            continue;
        if(c==8)
        {
            x=275,y=285;
            readimagefile("textbox.jpg",246,266,608,320);
            rep(v);
            continue;
        }
        if(c==13)
            break;
        if(x==455)
                continue;
        outtextxy(x,y,&c);
        if(es==0)
            v=c;
        else
            v=v+c;
        x+=12;
    }
    setbkcolor(0);
    if(del==1)
    {   del=0;
        goto cv;
    }
    sw:
    aa=ka,ab=kb;
    cleardevice();
    readimagefile("ScrollBar.jpg",0,0,1366,766);
    for(int i=0;i<m;i++)
    {
        if(v==p[i]||v==n[i]||v==em[i])
        {
            readimagefile("detailContact.jpg",636,aa,1210,ab);
            u=n[i];
            sk=p[i];
            k=em[i];
            impo();
            settextstyle(4,HORIZ_DIR,1);
            aa=ab+250;
            ab=aa+328;
            h++;
         }
    }
    setcolor(15);
    if(h==0)
    {
        settextstyle(3,HORIZ_DIR,1);
        readimagefile("BTN.jpg",550,300,800,400);
        btnclr;
        outtextxy(615,340,"No Match Found");
        setbkcolor(0);
        goto vb;
    }
        //----------scrollbar---------------//
    vb:;
    settextstyle(3,HORIZ_DIR,1);
    readimagefile("BTN.jpg",100,180,250,255);
    readimagefile("BTN.jpg",100,255,250,330);
    btnclr;
    outtextxy(130,208,"Search More");
    outtextxy(130,283,"Go to Menu");
    setbkcolor(0);
    while(1)
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(x>=1311&&x<=1344&&y>=56&&y<=90)
        {
            ka+=582,kb+=582;
            goto sw;
        }
        else if(x>=1311&&x<=1344&&y>=647&&y<=680)
        {
            ka-=582,kb-=582;
            goto sw;
        }
        else if(x>=100&&x<=250&&y>=180&&y<=255)
        {
            goto w;
        }
        else if(x>=100&&x<=250&&y>=255&&y<=330)
        {
            cleardevice();
            goto e;
        }
    }
//----------------------------Delete----------------------------//
    r:
    del=1;
    ka=197,kb=525;
    goto fc;
    cv:;
    settextstyle(4,HORIZ_DIR,1);
    l=0;
    aa=ka,ab=kb;
    cleardevice();
    readimagefile("ScrollBar.jpg",0,0,1366,766);
    for(int i=0;i<m;i++)
    {
        if(v==n[i]||v==p[i])
        {
            readimagefile("detailContact.jpg",655,aa,1210,ab);
            u=n[i];
            sk=p[i];
            k=em[i];
            impo();
            settextstyle(4,HORIZ_DIR,1);
            aa=ab+250;
            ab=aa+328;
            l++;
        }
    }
    settextstyle(3,HORIZ_DIR,1);
    if(l>1)
    {
        setcolor(15);
        readimagefile("BTN.jpg",100,200,270,300);
        btnclr;
        outtextxy(130,240,"Enter E-mail id");
        setbkcolor(0);
        while(1)
        {
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=1311&&x<=1344&&y>=56&&y<=90)
            {
                ka+=582,kb+=582;
                goto cv;
            }
            else if(x>=1311&&x<=1344&&y>=647&&y<=680)
            {
                ka-=582,kb-=582;
                goto cv;
            }
            else if(x>=100&&x<=250&&y>=200&&y<=300)
                break;
        }
        x=280,y=270;
        readimagefile("SearchBox.jpg",100,200,671,362);
        settextstyle(3,HORIZ_DIR,1);
        text;
        textcolor;
        for(es=0;;es++)
        {
            c=getch();
            if(c==1)
                goto e;
            if(c==8&&x==280)
                continue;
            if(c==8)
            {
                x=280,y=270;
                readimagefile("SearchBox.jpg",100,200,671,362);
                rep(ak);
                continue;
            }
            if(c==13)
                break;
            if(x==460)
                continue;
            outtextxy(x,y,&c);
            x+=12;
            if(es==0)
                ak=c;
            else
                ak=ak+c;
        }
        setbkcolor(0);
        setcolor(15);
        v=ak;
        if(j==32)
        {
            j=editing();
            if(j==32)
                goto ask;
            else if(j==0)
                goto e;
        }
        for(ij=0;ij<m;ij++)
        {
            if(v==em[ij])
            {
                p[ij]=p[ij+1];
                p[ij+1]=v;
                n[ij]=n[ij+1];
                n[ij+1]=v;
                em[ij]=em[ij+1];
                em[j+1]=v;
                h=9;
            }
        }
        if(h==9)
        {
             m--;
             goto ask;
        }
    }
    h=0,b=0;
    if(j==32)
    {
        j=editing();
        if(j==32)
            goto ask;
        else if(j==0)
            goto e;
    }
    for(ij=0;ij<m;ij++)
    {
        if(v==p[ij]||v==n[ij]||v==em[ij])
        {
            p[ij]=p[ij+1];
            p[ij+1]=v;
            n[ij]=n[ij+1];
            n[ij+1]=v;
            em[ij]=em[ij+1];
            em[j+1]=v;
            h=9;
        }
    }
    if(h==9)
    {m--;}
    ask:;
    cleardevice();
    setcolor(15);
    readimagefile("UI.jpg",0,0,1366,766);
    readimagefile("BTN.jpg",500,300,750,400);
    btnclr;
    (h==9)? (j==32)? outtextxy(555,340,"Edited Successfully"): outtextxy(550,340,"Deleted Successfully") : outtextxy(565,340,"No Match Found");

    settextstyle(3,HORIZ_DIR,1);
    readimagefile("BTN.jpg",100,180,250,255);
    readimagefile("BTN.jpg",100,255,250,330);
    btnclr;
    outtextxy(130,283,"Go to Menu");

    (j==32)?  outtextxy(130,208,"Edit More") :  outtextxy(130,208,"Delete More");
    in_file();
    setbkcolor(0);
    x=y=0;
    while(1)
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(x>=100&&x<=250&&y>=180&&y<=255)
        {
            goto r;
        }
        else if(x>=100&&x<=250&&y>=255&&y<=330)
        {
            cleardevice();
            goto e;
        }
    }

//---------------------------see all contacts--------------------------------//
y:
    l=0,b=8;
    settextstyle(4,HORIZ_DIR,1);
    ka=150,kb=550;
    aa=ka,ab=kb,es=1;
    sotagain:
        setcolor(15);
    cleardevice();

    for(int i=0;i<m;i++)
    {
        if (n[i]=="+")
            continue;
            for(int a=i+1;a<m;a++)
            {
                if(n[i]>n[a]&&es==1)
                {
                    v=n[i];
                    n[i]=n[a];
                    n[a]=v;
                    v=p[i];
                    p[i]=p[a];
                    p[a]=v;
                    v=em[i];
                    em[i]=em[a];
                    em[a]=v;
                }
                else if(n[i]<n[a]&&es==2)
                {
                    v=n[i];
                    n[i]=n[a];
                    n[a]=v;
                    v=p[i];
                    p[i]=p[a];
                    p[a]=v;
                    v=em[i];
                    em[i]=em[a];
                    em[a]=v;
                }
            }
    }
    ka=260,kb=330;
sot:;
    setcolor(15);
    a=ka,b=kb;
    cleardevice();
    settextstyle(4,HORIZ_DIR,1);
    readimagefile("ScrollBar.jpg",0,0,1366,766);
    readimagefile("Table.jpg",90,165,1255,245);
    readimagefile("BTN.jpg",1100,40,1250,115);
    btnclr;
    outtextxy(130,195,"S.no");
    outtextxy(250,195,"Name");
    outtextxy(600,195,"Phone Number");
    outtextxy(920,195,"E-mail id");
    outtextxy(1140,68,"Menu");
    setbkcolor(0);
    for(int i=0;i<m;i++)
    {
        u=n[i],sk=p[i],k=em[i];
        table(i);
        a=b+10;
        b=a+70;
    }

    readimagefile("BTN.jpg",747,40,930,115);
    settextstyle(3,HORIZ_DIR,1);
    (es==1)? outtextxy(775,66,"Z-A (Descending)") : outtextxy(778,66,"A-Z (Ascending)");
    setbkcolor(0);


    while(1)
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(x>=1311&&x<=1344&&y>=56&&y<=90)
         {
            ka+=80,kb+=80;
            goto sot;
         }
        else if(x>=1311&&x<=1344&&y>=647&&y<=680)
         {
            ka-=80,kb-=80;
            goto sot;
         }
        if(x>=1100&&x<=1250&&y>=40&&y<=115)
         {
            cleardevice();
            goto e;
         }
        if(x>=747&&x<=930&&y>=40&&y<=115)
        {
            (es==1)? es=2:es=1;
            goto sotagain;
        }
    }
o:;
    cleardevice();
    readimagefile("UI.jpg",0,0,1366,766);
    readimagefile("BTN.jpg",500,300,750,400);
    btnclr;
    setcolor(15);
    settextstyle(4,HORIZ_DIR,1);
    outtextxy(550,342,"Thank You");
    delay(2000);
    exit(1);
}


 int starting()
 {
     readimagefile("HomeMenu.jpg",0,0,1366,766);
    setbkcolor(0);

    while(1)
    {
        getmouseclick(WM_LBUTTONDOWN,x,y);

         if(x>=146&&x<=475&&y>=289&&y<=355)
            return 1;
        else if(x>=509&&x<=838&&y>=289&&y<=355)
            return 2;
        else if(x>=872&&x<=1201&&y>=289&&y<=355)
            return 23;
        else if(x>=146&&x<=475&&y>=432&&y<=497)
            return 32;
        else if(x>=509&&x<=838&&y>=432&&y<=497)
            return 4;
        else if(x>=586&&x<=762&&y>=573&&y<=637)
            return 5;
        else if(x>=872&&x<=1201&&y>=432&&y<=497)
            return 6;
     }
 }


 void table(int Sr)
 {
    settextstyle(3,HORIZ_DIR,1);
    if(a<=705&&b<=705&&a>=260&&b>=330)
    {
        btnclr;
        readimagefile("Table.jpg",90,a,1255,b);
        xx=245;
        //----------names-------------//
        for(j=0;j<u.length();j++)
        {
            c=u[j];
            outtextxy(xx,a+25,&c);
            xx+=12;
        }
        //----------phone number----------//
        xx=600;
        for(j=0;j<sk.length();j++)
        {
            c=sk[j];
            outtextxy(xx,a+25,&c);
            xx+=12;
        }
        //------------email-------------//
        xx=920;
        for(j=0;j<k.length();j++)
        {
            c=k[j];
            outtextxy(xx,a+25,&c);
            xx+=12;
        }
        char Srno[2]={char(49+Sr)};
        outtextxy(150,a+30,Srno);
    }
 }


 void rep(string &str)
 {
     a=str.length();
     string s;
     for(int w=0;w<a-1;w++)
     {
        if(w==0)
            s=str[w];
        else
            s=s+str[w];
     }
     str=s;
     for(int w=0;w<a-1;w++)
     {
         c=str[w];
         outtextxy(x,y,&c);
         x+=12;
     }
 }

 void impo()
 {
   text;
   textcolor;
    settextstyle(3,HORIZ_DIR,1);
    z=u.length();
    x=840,y=aa+84;
    for(es=0;es<z;es++)
    {
        c=u[es];
        outtextxy(x,y,&c);
        x+=12;
    }
    z=sk.length();
    x=840,y=aa+84+70;
    for(es=0;es<z;es++)
    {
        c=sk[es];
        outtextxy(x,y,&c);
        x+=12;
    }
    z=k.length();
    x=840,y=aa+84+70+73;
    for(es=0;es<z;es++)
    {
        c=k[es];
        outtextxy(x,y,&c);
        x+=12;
    }
    setbkcolor(0);
 }

 int editing()
 {
     h=0;
     for(ij=0;ij<m;ij++)
     {
        if(v==em[ij]||v==n[ij]||v==p[ij])
        {
            cleardevice();
            aa=197,ab=328;
            u=n[ij],sk=p[ij],k=em[ij];
            readimagefile("UI.jpg",0,0,1366,766);
            readimagefile("detailContact.jpg",636,197,1210,525);
            settextstyle(3,HORIZ_DIR,1);
            impo();
            x=u.length()*12+840;
            text;
            textcolor;
            //-------------------To edit names----------------------//
            for(es=0;;)
            {
                c=getch();
                if(c==1)
                    return 0;
                if(c==8&&x==840)
                    continue;
                if(c==8)
                {
                    x=840,y=aa+84;;
                    readimagefile("textbox.jpg",798,261,1158,315);
                    rep(u);
                    continue;
                }
                if(c==13)
                    break;
                if(x==1020)
                    continue;
                outtextxy(x,aa+84,&c);
                u=u+c;
                x+=12;
            }
            x=sk.length()*12+840;
            //------------------to edit phone number----------------------//
            for(es=0;;)
            {
                c=getch();
                if(c==1)
                    return 0;
                if(c==8&&x==840)
                    continue;
                if(c==8)
                {
                    x=840,y=aa+84+70;
                   readimagefile("textbox.jpg",798,333,1158,387);
                   rep(sk);
                   continue;
                }
                if(c==13)
                    break;
                if(x==1020)
                    continue;
                outtextxy(x,aa+84+70,&c);
                sk=sk+c;
                x+=12;
            }
            x=k.length()*12+840;
            //-----------------------to edit email----------------------//
            for(es=0;;)
            {
                c=getch();
                if(c==1)
                    return 0;
                if(c==8&&x==840)
                    continue;
                if(c==8)
                {
                    x=840,y=aa+84+70+73;
                    readimagefile("textbox.jpg",798,407,1158,460);
                    rep(k);
                    continue;
                }
                if(c==13)
                    break;
                if(x==1020)
                    continue;
                outtextxy(x,aa+84+70+73,&c);
                k=k+c;
                x+=12;
            }
            n[ij]=u;
            p[ij]=sk;
            em[ij]=k;
            h=9;
            setbkcolor(0);
        }
    }
    setcolor(15);
    return 32;
 }

 void in_file()
 {
    ofstream fout;
    fout.open("VINIT.txt");
    for(ij=0;ij<m;ij++)
    {
        v=n[ij];
        if(v=="+")
            continue;
        fout<<v<<"*";
        v=p[ij];
        fout<<v<<"/";
        v=em[ij];
        fout<<v<<"-";
    }
    fout.close();
 }

 void in_variables()
 {
    ifstream fin;
    string s;
    fin.open("VINIT.txt");
    c=fin.get();
    m=0,x=0;
    while(!fin.eof())
    {
        if(c=='*')
        {
            n[m]=s;
            x=0;
            goto t;
        }
        else if(c=='/')
        {
            p[m]=s;
            x=0;
            goto t;
        }
        else if(c=='-')
        {
            em[m]=s;
            m++,x=0;
            goto t;
        }
        else
        {
            if(x==0)
                s=c,x++;
            else
                s=s+c;
        }
        t:;
        c=fin.get();
    }
    fin.close();
 }

 void sandeep()
 {
     Run();
 }





void MenuControls()
{


    cleardevice();
    DrawMenu();

    while(true)
    {   getmouseclick(WM_LBUTTONDOWN,MouseX,MouseY);
        //Buttons
        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]&&MouseY<Button[3]))
        {
            Contact_BTN=true;
            MouseX=-1;
            MouseY=-1;
            RandomLOC();
            DrawPlayers();
            DrawTracker();
            ContactBTN();

        }
        else CreateBTN(0,Green,"CONTACTS");


        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*1)&&MouseY<Button[3]+(BTNdif*1)))
        {
            MouseX=-1;
            MouseY=-1;
            RandomBTN();
        }
        else CreateBTN(1,Green,"RANDOM");

        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*2)&&MouseY<Button[3]+(BTNdif*2)))
        {
            MouseX=-1;
            MouseY=-1;
            ObjectBTN();
        }
        else CreateBTN(2,Green,"OBJECTS");

        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*3)&&MouseY<Button[3]+(BTNdif*3)))
        {
            MouseX=-1;
            MouseY=-1;
            TrackerBTN();
        }
        else CreateBTN(3,Green,"TRACKER");

        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*4)&&MouseY<Button[3]+(BTNdif*4)))
        {
            MouseX=-1;
            MouseY=-1;
            StartBTN();
        }
        else CreateBTN(4,Green,"START");

        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*5)&&MouseY<Button[3]+(BTNdif*5)))
        {
            MouseX=-1;
            MouseY=-1;
            sandeep();
        }
        else CreateBTN(5,Green,"CLEAN");

         if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>673&&MouseY<712))
        {
            start();
        }
        else CreateBTN(6,Green,"MENU");
        //End Buttons
	}

}


void DrawPlayers()
{
    //Function for Draw All Player Using There Location
    //X:0 Y:1
    int TakeNum;
    if(Contact_BTN)
        TakeNum=m;
    else TakeNum=num;

     for(int i=0;i<TakeNum;i++)
   {
        char C[2];
        C[0]=48+i;
        setfillstyle(9,COLOR(rand()%255,rand()%255,rand()%255)*rand() );
        outtextxy(Player[i][0]-2,Player[i][1]-2,C);
        circle(Player[i][0],Player[i][1],15);
        floodfill(Player[i][0],Player[i][1],15);


    }

}
void DrawTracker()
{
    // Draw Tracker On Screen
    setfillstyle(HATCH_FILL,8);
    circle(Tracker[0],Tracker[1],20);
    floodfill(Tracker[0],Tracker[1],15);

}
void FindDistance()
{
    // Distance B/w Tracker and Player
    // Store Distance in Array of Distance
    for(int i=0;i<Index;i++)
    {
        Distance[i]=sqrt(pow(Player[i][0]-Tracker[0],2)+pow(Player[i][1]-Tracker[1],2));
        cout<<Player[i][0]<<", "<<Player[i][1]<<" : "<<Distance[i]<<endl;
    }
}

void FindSmallDistance()
{
    // Find Smallest Distance From Distance Array
    // Get The Position of That Location

    float smallLoc=Distance[0];
    Position=0;

    for(int i=1;i<Index;i++)
    {
        if(smallLoc>Distance[i])
        {
            smallLoc=Distance[i];
            Position=i;
        }

    }
cout<<"Smallest Location :"<<smallLoc<<endl;
cout<<"Position : "<< Position<<endl;
}
void DrawPath()
{
    // Draw Path From Tracker to Player That Position We Have
    line(Tracker[0],Tracker[1],Player[Position][0],Player[Position][1]);
}
void ChangeTrackerLocation()
{
    // Change Location From Tracker to Player Location
    Tracker[0]=Player[Position][0];
    Tracker[1]=Player[Position][1];
    cout << "Tracker Location Change"<<endl;

}
void RemoveLoction()
{
    for(int i=Position;i<Index-1;i++)
    {
        Player[i][0]=Player[i+1][0];
        Player[i][1]=Player[i+1][1];
    }

}
void RandomLOC()
{

    srand(time(0));
    for(int i=0;i<num;i++)
    {

        int x=rand()%MenuLayout[0]-10;
        int y=rand()%MenuLayout[1]-10;
        if(x<10)
            Player[i][0]=x+20;
        else
            Player[i][0]=x;
        if(y<10)
            Player[i][1]=y+20;
        else
            Player[i][1]=y;


    }

}

void DrawMenu()
{

        readimagefile("Mapper.jpg",MenuLayout[0],0,1366,766);
    //End Menu Layout
        CreateBTN(0,Green,"CONTACTS");
        Random_BTN?CreateBTN(1,Green,"STOP"):CreateBTN(1,Green,"RANDOM");
        CreateBTN(2,Green,"OBJECTS");
        CreateBTN(3,Green,"TRACKER");
        Start_BTN?CreateBTN(4,Green,"STOP"):CreateBTN(4,Green,"START");
        CreateBTN(5,Green,"CLEAN");
        CreateBTN(6,Green,"MENU");

    //End SET TRACKET POSITION

}
void CreateBTN(int BTN_no,int BTN_COLOR,char BTN_TEXT[10])
{

    btnclr;
    if(BTN_no==6)
    {
        outtextxy(Button[0]+30,673+12,BTN_TEXT);
    }
    else{outtextxy(Button[0]+30,Button[1]+(BTNdif*BTN_no)+12,BTN_TEXT);}
    setbkcolor(0);


}

void RandomBTN()
{
    Random_BTN=true;
    Start_BTN=false;
    Contact_BTN=false;
    cleardevice();
    DrawMenu();
    while(true)
    {


        Index = num;
        RandomLOC();
        DrawPlayers();


        for(int i=0;i<num;i++)
        {
            getmouseclick(WM_LBUTTONDOWN,MouseX,MouseY);
            if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*1)&&MouseY<Button[3]+(BTNdif*1)))
            {
                MouseX=-1;
                MouseY=-1;
                Random_BTN=false;
                MenuControls();
            }

            DrawMenu();
            DrawTracker();
            delay(100);
            FindDistance();
            FindSmallDistance();
            DrawPath();

            ChangeTrackerLocation();
            RemoveLoction();
            Index--;
            cout<<"--------------------------------------------"<<endl;
            delay(500);
        }
        cleardevice();

    }
}


void ObjectBTN()
{
    Object_BTN=true;
    Start_BTN=false;
    cleardevice();
    DrawMenu();
    outtext("CLICK ON BLACK SCREEN");
    int ObjectX=-1,ObjectY=-1;
    bool click=true;
    for(int i =0;i<num;i++)
    {
        if(i==num-1)
            Object_BTN=false;
        click=true;
        while(click)
        {

            if(ismouseclick(WM_LBUTTONDOWN))
            { click=false;
                getmouseclick(WM_LBUTTONDOWN,ObjectX,ObjectY);
                if((ObjectX>0&&ObjectX<MenuLayout[0])&&(ObjectY>0&&ObjectY<MenuLayout[1]))
                {
                    Player[i][0]=ObjectX;
                    Player[i][1]=ObjectY;
                    cout<<Player[i][0]<<"::"<<Player[i][1]<<endl;

                    char C[2];
                    C[0]=48+i;
                    setfillstyle(9,1+i);
                    outtextxy(Player[i][0],Player[i][1],C);
                    circle(Player[i][0]-2,Player[i][1]-2,15);
                    floodfill(Player[i][0],Player[i][1],15);
                    ObjectX=-1;
                    ObjectY=-1;
                    break;
                }else click = true;
            }
        }
    }
}

void TrackerBTN()
{
    Tracker_BTN=true;
    Start_BTN=false;
    cleardevice();
    DrawMenu();
    DrawPlayers();
    int ObjectX=-1,ObjectY=-1;
    bool click=true;
    while(click)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {   Tracker_BTN=false;
            click=false;
            getmouseclick(WM_LBUTTONDOWN,ObjectX,ObjectY);
            if((ObjectX>0&&ObjectX<MenuLayout[0])&&(ObjectY>0&&ObjectY<MenuLayout[1]))
            {
                Tracker[0]=ObjectX;
                Tracker[1]=ObjectY;
                DrawTracker();
                ObjectX=-1;
                ObjectY=-1;
            }else click=true;
        }
    }

}

void StartBTN()
{
    Start_BTN=true;
    cleardevice();
    int TakeNum;
    if(Contact_BTN)
        {TakeNum=m;}
    else {TakeNum=num;}

    Index = TakeNum;

    for(int i=0;i<TakeNum;i++)
    {
        getmouseclick(WM_LBUTTONDOWN,MouseX,MouseY);
        if((MouseX>Button[0]&&MouseX<Button[2]+400)&&(MouseY>Button[1]&&MouseY<Button[3]+400))
        {
            MouseX=-1;
            MouseY=-1;
            Start_BTN=false;
            cleardevice();
            sandeep();
        }
        DrawPlayers();
        DrawMenu();
        DrawTracker();
        delay(100);
        FindDistance();
        FindSmallDistance();
        DrawPath();

        ChangeTrackerLocation();
        RemoveLoction();
        Index--;
        cout<<"--------------------------------------------"<<endl;
        delay(500);
    }
    Contact_BTN=false;
    sandeep();
}
void GetDetails(int x,int y)
{  if(x>-1&&y>-1&&x<MenuLayout[0]-210&&y<MenuLayout[1]-150)
   {
       for(int i=0;i<num;i++)
       {
           if(Player[i][0]>x-15&&Player[i][0]<x+15&&Player[i][1]>y-15&&Player[i][1]<y+15)
           {
                cleardevice();
                DrawMenu();
                DrawPlayers();
                DrawTracker();
                line(Tracker[0],Tracker[1],Player[i][0],Player[i][1]);
                setcolor(AppleRed);
                setfillstyle(10,RoyalBlue);
                rectangle(Player[i][0],Player[i][1],Player[i][0]+200,Player[i][1]+140);
                floodfill(x+20,y+20,AppleRed);
                setcolor(15);
                x=Player[i][0]+10;
                u=n[i];
                for(j=0;j<u.length();j++)
                {
                    c=u[j];
                    outtextxy(x,Player[i][1]+20,&c);
                    x+=12;
                }
                x=Player[i][0]+10;
                u=p[i];
                for(j=0;j<u.length();j++)
                {
                    c=u[j];
                    outtextxy(x,Player[i][1]+50,&c);
                    x+=12;
                }
                x=Player[i][0]+10;
                u=em[i];
                for(j=0;j<u.length();j++)
                {
                    c=u[j];
                    outtextxy(x,Player[i][1]+80,&c);
                    x+=12;
                }
                int getdisnum=0;
                int getdis=  sqrt(pow(Player[i][0]-Tracker[0],2)+pow(Player[i][1]-Tracker[1],2));
                x=Player[i][0]+38;
                char putnum[2];
                while(getdis>0)
                {
                    getdisnum=getdis%10;
                    putnum[0]=48+getdisnum;
                    outtextxy(x,Player[i][1]+110,putnum);
                    x-=12;
                    getdis/=10;
                }
           }
       }

    }else if(x<MenuLayout[0]&&y<MenuLayout[1])
        {
            for(int i=0;i<num;i++)
           {
               if(Player[i][0]>x-15&&Player[i][0]<x+15&&Player[i][1]>y-15&&Player[i][1]<y+15)
               {

                    cleardevice();
                    DrawMenu();
                    DrawPlayers();
                    DrawTracker();
                    line(Tracker[0],Tracker[1],Player[i][0],Player[i][1]);
                    setcolor(AppleRed);
                    setfillstyle(10,RoyalBlue);
                    rectangle(Player[i][0]-200,Player[i][1]-140,Player[i][0],Player[i][1]);
                    floodfill(x-200+20,y-150+20,AppleRed);
                    setcolor(15);
                    x=Player[i][0]-200+10;
                    u=n[i];
                    for(j=0;j<u.length();j++)
                    {
                        c=u[j];
                        outtextxy(x,Player[i][1]-150+20,&c);
                        x+=12;
                    }
                    x=Player[i][0]-200+10;
                    u=p[i];
                    for(j=0;j<u.length();j++)
                    {
                        c=u[j];
                        outtextxy(x,Player[i][1]-150+50,&c);
                        x+=12;
                    }
                    x=Player[i][0]-200+10;
                    u=em[i];
                    for(j=0;j<u.length();j++)
                    {
                        c=u[j];
                        outtextxy(x,Player[i][1]-150+80,&c);
                        x+=12;
                    }
                    int getdisnum=0;
                    int getdis= sqrt(pow(Player[i][0]-Tracker[0],2)+pow(Player[i][1]-Tracker[1],2));
                    x=Player[i][0]-200+38;
                    char putnum[2];
                    while(getdis>0)
                    {   getdisnum=getdis%10;
                        putnum[0]=48+getdisnum;
                        outtextxy(x,Player[i][1]-150+110,putnum);
                        x-=12;
                        getdis/=10;
                    }
               }
           }
        }
}
void ContactBTN()
{
    while(Contact_BTN)
    {
        getmouseclick(WM_MOUSEHOVER,MouseX,MouseY);
        GetDetails(MouseX,MouseY);
        //Buttons
        getmouseclick(WM_LBUTTONDOWN,MouseX,MouseY);
        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*1)&&MouseY<Button[3]+(BTNdif*1)))
        {
            MouseX=-1;
            MouseY=-1;
            RandomBTN();
        }
        else CreateBTN(1,Green,"RANDOM");
        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*2)&&MouseY<Button[3]+(BTNdif*2)))
        {
            MouseX=-1;
            MouseY=-1;
            ObjectBTN();
        }
        else CreateBTN(2,Green,"OBJECTS");
        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*3)&&MouseY<Button[3]+(BTNdif*3)))
        {
            MouseX=-1;
            MouseY=-1;
            TrackerBTN();
        }
        else CreateBTN(3,Green,"TRACKER");
        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*4)&&MouseY<Button[3]+(BTNdif*4)))
        {
            MouseX=-1;
            MouseY=-1;
            StartBTN();
        }
        else CreateBTN(4,Green,"START");
        if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>Button[1]+(BTNdif*5)&&MouseY<Button[3]+(BTNdif*5)))
        {
            MouseX=-1;
            MouseY=-1;
            sandeep();
        }
        else CreateBTN(5,Green,"CLEAN");
         if((MouseX>Button[0]&&MouseX<Button[2])&&(MouseY>673&&MouseY<712))
        {
            start();
        }
        else CreateBTN(6,Green,"MENU");
    }
}
