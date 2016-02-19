#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
int a,i,b,c,d,o[20],bal,r,v,x,y,z,h,p,j;
char user[30],sa[20],xo[1],web[10];
sa[0]=0;
printf("\t\t\t\n\n________________________________________________________________________________\n________________________________________________________________________________\n\n\t\t                THE GADGET STORE");
printf("\n\n________________________________________________________________________________\n________________________________________________________________________________\n");
Sleep(100);
log:
printf("\n\n\n\n\n\n\t\t\t     PLEASE SIGN UP FIRST\n\n");
Sleep(70);
lolz:
printf("\n\n\n\t\t\t        USER NAME\n\n\t\t\t\t");
char command[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\welcome.mp3";
	int status1 = system( command );
gets(user);
system("cls");
printf("\n\n\n\t\t\tENTER YOUR PASSWORD\n\n\t\t\t\t");  //code for *** password
char command1[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\enterpass.mp3";
	int status2 = system( command1 );
for(y=1;y<=3;y++)
{
{
scanf("\t\t\t%s",&sa[y]);
printf("\a");
system("cls");
}
printf("\n\n\n\t\t\tENTER YOUR PASSWORD\n\n\t");
printf("\t\t\t");
for(o[17]=1;o[17]<=y;o[17]++)
{
printf("*");
}
}                                                   //password code close
Sleep(10);
if((sa[1]==55)&&(sa[2]==55)&&(sa[3]==55))          //ASCII value of 7
{
printf("\n\n\n\n\n\n\t\t\tPASSWORD AUTHENTICATED\n\n\t\t\tWelcome %s\n",user);
char command2[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\passaut.mp3";
	int status3 = system( command2 );
Sleep(10);
printf("\n\n\n\n\n\n\t\t\tENTER YOUR BALANCE\n\n\t\t\t    ");
scanf("%d",&p);
system("cls");
map:
printf("     __________\n    |          |                THE GADGET STORE\n    |   /////  |\n    |   |* *|  |\n    |    \\O/   |\n    |    ||    |                                User : %s\n    |  ######  |\n____| ######## |_______________________________________________________________\n    |##########|\t\t                                  Bal. %d\n    |__________|",user,p);
printf("\n\n\n\t\t    WHAT WOULD YOU LIKE TO DO TODAY?\n______________________________________________________________________________",user);
char command3[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\watodo.mp3";
	int status4 = system( command3 );
Sleep(1000);
printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                                \t\t|");Sleep(100);
printf("\n\t|\t\t      1    BUY PHONE          \a\t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t      2    SELL PHONE (services unavailable) \a\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t      3    PHONE COMPARE      \a\t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t      4    NEWS FEED          \a\t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t      5    APP COMPARE        \a\t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t      6    WEB CONNECT        \a\t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n\t|\t\t      7    LOGOUT             \a\t\t\t|");Sleep(100);printf("\n\t|\t\t                              \t\t\t|");Sleep(100);
printf("\n");
scanf("%d",&a);
printf("\a");
system("cls");
if(a==1)
{
printf("\n\n\n\n\n\t\t\tENJOY SHOPPING FROM A WIDE RANGE\n\n");
printf("\n\n\n\n\t\t\tEnter a rough amount in Rupees\n\n\t\t\tRs ");
char command4[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\roughamt.mp3";
	int status5 = system( command4 );
scanf("%d",&r);
system("cls");
if((r>1000)&&(r<=10000))
{
z=1;
}
else if((r>10000)&&(r<=20000))
{
z=2;
}
else if((r>20000)&&(r<=30000))
{
z=3;
}
else if(r>30000)
{
z=4;
}
else if(r<1000)
{
printf("\n\nSorry,\n\n\tYou dont deserve to buy a phone\n\tjust it borrow from someone");
printf("\a");
Sleep(2000);
system("cls");
goto map;
}
for(b=1;b<=10;b++)
{
printf("\n\t\t\tCHOOSE A BRAND :\n\n");
char command5[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\chooseabrand.mp3";
	int status6 = system( command5 );
Sleep(1000);

printf("\n\t\t\t|                              |");printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      1    SONY              \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      2    SAMSUNG           \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      3    HTC               \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      4    NOKIA             \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      5    BLACKBERRY        \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      6    MICROMAX          \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      7    APPLE             \a |");printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n");
scanf("%d",&c);
v=(100*z)+(10*c);
system("cls");
char command99[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\buy.mp3";
	int status99 = system( command99 );
switch(v)                                           //mobile data
{
case 110:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Sony:\n\n\n\t\t\t1 Sony Xperia M\n\n\t\t\t2 Sony Experia E\n\n\t\t\t3 Sony Xperia E1 Dual\n\n\t\t\t4 Sony Experia E1\n\n");
	scanf("%d",&o[0]);
	system("cls");
	printf("\n\n");
	switch(o[0])
	{
		case 1:printf("SONY XPERIA M\n\nOperating System\t\tAndroid v4.1\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 450 x 854 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,550");d=9550;break;
		case 2:printf("SONY XPERIA E\n\nOperating System\t\tAndroid v4.1\nProcessor\t\t\t1 GHz Processor\nCamera\t\t\t\t3.15 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t3.5 inches, 320 x 480 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\t\t\tRs. 5,770");d=5770;break;
		case 3:printf("SONY XPERIA E1 Dual\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tDual Core, 1.2 GHz Processor\nCamera\t\t\t\t3.15 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\t\tRs. 6,912");d=6912;break;
		case 4:printf("SONY XPERIA E1\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tDual Core, 1.2 GHz Processor\nCamera\t\t\t\t3.15 MP Camera\nRAM\t\t\t\t512 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\t\tRs. 6,062");d=6062;break;

	} break; }
case 120:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of samsung:\n\n\t\t\t1 SAMSUNG GALAXY CORE 2\n\n\t\t\t2 SAMSUNG GALAXY S DUOS S7562\n\n\t\t\t3 SAMSUNG GALAXY S DUOS 2 S7582\n\n\t\t\t4 SAMSUNG GALAXY STAR PRO DUOS S7262\n\n\t\t\t5 SAMSUNG GALAXY STAR ADVANCE\n\n\t\t\t6 SAMSUNG GALAXY S DUOS 3\n\n\t\t\t7 SAMSUNG GALAXY STAR DUOS S5282\n\n\t\t\t8 SAMSUNG GALAXY Y S5360");
	scanf("%d",&o[1]);
	system("cls");
	switch(o[1])
	{
		
		case 1:printf("SAMSUNG GALAXY CORE 2\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\t1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t768 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.5 inches, 480 x 800 px display\nSim Slot\t\t\t2 Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64GB\n\nPRICE\t\t\t\t\t\t\t\tRs. 8,620");break;
		case 2:printf("SAMSUNG GALAXY S DUOS S7562\n\nOperating System\t\tAndroid v4.0\nProcessor\t\t\t1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t768 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\t2 Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32GB\n\nPRICE\t\t\t\t\t\t\t\tRs. 8,999");break;
		case 3:printf("SAMSUNG GALAXY S DUOS 2 S7582\n\nOperating System\t\tAndroid v4.2\nProcessor\t\t\t1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t768 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\t2 Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64GB\n\nPRICE\t\t\t\t\t\t\t\tRs. 8,175");break;
		case 4:printf("SAMSUNG GALAXY STAR PRO DUOS S7262	\n\n	Operating System	\t\t	Android v4.1.2	\n	Processor	\t\t\t	1 GHz Processor	\n	Camera	\t\t\t\t	2 MP Camera	\n	RAM	\t\t\t\t	512 MB	\n	Internal Memory	\t\t\t	4 GB	\n	Display	\t\t\t\t	4 inches, 480 x 800 px display	\n	Sim Slot	\t\t\t	1 Sim	\n	Internet	\t\t\t	No 3G	\n	Expandable Memory	\t\t	upto 32GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 5,399");		break;
		case 5:printf("SAMSUNG GALAXY STAR ADVANCE	\n\n	Operating System	\t\t	Android v4.4	\n	Processor	\t\t\t	1.2 GHz Processor	\n	Camera	\t\t\t\t	3 MP Camera with flash	\n	RAM	\t\t\t\t	512 MB	\n	Internal Memory	\t\t\t	4 GB	\n	Display	\t\t\t\t	4.3 inches, 480 x 800 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 32GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 5,999");		break;
		case 6:printf("SAMSUNG GALAXY S DUOS 3	\n\n	Operating System	\t\t	Android v4.4.2	\n	Processor	\t\t\t	1 GHz Processor	\n	Camera	\t\t\t\t	5 MP Camera with flash	\n	RAM	\t\t\t\t	512 MB	\n	Internal Memory	\t\t\t	4 GB	\n	Display	\t\t\t\t	4 inches, 480 x 800 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 32GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 7,004");		break;
		case 7:printf("SAMSUNG GALAXY STAR DUOS S5282	\n\n	Operating System	\t\t	Android v4.1.2	\n	Processor	\t\t\t	1 GHz Processor	\n	Camera	\t\t\t\t	2 MP Camera	\n	RAM	\t\t\t\t	512 MB	\n	Internal Memory	\t\t\t	4 GB	\n	Display	\t\t\t\t	3 inches, 240 x 320 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	NO 3G	\n	Expandable Memory	\t\t	upto 32GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 3,969");		break;
		case 8:printf("SAMSUNG GALAXY Y S5360	\n\n	Operating System	\t\t	Android v2.3	\n	Processor	\t\t\t	832 MHz Processor	\n	Camera	\t\t\t\t	2 MP Camera	\n	RAM	\t\t\t\t	290 MB	\n	Internal Memory	\t\t\t	180 MB	\n	Display	\t\t\t\t	3 inches, 240 x 320 px display	\n	Sim Slot	\t\t\t	1 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 32GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 5,197");		break;		

	} break;    }
case 130:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of HTC:\n\n\t\t\t1 HTC Explorer(Pico) A310e\n\n\t\t\t2 HTC Wildfire S A510e\n\n\t\t\t3 HTC Desire C\n\n\t\t\t4 HTC Desire U\n\n\t\t\t5 HTC Desire 210 dual sim\n\n\t\t\t6 HTC Desire 310\n\n");
	scanf("%d",&o[2]);
	system("cls");
	switch(o[2])
	{
		case 1:printf("HTC EXPLORER(Pico)A310e\n\nOperating System\t\tAndroid v2.3 \nProcessor\t\t\tSingle Core, 600 MHz Processor\nCamera\t\t\t\t3 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t90 MB\nDisplay\t\t\t\t3.2 inches, 320 x 480 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto6\32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,990");d=6990;break;
		case 2:printf("HTC WILDFIRE S A510e\n\nOperating System\t\tAndroid v2.3\nProcessor\t\t\tSingle Core, t600 MHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t512 MB\nDisplay\t\t\t\t3.2 inches, 320 x 480 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,379");d=9379;break;
		case 3:printf("HTC DESIRE C\n\nOperating System\t\tAndroid v4.0\nProcessor\t\t\tSingle Core, 600 MHz Processor\nCamera\t\t\t\t5 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t3.5 inches, 320 x 480 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,990");d=9990;break;
		case 4:printf("HTC DESIRE U\n\nOperating System\t\tAndroid v4.0\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,261");d=9261;break;
		case 5:printf("HTC DESIRE 210 dual sim\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,748");d=6748;break;
		case 6:printf("HTC DESIRE 310n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t5 MP Camer\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.5 inches, 480 x 854 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,480");d=9480;
	} break;    }
case 140:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Nokia\n\n\t\t\t1 Nokia Lumia 630 Dual Sim\n\n\t\t\t2 Nokia Lumia 620\n\n\t\t\t3 Nokia X2 Dual Sim\n\n\t\t\t4 Nokia XL\n\n\t\t\t5 Nokia Lumia 520\n\n\t\t\t6 Nokia 208 Dual Sim\n\n\t\t\t7 Nokia Lumia 635\n\n\t\t\t8 Nokia 515 Dual Sim\n\n\t\t\t9 Nokia E5\n\n");
	scanf("%d",&o[3]);
	system("cls");
	switch(o[3])
	{
		case 1:printf("NOKIA LUMIA 630\n\nOperating System\t\tWindows v8.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.5 inches, 480 x 854 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto128 GB\n\nPRICE\t\t\t\t\t\tRs. 9,439");break;
		case 2:printf("NOKIA LUMIA 620\n\nOperating System\t\tWindows v8(upgradable upto vWP8 Amber)\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t3.8 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 9,994");break;
		case 3:printf("NOKIA X2\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tDual Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.3 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 8,499");break;
		case 4:printf("NOKIA XL\n\nOperating System\t\tAndroid v4.1.2\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t768 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 8,428");break;
		case 5:printf("NOKIA LUMIA 520\n\nOperating System\t\tWindows v8\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 7,400");break;
		case 6:printf("NOKIA 208\n\nOperating System\t\tJava\nCamera\t\t\t\t1.3 MP Camera\nRAM\t\t\t\t64 MB\nInternal Memory\t\t\t256 MB\nDisplay\t\t\t\t2.4 inches, 240 x 320 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,NO Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 3,599");break;
		case 7:printf("NOKIA LUMIA 635\n\nOperating System\t\tWindows v8.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.5 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 10,000");break;
		case 8:printf("NOKIA 515\n\nOperating System\t\tJava\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t64 MB\nInternal Memory\t\t\t256 MB\nDisplay\t\t\t\t2.4 inches, 240 x 320 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,NO Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 8,430");break;
		case 9:printf("NOKIA E5\n\nOperating System\t\tSymbian v9.3\nProcessor\t\t\t600 MHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t256 MB\nInternal Memory\t\t\t250 MB\nDisplay\t\t\t\t2.4 inches, 320 x 240 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,396");break;
	} break;    }
case 150:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of BlackBerry :\n\n\t\t\t1 BlackBerry Curve 9220\n\n\t\t\t2 BlackBerry Curve 9320\n\n");
	scanf("%d",&o[4]);
	system("cls");
	switch(o[4])
	{
		case 1:printf("BLACKBERRY CURVE 9220\n\nOperating System\t\tBlackberry OS, v7.1\nProcessor\t\t\t??? Processor\nCamera\t\t\t\t2 MP\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t512 MB\nDisplay\t\t\t\t2.44 inches, 320 x 240 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\tWi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 7,990");break;
		case 2:printf("BLACKBERRY CURVE 9320\n\nOperating System\t\tBlackberry OS, v7.1\nProcessor\t\t\t??? Processor\nCamera\t\t\t\t3.2 MP with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t512 MB\nDisplay\t\t\t\t2.44 inches, 320 x 240 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,399 ");break;
		} break;    }
case 160:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Micromax:\n\n\t\t\t1 Micromax Canvas Win W121\n\n\t\t\t2 Micromax Bolt A61\n\n\t\t\t3 Micromax Canvas Win W092\n\n\t\t\t4 Micromax X337\n\n\t\t\t5 Micromax Bolt X351\n\n\t\t\t6 Micromax Unite 2 A106\n\n\t\t\t7 Micromax Unite 2 A106(8GB)\n\n\t\t\t8 Micromax Doodle 3 A102\n\n\t\t\t9 Micromax Canvas 2 A120 Colours\n\n\t\t\t10 Micromax Canvas Fire 2 A104\n\n\t\t\t11 Micromax Canvas 2 A120 Colours(8Gb)\n\n\t\t\t12 Micromax Canvas Juice A77\n\n\t\t\t13 Micromax A108 Canvas L\n\n\t\t\t14 Micromax Canvas Unite A092\n\n\t\t\t15 Micromax Canvas 2.2 A114\n\n\t\t\t16 Micromax MAd A94\n\n\t\t\t17 Micromax Bolt A58\n\n\t\t\t18 Micromax Canvas Elanza 2 A121\n\n\t\t\t19 Micromax Bolt A62\n\n\t\t\t20 Micromax Canvas Juice A177\n\n\t\t\t21 Micromax A35 Bolt\n\n\t\t\t22 Micromax Canvas Power A96\n\n");
	scanf("%d",&o[5]);
	system("cls");
	switch(o[5])
	{
		case 1:printf("MICROMAX CANVAS WIN W121\n\nOperating System\t\tWindows v8.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,500");break;
		case 2:printf("MICROMAX BOLT A61\n\nOperating System\t\tAndroid v4.1\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t2 MP Camera with flash\nRAM\t\t\t\t256 MB\nInternal Memory\t\t\t512 MB\nDisplay\t\t\t\t5 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto16 GB\n\nPRICE\t\t\t\t\t\tRs. 4,209");break;
		case 3:printf("MICROMAX CANVAS WIN W092\n\nOperating System\t\tWindows v8.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,500");break;
		case 4:printf("MICROMAX X337\n\nOperating System\t\tJava\nCamera\t\t\t\t0.3 MP Camera with flash\nRAM\t\t\t\t64 MB\nInternal Memory\t\t\t128 MB\nDisplay\t\t\t\t3.5 inches, 320 x 240 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\tNO 3G,NO Wi-Fi\nExpandable Memory\t\tupto16 GB\n\nPRICE\t\t\t\t\t\tRs. 2,099");break;
		case 5:printf("MICROMAX BOLT X351\n\nOperating System\t\tJava\nProcessor\t\t\t312 Mhz\nCamera\t\t\t\t1.3 MP Camera\nRAM\t\t\t\t62 MB\nDisplay\t\t\t\t3 inches, 320 x 240 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\tNO 3G,NO Wi-Fi\nExpandable Memory\t\tupto16 GB\n\nPRICE\t\t\t\t\t\tRs. 1,538");break;
		case 6:printf("MICROMAX UNITE 2 A106\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.7 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,459");break;
		case 7:printf("MICROMAX UNITE 2 A106(8GB)\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t8MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.7 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,490");break;
		case 8:printf("MICROMAX DOODLE 3 A102(1GB RAM)\n\nOperating System\t\tAndroids v4.2.2\nProcessor\t\t\tDual Core, 1.3 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t6 inches, 854 x 480 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,642");break;
		case 9:printf("MICROMAX CANVAS 2 A120 COLOURS\n\nOperating System\t\tAndroid v4.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 1280 x 720 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 8,639");break;
		case 10:printf("MICROMAX CANVAS FIRE 2 A104\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tQuad Core, 132 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t1.5 GB\nDisplay\t\t\t\t4.5 inches, 854 x 480 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,329");break;
		case 11:printf("MICROMAX CANVAS 2 A120 COLOURS(8GB)\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5 inches, 1280 x 720 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,600");break;
		case 12:printf("MICROMAX CANVAS JUICE A77\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4GB\nDisplay\t\t\t\t5 inches, 480 x 854 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 6,597");break;
		case 13:printf("MICROMAX A108 CANVAS L\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5.5 inches, 540 x 960 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 9,640");break;
		case 14:printf("MICROMAX CANVAS UNITE A092\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t2.99 GB\nDisplay\t\t\t\t4 inches, 800 x 480 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 5,499");break;
		case 15:printf("MICROMAX CANVAS 2.2 A114\n\nOperating System\t\tAndroid v4.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 960 x 540 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 8,199");break;
		case 16:printf("MICROMAX MAd A94\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t1.5 GB\nDisplay\t\t\t\t4.5 inches, 480 x 854 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 5,599");break;
		case 17:printf("MICROMAX BOLT A58\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t2 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t90 MB\nDisplay\t\t\t\t3.5 inches, 320 x 480 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 3,633");break;
		case 18:printf("MICROMAX CANVAS ELANZA 2 A121\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 1280 x 720 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 8,264");break;
		case 19:printf("MICROMAX BOLT A62\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t2 MP Camera\nRAM\t\t\t\t256 MB\nInternal Memory\t\t\t202 MB\nDisplay\t\t\t\t4 inches, 320 x 480 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\tNO 3G,Wi-Fi\nExpandable Memory\t\tupto16 GB\n\nPRICE\t\t\t\t\t\tRs. 3,490");break;
		case 20:printf("MICROMAX CANVAS JIUCE A177\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tDual Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t672 MB\nDisplay\t\t\t\t5 inches, 480 x 854 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 5,641");break;
		case 21:printf("MICROMAX A35 BOLT\n\nOperating System\t\tAndroid v2.3.5\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t2 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t160 MB\nDisplay\t\t\t\t3.97 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\tNO 3G,Wi-Fi\nExpandable Memory\t\tupto16 GB\n\nPRICE\t\t\t\t\t\tRs. 3,499");break;
		case 22:printf("MICROMAX CANVAS POWER A96\n\nOperating System\t\tAndroid v4.2\nProcessor\t\t\tQuad Core, 1.3 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t2.58 GB\nDisplay\t\t\t\t5 inches, 480 x 854 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 5,769");break;
	} break;    }
case 170:
	{
		printf("\n\n\tSorry, No phone of Apple available in this range !\a\n\n");
		break;
	}
case 210:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Sony:\n\n\t\t\t1 Sony Experia C\n\n\t\t\t2 Sony Experia M Dual\n\n\t\t\t3 Sony Experia L\n\n\t\t\t4 Sony Experia M2 Dual\n\n\t\t\t5 Sony Xperia ZR\n\n\t\t\t6 Sony Experia SP\n\n\t\t\t7 Sony Xperia U\n\n");
	scanf("%d",&o[6]);
	system("cls");
	switch(o[6])
	{
		case 1:printf("SONY XPERIA C\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 540 x 960 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 15,673");break;
		case 2:printf("SONY XPERIA M DUAL\n\nOperating System\t\tAndroid v4.2\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 450 x854 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 10,599 ");break;
		case 3:printf("SONY XPERIA L\n\nOperating System\t\tAndroid v4.1\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.3 inches, 480 x 854 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 13,990 ");break;
		case 4:printf("SONY XPERIA M2 Dual\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.8 inches, 540 x 960 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 17,497");break;
		case 5:printf("SONY XPERIA ZR\n\nOperating System\t\tAndroid v4.1\nProcessor\t\t\tQuad Core, 1.5 GHz Processor\nCamera\t\t\t\t13.1 MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.55 inches, 720 x 1280 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 18,490");break;
		case 6:printf("SONY XPERIA SP\n\nOperating System\t\tAndroid v4.1\nProcessor\t\t\tDual Core, 1.7 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.59 inches, 720 x 1280 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 15,150");break;
		case 7:printf("SONY XPERIA U\n\nOperating System\t\tAndroid v2.3\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t3.5 inches, 480 x 854 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tMemory Card not supported\n\nPRICE\t\t\t\t\t\tRs. 11,399");break;
	} break;    }
case 220:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Samsung:\n\n\t\t\t1 SAMSUNG GALAXY GRAND PRIME\n\n\t\t\t2 SAMSUNG GALAXY GRAND 2 DUO\n\n\t\t\t3 SAMSUNG GALAXY CORE DUOS 18262\n\n\t\t\t4 SAMSUNG GALAXY GRAND QUATTRO (WIN DUOS) 18552\n\n\t\t\t5 SAMSUNG GALAXY NEO DUOS \n\n\t\t\t6 SAMSUNG GALAXY GALAXY GRAND DUOS 19080");
	scanf("%d",&o[7]);
	system("cls");
	switch(o[7])
	{
		case 1:printf("SAMSUNG GALAXY GRAND PRIME	\n\n	Operating System	\t\t	Android v4.4.2	\n	Processor	\t\t\t	1 GHz Processor	\n	Camera	\t\t\t\t	8 MP Camera with flash	\n	RAM	\t\t\t\t	1 GB	\n	Internal Memory	\t\t\t	8 GB	\n	Display	\t\t\t\t	5 inches, 540 x 960 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 15,199");break;
		case 2:printf("SAMSUNG GALAXY GRAND 2 DUO	\n\n	Operating System	\t\t	Android v4.3	\n	Processor	\t\t\t	1.2 GHz Processor	\n	Camera	\t\t\t\t	8 MP Camera with flash	\n	RAM	\t\t\t\t	1.5 GB	\n	Internal Memory	\t\t\t	8 GB	\n	Display	\t\t\t\t	5.25 inches, 720 x 1280 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 16,400");break;
		case 3:printf("SAMSUNG GALAXY CORE DUOS 18262	\n\n	Operating System	\t\t	Android v4.1.2	\n	Processor	\t\t\t	1.2 GHz Processor	\n	Camera	\t\t\t\t	5 MP Camera with flash	\n	RAM	\t\t\t\t	1 GB	\n	Internal Memory	\t\t\t	8 GB	\n	Display	\t\t\t\t	4.3 inches, 480 x 800 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 11,501");break;
		case 4:printf("SAMSUNG GALAXY GRAND QUATTRO (WIN DUOS) 18552	\n\n	Operating System	\t\t	Android v4.1.2	\n	Processor	\t\t\t	1.2 GHz Processor	\n	Camera	\t\t\t\t	5 MP Camera with flash	\n	RAM	\t\t\t\t	1 GB	\n	Internal Memory	\t\t\t	8 GB	\n	Display	\t\t\t\t	4.7 inches, 480 x 800 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 32GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 11,599");break;
		case 5:printf("SAMSUNG GALAXY NEO DUOS	\n\n	Operating System	\t\t	Android v4.2	\n	Processor	\t\t\t	1.2 GHz Processor	\n	Camera	\t\t\t\t	5 MP Camera with flash	\n	RAM	\t\t\t\t	1 GB	\n	Internal Memory	\t\t\t	8 GB	\n	Display	\t\t\t\t	5.01 inches, 480 x 800 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 13,320");break;
		case 6:printf("SAMSUNG GALAXY GALAXY GRAND DUOS 19080	\n\n	Operating System	\t\t	Android v4.1.2	\n	Processor	\t\t\t	1.2 GHz Processor	\n	Camera	\t\t\t\t	8 MP Camera with flash	\n	RAM	\t\t\t\t	1 GB	\n	Internal Memory	\t\t\t	8 GB	\n	Display	\t\t\t\t	5 inches, 480 x 800 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 16,799");break;
		
	} break;    }
case 230:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of HTC:\n\n\n\t\t\t1 HTC Desire 600C Dual Sim \n\n\t\t\t2 HTC 8S \n\n\t\t\t3 HTC Desire V \n\n\t\t\t4 HTC Desire SV \n\n\t\t\t5 HTC Desire 500 \n\n\t\t\t6 HTC Desire 300 \n\n\t\t\t7 HTC One V (Primo) \n\n\t\t\t8 HTC Desire XC \n\n\t\t\t9 HTC Radar \n\n\t\t\t10 HTC Desire VC \n\n\t\t\t11 HTC Desire 616 dual sim \n\n\t\t\t12 HTC Desire 516 \n\n\t\t\t13 HTC Desire 700 Dual Sim \n\n");
	scanf("%d",&o[8]);
	system("cls");
	switch(o[8])
	{
		case 1:printf("HTC DESIRE 600C dual sim\n\nOperating System\t\tAndroid v4.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.5 inches, 960 x 540 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 19,990");break;
		case 2:printf("HTC 8S\n\nOperating System\t\tWindows v8\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 12,449");break;
		case 3:printf("HTC DESIRE V\n\nOperating System\t\tAndroid v4.0\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 11,500");break;
		case 4:printf("HTC DESIRE SV\n\nOperating System\t\tAndroid v4.0.4\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t768 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.3 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 12,420");break;
		case 5:printf("HTC DESIRE 500\n\nOperating System\t\tAndroid v4.1.2\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.3 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 17,890");break;
		case 6:printf("HTC DESIRE 300\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.3 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 17,000");break;
		case 7:printf("HTC ONE V (Primo)\n\nOperating System\t\tAndroid v4.0.3(upgradable to v4.1)\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t3.7 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 18,000");break;
		case 8:printf("HTC DESIRE XC\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t768 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\tNO 3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 14,500");break;
		case 9:printf("HTC RADAR\n\nOperating System\t\tWindows v7.5\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t3.8 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tMemory card not supported\n\nPRICE\t\t\t\t\t\tRs. 14,860");break;
		case 10:printf("HTC DESIRE VC\n\nOperating System\t\tAndroid v4.0\nProcessor\t\t\tSingle Core, 1 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4 inches, 480 x 800 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 19,457");break;
		case 11:printf("HTC DESIRE 616 dual sim\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tOcta Core, 1.4 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 15,959");break;
		case 12:printf("HTC DESIRE 516\n\nOperating System\t\tAndroid v4.2.2\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 540 x 960 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 12,996");break;
		case 13:printf("HTC DESIRE 700 dual sim\n\nOperating System\t\tAndroid\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5 inches, 540 x 960 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 18,290");break;	} break;    }
case 240:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Nokia:\n\n\t\t\t1 Nokia Lumia 1320\n\n\t\t\t2 Nokia Lumia 710\n\n\t\t\t3 Nokia Lumia 720\n\n");
	scanf("%d",&o[9]);
	system("cls");
	switch(o[9])
	{
		case 1:printf("NOKIA LUMIA 1320\n\nOperating System\t\tWindows v8\nProcessor\t\t\tDual Core, 1.7 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t6 inches, 720 x 1280 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 16,980");break;
		case 2:printf("NOKIA LUMIA 710\n\nOperating System\t\tWindows v7.5\nProcessor\t\t\t1.4 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t3.7 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tNot Supported\n\nPRICE\t\t\t\t\t\tRs. 11,000");break;
		case 3:printf("NOKIA LUMIA 720\n\nOperating System\t\tWindows v8\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t6.7 MP Camera with flash\nRAM\t\t\t 512 MB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.3 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 17,411");break;
	} break;    }
