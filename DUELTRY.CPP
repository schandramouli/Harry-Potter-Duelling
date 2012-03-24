#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


void playgame();
void startplay();
void how();
void youcru();
void cheats();
void attackback();

int defeated=0,expel=1,rt,prvar=1,youdefeated=0,dh=1,youexpel=42,imperio=42;
void load()
{
int perc;
gotoxy(35,13);
cout<<"LOADING";
for(int i=0;i<360;i++)
{
perc=(i*5)/18;
gotoxy(37,14);
cout<<perc<<"%";
for(int j=0;j<10;j++)
{
arc(300,200,i,i+2,42+j);
delay(5);
}
}
clearviewport();
}


void deletespell()
{
for(int del=0;del<80;del++)
{
gotoxy(del,1);
cout<<" ";
}
}



void bigl()
{
  setcolor(15);
 circle(75,270,20);
 line(75,290,75,390);
 line(75,390,45,440);
 line(75,390,105,440);
 line(75,330,105,310);
 setcolor(6);
 line(105,310,145,310);
}
void bigr()
{
  setcolor(15);
 circle(550,270,20);
 line(550,290,550,390);
 line(550,390,520,440);
 line(550,390,580,440);
 line(550,330,520,310);
 setcolor(6);
 line(520,310,480,310);
}

void biglf()
{            setcolor(15);
circle(30,450,20);
   line(50,450,150,450);
   line(150,450,180,430);
   line(150,450,180,470);
   line(80,450,120,430);
   line(80,450,120,470);
}
void bigrf()
{
 setcolor(15);
circle(600,450,20);
 line(580,450,480,450);
 line(480,450,460,420);
 line(480,450,460,480);
 line(540,450,510,460);
 line(540,450,510,440);
}

void bigld()
{
  setcolor(15);
 circle(75,270,20);
 line(75,290,75,390);
 line(75,390,45,440);
 line(75,390,105,440);
 line(75,330,105,310);
 }
void bigrd()
{
  setcolor(15);
 circle(550,270,20);
 line(550,290,550,390);
 line(550,390,520,440);
 line(550,390,580,440);
 line(550,330,520,310);

}

void firstmenu()
{
int cho;
gotoxy(1,1);
   cout<<"\t\t\tWELCOME TO DUELLING";
   cout<<"\n1.Play\n2.How To Play\n0.Exit";
   cout<<"\n\n\n\nExclusively For New Users: Please Read The Instructions Before You Start Playing\nOtherwise You May Not be Able To Play The Game\n";
   cin>>cho;
   switch(cho)
   {
   case 1: startplay();
   break;
   case 2: how();
   break;
   case 0: exit(0);
   break;
   case 42: cheats();
   break;
   default: cout<<"Wrong Choice Entered"; exit(0);
   }
 }
 int you,enemy,y,e,ye,sp;
 char str[30];