case 250:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of BlackBerry:\n\n\n\t\t\t1 BlackBerry Classsic\n\n\t\t\t2 BlackBerry Z3\n\n\t\t\t3 BlackBerry Passport\n\n\t\t\t4 BlackBerry Z10\n\n\t\t\t5 BlackBerry Q5\n\n\t\t\t6 BlackBerry Q10\n\n\t\t\t7 BlackBerry Curve 3G 9300\n\n\t\t\t8 BlackBerry Curve 9360\n9 BlackBerry Curve 9380\n\n");
	scanf("%d",&o[10]);
	system("cls");
	switch(o[10])
	{
		case 1:printf("BLACKBERRY Classic\n\nOperating System\t\tBlackberry OS, v10.1\nProcessor\t\t\tQuad Core\nCamera\t\t\t\t????\nRAM\t\t\t\t???\nInternal Memory\t\t\t???\nDisplay\t\t\t\t3.5 inches, 1440 x 1440 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64 GB\n\nPRICE\t\t\t\t\t\tRs. 11,000 ");break;
		case 2:printf("BLACKBERRY Z3\n\nOperating System\t\tBlackberry OS, v10.2.1\nProcessor\t\t\tDual Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP with flash\nRAM\t\t\t\t1.5 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5 inches, 960 x 540 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 15,300 ");break;
		case 3:printf("BLACKBERRY PASSPORT\n\nOperating System\t\tBlackberry OS, v10.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\tYes\nRAM\t\t\t\t??\nInternal Memory\t\t\t???\nDisplay\t\t\t\t4.5 inches, 1440 x 1440 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64 GB\n\nPRICE\t\t\t\t\t\tRs. 13,000 ");break;
		case 4:printf("BLACKBERRY Z10\n\nOperating System\t\tBlackberry OS, v10 (upgradable to v10.1)\nProcessor\t\t\tDual Core, 1.5 GHz Processor\nCamera\t\t\t\t8 MP with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t4.2 inches, 760 x 1200 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64 GB\n\nPRICE\t\t\t\t\t\tRs. 18,499 ");break;
		case 5:printf("BLACKBERRY Q5\n\nOperating System\t\tBlackberry OS, v10\nProcessor\t\t\tDual Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t3.1 inches, 720 x 720 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 14,999 ");break;
		case 6:printf("BLACKBERRY Q10\n\nOperating System\t\tBlackberry OS, v10\nProcessor\t\t\tDual Core, 1.5 GHz Processor\nCamera\t\t\t\t8 MP with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t3.1 inches, 720 x 720 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64 GB\n\nPRICE\t\t\t\t\t\tRs. 17,390 ");break;
		case 7:printf("BLACKBERRY CURVE 3G 9300\n\nOperating System\t\tBlackberry OS, v6.0\nProcessor\t\t\t624 MHz Processor\nCamera\t\t\t\t2 MP\nRAM\t\t\t\t256 MB\nInternal Memory\t\t\t256 MB\nDisplay\t\t\t\t2.4 inches, 320 x 240 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 11,499 ");break;
		case 8:printf("BLACKBERRY CURVE 9360\n\nOperating System\t\tBlackberry OS, v7\nProcessor\t\t\t800 MHz Processor\nCamera\t\t\t\t5 MP with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t512 MB\nDisplay\t\t\t\t2.44 inches, 480 x 360 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 15,899 ");break;
		case 9:printf("BLACKBERRY CURVE 9380\n\nOperating System\t\tBlackberry OS, v7\nProcessor\t\t\t806 MHz Processor\nCamera\t\t\t\t5 MP with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t512 MB\nDisplay\t\t\t\t3.2 inches, 360 x 480 px display\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 15,880 ");break;

	} break;    }