void startplay()
{
clearviewport();
gotoxy(1,1);
cout<<"\n1.Lord Voldemort\n2.Harry Potter\n3.Albus Dumbledore\n4.Minerva Mcgonagall\n5.Severus Snape\n6.Remus Lupin\n7.Fred Weasley\n8.George Weasley\n9.Hermione Granger\n10.Ronald Weasley\n11.Draco Malfoy\n12.Crabbe\n13.Goyle\n14.Luna Lovegood\n15.Ginny Weasley";
cout<<"\n\nChoose Whom You Want To Be :   ";
cin>>you;
cout<<"\n\nChoose Your Enemy :   ";
cin>>enemy;
clearviewport();
if(you==enemy)
{
gotoxy(1,1);
cout<<"How Can You And Your Enemy Be Same, Idiot";
getch();
playgame();
}

gotoxy(1,10);
switch(you)
{
case 1: cout<<"Lord Voldemort";
break;
case 3: cout<<"Albus Dumbledore";
break;
case 4: cout<<"Minerva Mcgonagall";
break;
case 5:cout<<"Severus Snape";
break;
case 6:cout<<"Remus Lupin";
break;
case 7:cout<<"Fred Weasley";
break;
case 8:cout<<"George Weasley";
break;
case 9:cout<<"Hermione Granger";
break;
case 2:cout<<"Harry Potter";
break;
case 12:cout<<"Crabbe";
break;
case 10:cout<<"Ronald Weasley";
break;
case 11:cout<<"Draco Malfoy";
break;
case 13:cout<<"Goyle";
break;
case 14: cout<<"Luna Lovegood";
break;
case 15: cout<<"Ginny Weasley";
break;
default:cout<<"Wrong Choice Entered";
exit(0);
break;
}
gotoxy(60,10);
switch(enemy)
{
case 1: cout<<"Lord Voldemort";   rt=0;
break;
case 3: cout<<"Albus Dumbledore";      rt=0;
break;
case 4: cout<<"Minerva Mcgonagall";    rt=1;
break;
case 5:cout<<"Severus Snape";     rt=1;
break;
case 6:cout<<"Remus Lupin";  rt=1;
break;
case 7:cout<<"Fred Weasley";    rt=2;
break;
case 8:cout<<"George Weasley";       rt=2;
break;
case 9:cout<<"Hermione Granger";      rt=2;
break;
case 2:cout<<"Harry Potter";      rt=2;
break;
case 12:cout<<"Crabbe";     rt=5;
break;
case 10:cout<<"Ronald Weasley";  rt=3;
break;
case 11:cout<<"Draco Malfoy";    rt=3;
break;
case 13:cout<<"Goyle";         rt=5;
break;
case 14: cout<<"Luna Lovegood"; rt=3;
break;
case 15: cout<<"Ginny Weasley";     rt=3;
break;
default:cout<<"Wrong Choice Entered";
exit(0);
break;
}
}
void how()
{
clearviewport();
gotoxy(1,1);
cout<<"\nThis is a Duelling Game and you Should play this game Only if you are good at HARRY POTTER Stories";
cout<<"\nIn this Game You'll have to select your player and your enemy first\nThe Enemy Chosen will not be much different from others but the powerful ones like \nThe One Who Must Not Be Named is very powerful and will kill you in a second,so beware.\nAs soon as 3 count is complete before the duel you will have to write the spell with exact spelling,\n and only those which are recognised by Harry Potter Series(I Have Added many but not all)";
cout<<"\n This is all I can tell";
cout<<"\n\nNext  (Press A Key)";
getch();
clearviewport();
gotoxy(1,1);
cout<<"As Soon As You select The players\n You would have to write the spells\n";
cout<<"\nThe Spells Used Here Are : - \n\navada kedavra\nimperio\ncrucio\nserpensortia\nconfringo\n3d(Disapparate)\nexpelliarmus\nstupefy\nprotego\ndisillusionment  etc.";
cout<<"\n\nHint for 3d:- For Disapparating, \nEnter 3d and then enter the coordinates(better results for (490,250))\n";
cout<<"\n\n\nGet Back To Play";
getch();
clearviewport();
firstmenu();
}
void eneconfringo();
void enecru();
void eneex();
void ak()
{
for(int i=0,j=310;i<400;i+=10)
	{
	bigl();
	bigr();

	if(prvar==0)
	{
	setcolor(15);
	line(300,200,300,450);
	}



	setcolor(2) ;

	line(i+100,j,i+180,j);
	clearviewport();
	}
   bigrf();
   bigl();
defeated=1;

 }

void ex()
{
if(prvar==0)
{
setcolor(15);
line(300,200,300,450);
if(expel==1)
{
 for(int i=0,j=300;i<120;i+=10)
	{

	bigl();
	bigr();
	setcolor(15);
        line(300,200,300,450);
	setcolor(4) ;
	line(i+100,j,i+180,j);
	clearviewport();
	}
    setcolor(15);
line(300,200,300,450);
}
}
else
{
if(expel==1)
{
eneex();
}
expel=0;
}
}

void cheats()
{
char c[40];
clearviewport();
gotoxy(25,5);
cout<<" CHEATS \n";
cout<<"\n\nEnter Your Cheat\n";
for(int i=0;i<40;i++)
{
c[i]=getch();
cout<<"*";
if(c[i]==13)
break;
}
c[i]=0;

if(strcmpi(c,"deathlyhallows")==0)
{dh=0;  clearviewport(); cout<<"Cheat Activated"; getch(); clearviewport();   playgame();}
else
{clearviewport(); playgame();}

}

void pr();

void ag()
{
}
void con()
{
if(prvar==0)
{
 for(int i=0,j=300;i<120;i+=10)
	{

	bigl();
	bigr();
	setcolor(15);
        line(300,200,300,450);
	setcolor(14) ;
	line(i+100,j,i+180,j);
	clearviewport();
	}
    setcolor(15);
line(300,200,300,450);
}
else
{
for(int i=0,j=310;i<400;i+=10)
	{
	bigl();
	bigr();
	setcolor(14) ;

	line(i+100,j,i+180,j);
	clearviewport();
	}

eneconfringo();
}
}
void cru()
{
enecru();
}