case 260:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Micromax:\n\n\n\t\t\t1 Micromax A110 Superfone Canvas 2\n\n\t\t\t2 Micromax A116 Canvas HD\n\n\t\t\t3 Micromax Canvas Doodle 2 A240\n\n\t\t\t4 Micromax Canvas Knight A350\n\n\t\t\t5 Micromax Canvas gold A300\n\n\t\t\t6 Micromax A190 Canvas HD Plus\n\n\t\t\t7 Micromax Canvas 4 (A210)\n\n\t\t\t8 Micromax A250 Canavs Turbo\n\n");
	scanf("%d",&o[11]);
	system("cls");
	switch(o[11])
	{
		case 1:printf("MICROMAX A110 SUPERFONE CANVAS 2\n\nOperating System\t\tAndroid v4.0.4(upgradable to v4.1.1)\nProcessor\t\t\tDual Core, 1 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t512 MB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 480 x 854 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 10,490");break;
		case 2:printf("MICROMAX A116 CANVAS HD\n\nOperating System\t\tAndroid v4.1.2\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t5 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 13,990");break;
		case 3:printf("MICROMAX CANVAS DOODLE 2 A240\n\nOperating System\t\tAndroid v4.2.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t12 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t5.7 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tMemory card Not Supported\n\nPRICE\t\t\t\t\t\tRs. 13,449");break;
		case 4:printf("MICROMAX CANVAS KNIGHT A350\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tOcta Core, 1.7 GHz Processor\nCamera\t\t\t\t16 MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t32 GB\nDisplay\t\t\t\t5 inches, 1080 x 1920 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tMemory card Not Supported\n\nPRICE\t\t\t\t\t\tRs. 18,375");break;
		case 5:printf("MICROMAX CANVAS GOLD  A300\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tOcta Core, 2 GHz Processor\nCamera\t\t\t\t16MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t32 GB\nDisplay\t\t\t\t5.5 inches, 1080 x 1920 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tMemory card Not Supported\n\nPRICE\t\t\t\t\t\tRs. 19,385");break;
		case 6:printf("MICROMAX A190 CANVAS HD PLUS\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tHexa Core, 1.5 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 12,072");break;
		case 7:printf("MICROMAX CANVAS 4 (A210)\n\nOperating System\t\tAndroid v4.2.1\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t13 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t5 inches, 1280 x 720 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto32 GB\n\nPRICE\t\t\t\t\t\tRs. 14,990");break;
		case 8:printf("MICROMAX A250 CANVAS TURBO\n\nOperating System\t\tAndroid v4.2.1\nProcessor\t\t\tQuad Core, 1.5 GHz Processor\nCamera\t\t\t\t13 MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t12.47 GB\nDisplay\t\t\t\t5 inches, 1920 x 1080 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tMemory card Not Supported\n\nPRICE\t\t\t\t\t\tRs. 13,540");break;
	} break;    }
case 270:
	{
		printf("No data regarding apple");
	}
case 310:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Sony:\n\n\n\t\t\t1 Sony Experia Z\n\n\t\t\t2 Sony Experia T2 Ultra Dual\n\n\t\t\t3 Sony Experia C3 Dual\n\n\t\t\t4 Sony Experia Z1 Compact\n\n\t\t\t5 Sony Experia T2 Ultra\n\n\t\t\t6 Sony Experia Z Ultra\n\n");
	scanf("%d",&o[12]);
	system("cls");
	switch(o[12])
	{
		case 1:printf("SONY XPERIA Z\n\nOperating System\t\tAndroid v4.1.2(upgardable to v4.3)\nProcessor\t\t\tQuad Core, 1.5 GHz Processor\nCamera\t\t\t\t13.1 MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t5 inches, 1080 x 1920 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs.23,799 ");break;
		case 2:printf("SONY XPERIA T2 Ultra Dual\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tQuad Core, 1.4 GHz Processor\nCamera\t\t\t\t13 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t6 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 22,649 ");break;
		case 3:printf("SONY XPERIA C3 Dual\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5.5 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 23,999 ");break;
		case 4:printf("SONY XPERIA Z1 COMPACT\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tQuad Core, 2.2 GHz Processor\nCamera\t\t\t\t20.7 MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t4.3 inches, 720 x 1280 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64 GB\n\nPRICE\t\t\t\t\t\tRs. 28,041");break;
		case 5:printf("SONY XPERIA T2 ULTRA\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tQuad Core, 1.4 GHz Processor\nCamera\t\t\t\t13 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t6 inches, 720 x 1280 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 32 GB\n\nPRICE\t\t\t\t\t\tRs. 21,052");break;
		case 6:printf("SONY XPERIA Z ULTRA\n\nOperating System\t\tAndroid v4.2\nProcessor\t\t\tQuad Core, 2.2 GHz Processor\nCamera\t\t\t\t8 MP Camera\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t6.4 inches, 1080 x 1920 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64 GB\n\nPRICE\t\t\t\t\t\tRs. 27,169");break;
	} break;    
	}