void imp()
{
if(prvar==0)
{
 for(int i=0,j=300;i<120;i+=10)
	{

	bigl();
	bigr();
	setcolor(15);
	line(300,200,300,450);
	setcolor(9) ;
	line(i+100,j,i+180,j);
	clearviewport();
	}
bigl();
bigr();
    setcolor(15);
line(300,200,300,450);
}
else
{
for(int i=0,j=310;i<400;i+=10)
	{

	bigl();
	bigr();
	setcolor(9) ;
	line(i+100,j,i+180,j);
	clearviewport();
	}
bigl();
bigr();
imperio=0;
rt=rt+5;
if(expel!=0)
{
attackback();
}
}
}


void stup()
{
if(prvar==0)
{
 for(int i=0,j=300;i<120;i+=10)
	{

	bigl();
	bigr();
	setcolor(15);
	line(300,200,300,450);
	setcolor(4) ;
	line(i+100,j,i+180,j);
	clearviewport();
	}
    setcolor(15);
line(300,200,300,450);
}
else
{
for(int i=0,j=310;i<400;i+=10)
	{
	bigl();
	bigr();
	setcolor(4) ;
	line(i+100,j,i+180,j);
	clearviewport();
	}
rt+=10;
}
}


void attackback();
void ep(){}
void snake()
{
if(prvar==0)
{
 for(int i=0;i<155;i+=10)
	{

	bigl();
	bigr();
	setcolor(15);
	line(300,200,300,450);
	bigl();
     bigr();
    setcolor(2);
    arc(140+i,280,90,250,20);
    arc(134+i,305,-90,90,5);
    arc(110+i,310,0,180,10);
    line(134+i,310,120+i,310);
    line(100+i,310,50+i,310);
    setcolor(4);
    line(140+i,260,145+i,265);
    line(140+i,260,145+i,255);
    clearviewport();
 }

    setcolor(15);
line(300,200,300,450);
}

else
{
for(int i=0;i<400;i+=10)
    {

     clearviewport();

     bigl();
     bigr();
    setcolor(2);
    arc(140+i,280,90,250,20);
    arc(134+i,305,-90,90,5);
    arc(110+i,310,0,180,10);
    line(134+i,310,120+i,310);
    line(100+i,310,50+i,310);
    setcolor(4);
    line(140+i,260,145+i,265);
    line(140+i,260,145+i,255);

    }
     clearviewport();

 bigl();
 bigrf();
defeated=1;

}
}
void youdis()
{
deletespell();
int i,j;
gotoxy(40,1);
cin>>i;
gotoxy(45,1);
cin>>j;
clearviewport();
bigr();
setcolor(15);
  circle(i+20,j+20,20);
  line(i+20,j+40,i+20,j+140);
  line(i+20,j+140,i+50,j+190);
  line(i+20,j+140,i-10,j+190);
  line(i+20,j+80,i+50,j+60);
  setcolor(6);
  line(i+50,j+60,i+90,j+60);
if(i==490&&j==250)
{
gotoxy(55,10);
cout<<"Beautiful Kiss";
}
else
{
gotoxy(1,1);
cout<<"Ha Ha I Have Disapparated";
}
getch();
clearviewport();
}

void youdisillu()
{
clearviewport();
if(expel==0)
{
bigrd();
}
else
bigr();
if(prvar==0)
{
setcolor(15);
line(300,200,300,450);
}
char ill=getch();
while(ill!=13)
{
ill = getch();
}
}