case 320:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Samsung:\n\n\n\t\t\t1 SAMSUNG GALAXY S4\n\n\t\t\t2 SAMSUNG GALAXY NOTE 3 NEO\n\n\t\t\t3 SAMSUNG GALAXY NOTE 2(N7100)\n\n\t\t\t4 SAMSUNG GALAXY S3 19300, S III (16 GB)");
	scanf("%d",&o[13]);
	system("cls");
	switch(o[13])
	{
		case 1:printf("SAMSUNG GALAXY S4	\n\n	Operating System	\t\t	Android v4.2.2	\n	Processor	\t\t\t	1.6 GHz Processor	\n	Camera	\t\t\t\t	13 MP Camera with flash	\n	RAM	\t\t\t\t	2 GB	\n	Internal Memory	\t\t\t	16 GB	\n	Display	\t\t\t\t	4.7 inches, 1080 x 1920 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 27,000");break;
		case 2:printf("SAMSUNG GALAXY NOTE 3 NEO	\n\n	Operating System	\t\t	Android v4.3	\n	Processor	\t\t\t	1.3 GHz Processor	\n	Camera	\t\t\t\t	8 MP Camera with flash	\n	RAM	\t\t\t\t	2 GB	\n	Internal Memory	\t\t\t	16 GB	\n	Display	\t\t\t\t	5.5 inches, 720 x 1280 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 23,764");break;
		case 3:printf("SAMSUNG GALAXY NOTE 2(N7100)	\n\n	Operating System	\t\t	Android v4.1.1	\n	Processor	\t\t\t	1.6 GHz Processor	\n	Camera	\t\t\t\t	8 MP Camera with flash	\n	RAM	\t\t\t\t	1 GB	\n	Internal Memory	\t\t\t	16 GB	\n	Display	\t\t\t\t	5.5 inches, 720 x 1280 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 23,700");break;
		case 4:printf("SAMSUNG GALAXY S3 19300, S III (16 GB)	\n\n	Operating System	\t\t	Android v4.0.4 (upgradable to v4.3)	\n	Processor	\t\t\t	1.4 GHz Processor	\n	Camera	\t\t\t\t	8 MP Camera with flash	\n	RAM	\t\t\t\t	1 GB	\n	Internal Memory	\t\t\t	16 GB	\n	Display	\t\t\t\t	4.8 inches, 720 x 1280 px display	\n	Sim Slot	\t\t\t	2 Sim	\n	Internet	\t\t\t	3G, Wifi	\n	Expandable Memory	\t\t	upto 64GB	\n\n	PRICE	\t\t\t\t\t\t\t\t	Rs. 20,500");break;	
	
	} break;    }
case 330:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of HTC:\n\n\n\t\t\t1 HTC Desire 610\n\n\t\t\t2 HTC One Max\n\n\t\t\t3 HTC Desire 600 dual sim\n\n\t\t\t4 HTC Desire 601\n\n\t\t\t5 HTC One S\n\n\t\t\t6 HTC Desire  816\n\n");
	scanf("%d",&o[14]);
	system("cls");
	switch(o[14])
	{
		case 1:printf("HTC DESIRE 610\n\nOperating System\t\tAndroid\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.7 inches, 540 x 960 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 22,999");break;
		case 2:printf("HTC ONE MAX\n\nOperating System\t\tAndroid v4.3\nProcessor\t\t\tQuad Core, 1.7 GHz Processor\nCamera\t\t\t\t4 MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t32 GB\nDisplay\t\t\t\t5.9 inches, 1080 x 1920 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,HDMI,NFC\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 29,490");break;
		case 3:printf("HTC DESIRE 600 dual sim\n\nOperating System\t\tAndroid v4.1.2\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.5 inches, 540 x 960 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 20,999");break;
		case 4:printf("HTC DESIRE 601\n\nOperating System\t\tAndroid\nProcessor\t\t\tQuad Core, 1.2 GHz Processor\nCamera\t\t\t\t5 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t4 GB\nDisplay\t\t\t\t4.5 inches, 540 x 960 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 20,999");break;
		case 5:printf("HTC ONE S\n\nOperating System\t\tAndroid v4.0.3\nProcessor\t\t\tDual Core, 1.5 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t4.3 inches, 540 x 960 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,HDMI\nExpandable Memory\t\tMemory card Not Supported\n\nPRICE\t\t\t\t\t\tRs. 27,604");break;
		case 6:printf("HTC DESIRE 816\n\nOperating System\t\tAndroid v4.4.2\nProcessor\t\t\tQuad Core, 1.6 GHz Processor\nCamera\t\t\t\t13MP Camera with flash\nRAM\t\t\t\t1.5 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5.5 inches, 720 x 1280 px display\nSim Slot\t\t\tDual Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto128 GB\n\nPRICE\t\t\t\t\t\tRs. 22,999");break;
	} break;    }