void checkspell(char s[])
{
if(stricmp(s,"avada kedavra")==0)
ak();
else if(strcmpi(s,"expelliarmus")==0)
ex();
else if(strcmpi(s,"protego")==0)
pr();
else if(strcmpi(s,"aguamenti")==0)
ag();
else if(strcmpi(s,"confringo")==0)
con();
else if(strcmpi(s,"crucio")==0)
cru();
else if(strcmpi(s,"imperio")==0)
imp();
else if(strcmpi(s,"stupefy")==0)
stup();
else if(strcmpi(s,"expecto patronum")==0)
ep();
else if(strcmpi(s,"serpensortia")==0)
snake();
else if(strcmpi(s,"3D")==0)
youdis();
else if(strcmpi(s,"disillusionment")==0)
youdisillu();
else
cout<<"Invalid Spell";

}
void enedis()
{
clearviewport();
bigl();
randomize();
int i=(rand()%450),j=(rand()%300);
setcolor(15);
circle(i+20,j+20,20);
  line(i+20,j+40,i+20,j+140);
  line(i+20,j+140,i+50,j+190);
  line(i+20,j+140,i-10,j+190);
  line(i+20,j+80,i-10,j+60);
  setcolor(6);
  line(i-10,j+60,i-50,j+60);
gotoxy(1,50);
cout<<"Your Enemy Has Disapparated";
delay(2000);
clearviewport();
}
void impenedis()
{
deletespell();
int i,j;
gotoxy(40,1);
cin>>i;
gotoxy(45,1);
cin>>j;
clearviewport();
bigl();
setcolor(15);
circle(i+20,j+20,20);
  line(i+20,j+40,i+20,j+140);
  line(i+20,j+140,i+50,j+190);
  line(i+20,j+140,i-10,j+190);
  line(i+20,j+80,i-10,j+60);
  setcolor(6);
  line(i-10,j+60,i-50,j+60);
if(i==95&&j==250)
{
cout<<"Beautiful Kiss";
getch();
}
else
{
cout<<"You Have Made Your Enemy To Disapparate";
getch();
}
clearviewport();
}
void eneconfringo()
{
for(int i=0,j=0;i<60;i++,j++)
       {
	bigl();
	putpixel(450+i,300+j,15);
	putpixel(450-i,300-j,15);
	putpixel(450+i,300,15);
	putpixel(450,300+j,15);
	putpixel(450+i,250+j,15);
	putpixel(450-i,250+j,15);
	putpixel(450-i,250-j,15);
	putpixel(400-i,320-j,15);
	putpixel(400+i,300+j,15);
	putpixel(400-i,310+j,15);
	putpixel(500+i,310-j,15);
	putpixel(500+2*i,310-2*j,15);
	putpixel(400+3*i,300+2*j,15);
	putpixel(400+2*i,400-4*j,15);
	putpixel(400+3*i,300-j,15);
	putpixel(400-2*i,310-4*j,15);
	putpixel(400+i,310-2*j,15);
	putpixel(400+3*i,200+4*j,15);
	clearviewport();
       }
    defeated=1;
bigl();
}

void mytime(int y)
{
gotoxy(1,1);
cout<<"Write Your Spell";
char str[40];
int mytimevar=y;
int i=0,j=0;
for(int x=0;x<20;x++)
{
while(!kbhit()&&mytimevar>0)
{
delay(2);
j++;
if(j==600)
{
j=0;
mytimevar--;
}
}

if(mytimevar==0)
{
if(expel!=0)
{
attackback();
}
break;
}
str[x]=getch();
cout<<str[x];
if(str[x]==13)
{
break;
}
}
str[x]=0;

if(youexpel!=0)
{
checkspell(str);
}

}

void pr()
{
prvar=0;
setcolor(15);
line(300,200,300,450);
}


void eneex()
{
 for(int i=0,j=300;i<420;i+=10)
	{
	bigl();
	bigr();
	setcolor(4) ;

	line(i+100,j,i+180,j);
	clearviewport();
	}
setcolor(6);

for(i=440,j=400;i>240;i-=2,j-=2)
 {
 bigl();
 bigrd();
 setcolor(6);
line(i,j-100,i+60,j-100);
clearviewport();
}
   j-=100;

for(i=240;i>100;i-=2,j+=2)
 {
 bigl();
 bigrd();
  setcolor(6);
  line(i,j,i+60,j);
  clearviewport();
   }
   bigl();
   bigrd();

}




void biglcru()
{
setcolor(15);

for(int i=0;i<20;i++)
   {
      setcolor(15);
      circle(20,200,20);
      line(35,215,120,270);

if(i%2==0)
      {

      line(60,230,80,200);
      line(60,230,60,260);
      line(120,270,140,250);
      line(120,270,130,290);
      bigr();
      delay(250);
      }
      else
      {
      setcolor(15);
      line(60,230,50,200);
      line(60,230,40,240);
      line(120,270,160,260);
      line(120,270,140,300);
      bigr();
      delay(250);
      }
      clearviewport();

}

}