case 340:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of Nokia:\n\n\n\t\t\t1 Nokia Lumia 930\n\n\t\t\t2 Nokia Lumia 925\n\n\t\t\t3 Nokia Lumia 820\n\n");
	scanf("%d",&o[15]);
	system("cls");
	switch(o[15])
	{
		case 1:printf("NOKIA LUMIA 930\n\nOperating System\t\tWindows v8.1\nProcessor\t\t\tQuad Core, 2.2 GHz Processor\nCamera\t\t\t\t20 MP Camera with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t32 GB\nDisplay\t\t\t\t5 inches, 1080 x 1920 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tMemory card not Supported\n\nPRICE\t\t\t\t\t\tRs. 28,000");break;
		case 2:printf("NOKIA LUMIA 925\n\nOperating System\t\tWindows v8\nProcessor\t\t\tDual Core, 1.5 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t16 GB\nDisplay\t\t\t\t4.5 inches, 768 x 1280 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tMemory card Not Supported\n\nPRICE\t\t\t\t\t\tRs. 23,570");break;
		case 3:printf("NOKIA LUMIA 820\n\nOperating System\t\tWindows v8\nProcessor\t\t\tDual Core, 1.5 GHz Processor\nCamera\t\t\t\t8 MP Camera with flash\nRAM\t\t\t\t1 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t4.3 inches, 480 x 800 px display\nSim Slot\t\t\tSingle Sim\nInternet\t\t\t3G,Wi-Fi,NFC\nExpandable Memory\t\tupto64 GB\n\nPRICE\t\t\t\t\t\tRs. 21,490");break;
	} break;    }