void bigrcru()
{
for(int i=0;i<20;i++)
   {
   setcolor(15);
   circle(600,200,20);
   line(581,210,490,260);
   if(i%2==0)
   {
   line(560,220,520,215);
   line(560,220,550,250);
   line(490,260,470,250);
   line(490,260,485,285);
   bigl();
   delay(250);

   }
   else
   {
   line(560,220,550,200);
   line(560,220,580,230);
   line(490,260,460,270);
   line(490,260,470,280);
   bigl();
   delay(250);

   }

      clearviewport();

  }
}
void enecru()
{

int i,j;

if(prvar==0)
{
 for(int i=0,j=300;i<120;i+=10)
	{

	bigl();
	bigr();
	setcolor(15);
        line(300,200,300,450);
	setcolor(1) ;
	line(i+100,j,i+180,j);
	clearviewport();
	}
    setcolor(15);
line(300,200,300,450);
}
else
{
for(i=105,j=310;i<450;i+=10)
{

	delay(5);
	bigl();
	bigr();
	setcolor(1);
       line(i,j,i+80,j);
     clearviewport();
     }
   bigl();
   bigrcru();
}
}



		   void youconfringo();
		  void yousnake();
void playgame()
{
defeated=0,expel=1,rt,prvar=1,youdefeated=0,youexpel=42,imperio=42;

clearviewport();
   firstmenu();

   do
   {
      deletespell();
	if((expel!=0)&&(youexpel!=0))
	{
	bigl();
	bigr();
	}
	else if((expel==0)&&(youexpel!=0))
	{
	bigl();
	bigrd();
	}
	else
	{
	bigld();
	bigr();
	}
	mytime(rt);
   }while(defeated!=1);
   getch();

}



void main()
{
 int gdriver = DETECT, gmode, errorcode;

      initgraph(&gdriver, &gmode, "e:\\praveen\\tc\\bgi");

errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
// load();
 clearviewport();
 gotoxy(1,1);
 cout<<"Checking Hard Disk Files";
 for(int check=0;check<5;check++)
 {
 cout<<".";
 delay(100);
 }
 clearviewport();
 gotoxy(1,1);
 cout<<"Everything OK\nStart Play";
 getch();
 for(int game=42;;game++)
 {
 playgame();
 }
}


/*Now Coming Are the Spells Which Your Enemy will do*/


void youak()
{

for(int i=400,j=310;i>0;i-=10)
{
if(prvar==0)
{
setcolor(15);
line(300,200,300,450);
}
setcolor(2) ;
line(i+100,j,i+180,j);
if(youexpel==0)
{
bigld();
}
else
{
bigl();
}
bigr();
clearviewport();
}
bigr();
biglf();
youdefeated=1;
}


void youex()
{
if(prvar==0)
{
for(int i=500,j=310;i>300;i-=10)
	{
	if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}
	bigr();
	setcolor(15);
	line(300,200,300,450);
	setcolor(4);
	line(i,j,i+80,j);
	clearviewport();
	}
setcolor(15);
line(300,200,300,450);
}

else
{
if(youexpel==0)
{
for(int i=500,j=310;i>40;i-=10)
	{
	bigld();
	bigr();
	setcolor(4);
	line(i,j,i+80,j);
	clearviewport();
	}
}

else
{
for(int i=500,j=310;i>40;i-=10)
	{
	bigl();
	bigr();
	setcolor(4);
	line(i,j,i+80,j);
	clearviewport();
	}

for(i=0,j=400;i<240;i+=2,j-=2)
 {

 bigr();
 bigld();
 setcolor(6) ;
line(i,j-100,i+60,j-100);
clearviewport();
}

   j-=100;

for(i=240;i<440;i+=2,j+=2)
 {
  setcolor(6);
  line(i,j,i+60,j);
  clearviewport();
   bigr();
   bigld();
 }
youexpel=0;

}
}

}


void youcru()
{
if(prvar==0)
{
for(int i=500,j=310;i>300;i-=10)
	{
	if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}
	bigr();
	setcolor(15);
	line(300,200,300,450);
	setcolor(1);
	line(i,j,i+80,j);
	clearviewport();
	}
setcolor(15);
line(300,200,300,450);
}

else
{

	for(int i=500,j=310;i>20;i-=10)
	{
	bigr();
	if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}
	setcolor(1);
	line(i,j,i+80,j);
	clearviewport();
	}
    biglcru();
    bigr();
    if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}


}

}
void youconfringo()
{
if(prvar==0)
{
for(int i=500,j=310;i>300;i-=10)
	{
	if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}

	bigr();
	setcolor(15);
	line(300,200,300,450);
	setcolor(14);
	line(i,j,i+80,j);
	clearviewport();
	}
setcolor(15);
line(300,200,300,450);
if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}