case 350:
	{
	printf("\n\n\n\n\t\t\tSelect a phone of BlackBerry:\n\n\n\t\t\t1 BlackBerry Z30\n");
	scanf("%d",&o[16]);
	system("cls");
	switch(o[16])
	{
		case 1:printf("BLACKBERRY Z30\n\nOperating System\t\tBlackberry OS, v10.2 (upgradable to v10.2.1)\nProcessor\t\t\tDual Core, 1.7 GHz Processor\nCamera\t\t\t\t8 MP with flash\nRAM\t\t\t\t2 GB\nInternal Memory\t\t\t8 GB\nDisplay\t\t\t\t5 inches, 720 x 1280 px display\nSim Slot\t\t\t? Sim\nInternet\t\t\t3G,Wi-Fi\nExpandable Memory\t\tupto 64 GB\n\nPRICE\t\t\t\t\t\tRs. 28,490 ");break;
	} break;    }
case 360:
	{
	printf("\n\n\n\n\t\t\tNo Mobile Available in the Given Range.\n\n\t\t\t           Try Some lesser Amount");
	goto map;
	}
case 370:
	{
		printf("\n\n\n\n\t\t\tNo data regarding apple");
	}
}
Sleep(1000);
miami:
printf("\n\n\n1 Buy Phone\n\n2 Go Back\n\n3 Main Menu\n\n4 Logout\n");
scanf("%d",&b);
printf("\a");
printf("\n\n");
system("cls");
if(b==1)
{
system("cls");
printf("\n\n\n\t\t\tPurchase successful");
printf("\a");
Sleep(1000);
system("cls");
goto map;
}
else if(b==2)
{
printf("Search more");
system("cls");
}
else if(b==3)
{
goto map;
}
else if(b==4)
{
printf("\n\n\n\n\t\t\t%s successfully logged out",user);
char command34[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\logout.mp3";
	int status35 = system( command34 );
Sleep(4000);
break;
}
else
{
printf("Please Choose a valid option");
printf("\a");
Sleep(1000);
system("cls");
goto miami;
}
}
}
else if(a==2)
{
printf("\n\n\n\t\t\tNo data regarding selling Phones");
Sleep(2000);
system("cls");
goto map;
}
else if(a==3)
{
system("cls");
Sleep(1000);
printf("\n\n\t\tLaunch Compare Phones");
ShellExecute(NULL,"open","http://compareindia.ibnlive.com/products/mobile-phones/23",NULL, NULL, SW_SHOWNORMAL);
goto map;
}                                         
else if(a==4)
{
system("cls");
printf("\n\n\t\tLaunching New Feed ...\n");
Sleep(3000);
ShellExecute(NULL,"open","http://www.pcmag.com/article2/0,2817,2376171,00.asp",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto map;
}
else if(a==5)
{
system("cls");
printf("\n\n\n\tLaunchig App compare ...");
ShellExecute(NULL,"open","http://www.tomsguide.com/t/apps/",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto map;
}
else if(a==6)
{
system("cls");
web:
printf("\n\t\t\t|                              |");printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      1    GOOGLE            \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      2    FLIPCART          \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      3    SNAPDEAL           \a|");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      4    OLX               \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      5    THE MOBILE STORE  \a |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      6    eBAY               \a|");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      7    AMAZON             \a|");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);
printf("\n\t\t\t|      8    EXIT WEB CONNECT   \a|");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);printf("\n\t\t\t|                              |");Sleep(100);

gets(web);
if(web[0]==49)
{
ShellExecute(NULL,"open","https://www.google.co.in",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto web;
}
else if(web[0]==50)
{
ShellExecute(NULL,"open","www.flipcart.com",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto web;	
}
else if(web[0]==51)
{
ShellExecute(NULL,"open","www.SnapDeal.com",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto web;	
}
else if(web[0]==52)
{
ShellExecute(NULL,"open","http://www.olx.in/?invite=google-in_kwd&gclid=CNXu2NObosECFVcnjgodulkAew#utm_source=Google&utm_medium=CPC&utm_campaign=Google_Adwords",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto web;	
}
else if(web[0]==53)
{
ShellExecute(NULL,"open","http://www.themobilestore.in/",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto web;	
}
else if(web[0]==54)
{
ShellExecute(NULL,"open","http://www.ebay.com/",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto web;	
}
else if(web[0]==55)
{
ShellExecute(NULL,"open","http://www.amazon.com/",NULL, NULL, SW_SHOWNORMAL);
system("cls");
goto web;	
}
else if(web[0]==56)
{
system("cls");
goto map;	
}
else
{
printf("Invalid Choice");
printf("\a");
Sleep(1000);
system("cls");
goto web;
}

}
else if(a==7)
{
printf("\n\n\n\n\n\t\t\t%s Successfully logged out\n");
char command34[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\logout.mp3";
	int status34 = system( command34 );
Sleep(3000);
}
else
{
printf("\n\n\n\n\t\tPlease choose a valid option");
printf("\a");
Sleep(1000);
system("cls");
goto map;
}
}
else
{
system("cls");
july:
printf("\n\n\n\tSorry %s ,the password you entered is incorrect\n",user);
printf("\a");
printf("\n\n\n\t1 Try Again\n\n\t2 Quit\n\n\t");
gets(xo);
system("cls");
if(xo[0]==49)
{
goto lolz;
}
else if(xo[0]==50)
{
goto sos;
}
else
{
system("cls");
printf("\n\n\t\t\tChoose a valid option\n\n");
printf("\a");
Sleep(1000);
system("cls");
goto july;
}
}
sos:
Sleep(1000);
system("cls");
printf("\n\n\n\n\n\t\t\tTHANKYOU");
char command66[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\thanku.mp3";
	int status66 = system( command66 );
Sleep(4000);
char command67[] = "E:\\J.A.R.V.I.S\\PBL\\CSEGadgetStore\\voicebox\\end.mp3";
	int status67 = system( command67 );
system("cls");
Sleep(1000);
for(x=0;x<40;x++)
{

	for(i=0;i<50;i++)
	{
		system("cls");
		for(j=0;j<i;j++)
		{
			printf("\n");
		}
		printf("\t\tGuiding faculty : Prof. Ramesh Ragala\n\n\t\t\t\tProgrammers:\n\n\tPrasang Sharma\t\tAnimesh Gupta\t\tModit Garg");				
		Sleep(100);
	}
	system("cls");
}

	Sleep(1000);
	system("cls");
getch();
return 0;
}
// GUIDING FACULTY: PROF. RAMESH RAGALA
// MADE BY- ANIMESH GUPTA(14BEE1117)
//          PRASANG SHARMA(14BCE1088)
//          MODIT GARG(14BEC1157)