bigr();
}

else
{
for(int i=500,j=310;i>20;i-=10)
	{
	bigr();
	if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}

	setcolor(14);
	line(i,j,i+80,j);
	clearviewport();
	}

for(i=0,j=0;i<60;i++,j++)

       {
	bigr();
	putpixel(50+i,300+j,15);
	putpixel(50-i,300-j,15);
	putpixel(50+i,300,15);
	putpixel(50,300+j,15);
	putpixel(50+i,250+j,15);
	putpixel(50-i,250+j,15);
	putpixel(50-i,250-j,15);
	putpixel(100-i,320-j,15);
	putpixel(100+i,300+j,15);
	putpixel(100-i,310+j,15);
	putpixel(75+i,310-j,15);
	putpixel(75+2*i,310-2*j,15);
	putpixel(100+3*i,300+2*j,15);
	putpixel(100+2*i,400-4*j,15);
	putpixel(100+3*i,300-j,15);
	putpixel(100-2*i,310-4*j,15);
	putpixel(100+i,310-2*j,15);
	putpixel(100+3*i,200+4*j,15);
	clearviewport();
}
youdefeated=1;

}
}


void youak();
void youex();



void yousnake()
{
if(prvar==0)
{
for(int i=400;i>173;i-=10)
    {
    bigr();
    if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}

    setcolor(15);
    line(300,200,300,450);
    setcolor(2);
    arc(140+i,280,-90,100,20);
    arc(139+i,305,90,250,5);

    arc(169+i,310,0,180,10);

    line(138+i,310,159+i,310);
    line(179+i,310,220+i,310);
    setcolor(4);
    line(137+i,260,127+i,265);
    line(137+i,260,127+i,255);

    clearviewport();
    }
setcolor(15);
line(300,200,300,450);
}
else
{
for(int i=400;i>10;i-=10)
    {
    bigr();
    if(youexpel==0)
	{
	bigld();
	}
	else
	{
	bigl();
	}


    setcolor(2);
    arc(140+i,280,-90,100,20);
    arc(139+i,305,90,250,5);

    arc(169+i,310,0,180,10);

    line(138+i,310,159+i,310);
    line(179+i,310,220+i,310);
    setcolor(4);
    line(137+i,260,127+i,265);
    line(137+i,260,127+i,255);

    clearviewport();
    }

bigr();
biglf();
}

}
int x;

void funrand()
{
struct time t;
gettime(&t);
x=t.ti_hund;
}

int mod;

void attackback()
{
if(imperio!=0)
{
funrand();
mod=x%8;
}
else
{
deletespell();
char strimp[40];
gotoxy(1,1);
cout<<"Write Your Spell    :     ";
for(int x=0;x<40;x++)
{
strimp[x]=getch();
cout<<strimp[x];
if(strimp[x]==13)
{
break;
}
}

strimp[x]=0;
if(strcmpi(strimp,"do avada kedavra")==0) {mod=0;          imperio=42;  }
else if(strcmpi(strimp,"do expelliarmus")==0) {mod=1;     imperio=42;     }
else if(strcmpi(strimp,"do crucio")==0) {mod=2;           imperio=42;     }
else if(strcmpi(strimp,"do confringo")==0) {mod=4;        imperio=42;     }
else if(strcmpi(strimp,"do serpensortia")==0) {mod=5;     imperio=42;     }
else if(strcmpi(strimp,"do protego")==0) {mod=6;          imperio=42;     }
else if(strcmpi(strimp,"do 3d")==0) {mod=8;          imperio=42;     }
else {attackback();}
}


switch(mod)
{
case 0: youak();   if(dh!=0) {getch();  playgame();}  if(dh==0) { clearviewport();} if(prvar==0) {pr();}
break;
case 1: youex();
break;
case 2: youcru();
break;
case 3: youak();   if(dh!=0) {getch();  playgame();}  if(dh==0) { clearviewport();} if(prvar==0) {pr();}
break;
case 4: youconfringo();   if((prvar!=0)&&(dh!=0)) {getch(); playgame();}  if(dh==0) { clearviewport();} if(prvar==0) {pr();}
break;
case 5: yousnake(); if((prvar!=0)&&(dh!=0)) {getch(); playgame();} if(dh==0) { clearviewport();} if(prvar==0) {pr();}
break;
case 6: pr();
break;
case 7: enedis();
break;
case 8: impenedis();
break;
default:
break;
}
}























