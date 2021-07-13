#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"rit.h"
typedef struct trans
{
int bn,n1;
char dn[20];
char cn[30];
char pn[12];
char tn[10][20];
char sp[10][20];
}trans;
typedef struct staff
{
char sd[10];
char sn[20];
char sb[20];
char dn[20];
char gn[30];
}staff;
typedef struct Wifi{
	char str[20];
	char pass[20];
}Wifi;
void oread(int);
void tdelete();
int menu();
void stu();
void sublist();
void admin();
void transport();
void staffinfo();
void wifi();
void wifiread();
void wifiadd();
void wifidel();
void wifiedit();
void screate(char sh[]);
void sread();
void sdelete();
void tread();
void tcreate(char ch[]);
void main()
{
mainmenu();
menu();
}
int menu()
{
system("cls");
char d[40] = "WELCOME TO COLLEGE INFO SYSTEM";
    int i,j,k,l,m;
    char apass[20];
    gotoxy(20,5);
    for(j=0;j<40;j++)
    {
       Sleep(10);printf("@");
    }
    for(j=6;j<20;j++)
    {
    gotoxy(20,j);printf("@");Sleep(20);
    }
    for(j=5;j<=20;j++)
    {
    gotoxy(60,j);printf("@");Sleep(20);
    }

    gotoxy(20,20);
    for(j=0;j<40;j++)
    {
       Sleep(20);printf("@");
    }

    gotoxy(20,9);
    for(j=0;j<40;j++)
    {
       Sleep(20);printf("@");
    }
    gotoxy(23,7);
    printf("\t ");
    for(m=0;m<30;m++)
    {
      Sleep(10);printf("%c",d[m]);
    }
    gotoxy(23,11);printf("\t \xdb\xdb\xdb\xb2 1. Student");Sleep(150);
    gotoxy(23,14);printf("\t \xdb\xdb\xdb\xb2 2.Admin ");Sleep(150);
    gotoxy(23,17);printf("\t \xdb\xdb\xdb\xb2 3.Quit ");Sleep(150);
    char n;
    gotoxy(21,22);printf("Enter choice: ");
    n=getch();
    system("cls");
    switch(n)
    {
	case '1':
    stu();break;
    case '2':
    	printf("Enter password to login:");
    	scanf("%s",apass);
    	if(strcmp("rit12",apass)==0){
	admin();
}
else{
	printf("\aIncorrect Password....");sleep(2);system("cls");
	menu();
}
    break;
    case '3':
    printf("\aThank you..\n\n\n\n\n");
    break;
    return 0;
    default:
    system("cls");
    gotoxy(30,10);printf("\aInvalid Choice");sleep(1);
    gotoxy(30,20);menu();break;
    }
}
void stu()
{
   char op;
   system("cls");Sleep(150);
   printf("\n\n\n\t\t\t<<<<<<<<<<<<<<< STUDENT SECTION >>>>>>>>>>>>>>\n\n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 1. Transport Routemap\n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 2. Staff info\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 3. College info\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 4. Subject list\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 5. Back\n\n");Sleep(150);
   printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>\n");Sleep(150);
   gotoxy(25,18);printf("Enter choice: ");
   op=getch();
   system("cls");
   switch(op)
   {
    case '1':
    tread();
    stu();break;
    case '2':
    sread();
    stu();break;
    case '3':
    oread(0);
    stu();break;
    case '4':
    sublist();
    stu();break;
    case '5':
        menu();break;
    default:
    gotoxy(30,10);printf("\aInvalid Choice");sleep(1);
    gotoxy(28,22);stu();break;
    }
}
void sublist()
{
char ch1;
    system("cls");Sleep(150);
    printf("\n\n\n\t\t\t<<<<<<<<<<<<<<< SUBJECT LIST >>>>>>>>>>>>>>\n\n");Sleep(150);
    printf("\n\t\t\t\xdb\xdb\xdb\xb2 1. Computer science \n");Sleep(150);
    printf("\n\t\t\t\xdb\xdb\xdb\xb2 2. Mechanical\n\n");Sleep(150);
    printf("\t\t\t\xdb\xdb\xdb\xb2 3. Electrical & Electronics Engineering\n\n");Sleep(150);
    printf("\t\t\t\xdb\xdb\xdb\xb2 4. Electronics & Communication\n\n");Sleep(150);
    printf("\t\t\t\xdb\xdb\xdb\xb2 5. Civil\n\n");Sleep(150);
    printf("\t\t\t\xdb\xdb\xdb\xb2 6. Back\n\n");Sleep(150);
    printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>\n");Sleep(10);
    gotoxy(25,20);printf("Enter choice: ");
    ch1=getch();
    system("cls");
switch(ch1)
{
case'1':
oread(1);
sublist();break;
case'2':
oread(2);
sublist();break;
case'3':
oread(3);
sublist();break;
case'4':
oread(4);
sublist();break;
case'5':
oread(5);
sublist();break;
case'6':
stu();break;
default:
       gotoxy(30,10);printf("\aInvalid Choice");sleep(1);
       gotoxy(28,22);sublist();break;
}
}
void admin()
{
   system("cls");
   char a1;
   printf("\n\n\n\t\t\t<<<<<<<<<<<<<<< ADMIN SECTION >>>>>>>>>>>>>>\n\n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 1. Staff info \n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 2. Transport Routemap\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 3. Wifi details\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 4. Back\n\n");Sleep(150);
   printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>\n");Sleep(150);
   gotoxy(25,18);printf("Enter choice: ");
   a1=getch();
   system("cls");
   switch(a1)
   {
    case '1':
    staffinfo();
    admin();break;
    case '2':
    transport();
    admin();break;
    case '3':
    wifi();break;
    admin();break;
    case '4':
        menu();break;
    default:
    gotoxy(30,10);printf("\aInvalid Choice");sleep(1);
    gotoxy(28,22);admin();break;
    }
}
void transport()
{
   system("cls");
   char a1;
   printf("\n\n\n\t\t\t<<<<<<<<<<<<<<< TRANSPORT ROUTE-MAP >>>>>>>>>>>>>>\n\n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 1. Create \n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 2. Add\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 3. Delete\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 4. Read\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 5. back\n\n");Sleep(150);
   printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>\n");Sleep(150);
   gotoxy(25,18);printf("Enter choice: ");
   a1=getch();
   system("cls");
   switch(a1)
   {
    case '1':
        tcreate("w");
    transport();break;
    case '2':
     tcreate("a");
     transport();break;
    case '3':
     tdelete();
     transport();break;
    case '4':
     tread();
     transport();break;
    case '5':
         admin();break;
    default:
    gotoxy(30,10);printf("\aInvalid Choice");sleep(1);
    gotoxy(28,22);transport();break;
   }
}
void tcreate(char ch[2])
{
system("cls");
FILE *fp;
trans *tr;
int n,i,j,n1,k;
gotoxy(23,10);printf("Enter how many city : ");
scanf("%d",&n);system("cls");
tr=(trans*)calloc(n,sizeof(trans));
    fp=fopen("teev.txt",ch);
    for(i=0,k=23;i<n;i++)
{
        gotoxy(23,11);printf("\aEnter %d.city transport details",i+1);sleep(1);system("cls");
gotoxy(23,13);printf("Enter bus no.           : ");
scanf("%d",&tr[i].bn);
gotoxy(23,15);printf("Enter Driver name       : ");
scanf("%s",tr[i].dn);
gotoxy(23,17);printf("Enter Driver's contact  : ");
scanf("%s",&tr[i].pn);
gotoxy(23,19);printf("Enter city name         : ");
scanf("%s",tr[i].cn);
gotoxy(23,21);printf("Enter how many stoppings: ");
scanf("%d",&tr[i].n1);
   for(j=0;j<tr[i].n1;j++)
   {
    gotoxy(23,k);printf("Enter %d.stop name   : ",j+1);k+=2;
   scanf("%s",tr[i].sp[j]);
            gotoxy(23,k);printf("Enter %d.stop timing : ",j+1);k+=2;
   scanf("%s",tr[i].tn[j]);
   }
fwrite(&tr[i],sizeof(trans),1,fp);system("cls");
}
fclose(fp);system("cls");
gotoxy(23,15);printf("\aTransport details are  successfully added ");
gotoxy(120,40);printf("press any key to go back...");getch();
}
void tdelete()
{
trans tr1;
int m,found=0;
FILE *fp,*fp1;
fp=fopen("teev.txt","r");
fp1=fopen("temp.txt","w");
gotoxy(23,5);printf("Enter bus no.: ");
scanf("%d",&m);
while(fread(&tr1,sizeof(trans),1,fp))
{
if(tr1.bn==m)
  found=1;
else
{
fwrite(&tr1,sizeof(trans),1,fp1);
}
 
}
fclose(fp);
fclose(fp1);
if(found)
{
FILE *fp,*fp1;
   fp=fopen("teev.txt","w");
   fp1=fopen("temp.txt","r");
   while(fread(&tr1,sizeof(trans),1,fp1))
   {
    fwrite(&tr1,sizeof(trans),1,fp);
        }
fclose(fp);
   fclose(fp1);
}
else{
	printf("Record not found!!....");sleep(2);
}
system("cls");gotoxy(23,15);printf("\aTransport details are  successfully deleted ");
gotoxy(120,40);printf("press any key to go back...");getch();
}
void tread()
{
FILE *fp;
int k;
trans tr1;
int j=4,i;
printf("\n\t\t\t<<<<<<<<<< Transport-Details >>>>>>>>>>>> ");
fp=fopen("teev.txt","r");
while(fread(&tr1,sizeof(trans),1,fp))
{
i=1;                                      
gotoxy(25,j);printf("Bus no           :%d",tr1.bn);Sleep(20);j+=2;
gotoxy(25,j);printf("Contact          :%s",tr1.pn);Sleep(20);j+=2;
gotoxy(25,j);printf("City name        :%s",tr1.cn);Sleep(20);j+=2;
gotoxy(25,j);printf("Driver name      :%s",tr1.dn);Sleep(20);j+=2;
for(k=0;k<tr1.n1;k++)
{
gotoxy(25,j);printf("Stop %d.",i);Sleep(20);i+=1;j+=2;
   gotoxy(25,j);printf("Stop Name        :%s",tr1.sp[k]);Sleep(20);j+=2;
   gotoxy(25,j);printf("Stop timing      :%s",tr1.tn[k]);Sleep(20);j+=2;
}
j+=2;
    }
fclose(fp);
gotoxy(120,j+10);printf("Press any key to go back...");getch();

}
void staffinfo()
{
   system("cls");
   char a1;
   printf("\n\n\n\t\t\t<<<<<<<<<<<<<<< STAFF INFO >>>>>>>>>>>>>>\n\n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 1. Create \n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 2. Add\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 3. Delete\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 4. Read\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 5. back\n\n");Sleep(150);
   printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>\n");Sleep(150);
   gotoxy(25,18);printf("Enter choice: ");
   a1=getch();
   system("cls");
   switch(a1)
   {
    case '1':
         screate("w");
     staffinfo();break;
    case '2':
     screate("a");
     staffinfo();break;
    case '3':
     sdelete();
    staffinfo();break;
    case '4':
    sread();
    staffinfo();break;
    case '5':
        admin();break;
    default:
    gotoxy(30,10);printf("\aInvalid Choice");sleep(1);
 
    gotoxy(28,22);staffinfo();break;
   }
}
void screate(char sh[2])
{
system("cls");
FILE *fp;
staff *sr;
int n,i;
    fp=fopen("staff.txt",sh);
gotoxy(23,10);printf("Enter how many staff: ");
scanf("%d",&n);system("cls");
sr=(staff*)calloc(n,sizeof(staff));
    for(i=0;i<n;i++)
    {
    gotoxy(23,11);printf("\aEnter %d.Staff info",i+1);sleep(2);system("cls");
gotoxy(23,13);printf("Enter staff id\t: ");
scanf("%s",sr[i].sd);
gotoxy(23,15);printf("Enter staff name\t: ");
scanf("%s",sr[i].sn);
gotoxy(23,17);printf("Handling Subject\t: ");
scanf("%s",sr[i].sb);
gotoxy(23,19);printf("Designation\t: ");
scanf("%s",sr[i].dn);
gotoxy(23,21);printf("Mail id\t: ");
scanf("%s",sr[i].gn);
fwrite(&sr[i],sizeof(staff),1,fp);system("cls");
}
fclose(fp);
system("cls");gotoxy(23,15);printf("\aStaff details are  successfully added ");
gotoxy(120,40);printf("press any key to go back...");getch();
}
void sread()
{
FILE *fp;
staff sr1;
int j=2,i=1;
fp=fopen("staff.txt","r");
while(fread(&sr1,sizeof(staff),1,fp))
{
gotoxy(25,j);printf("<<<<<<<<<<<<Staff %d Details>>>>>>>>>>>",i);j+=2;
gotoxy(25,j);printf("Staff id          :%s",sr1.sd);Sleep(20);j+=2;
gotoxy(25,j);printf("Staff name        :%s",sr1.sn);Sleep(20);j+=2;
gotoxy(25,j);printf("Handling subject  :%s",sr1.sb);Sleep(20);j+=2;
gotoxy(25,j);printf("Desigination      :%s",sr1.dn);Sleep(20);j+=2;
gotoxy(25,j);printf("Mail id           :%s",sr1.gn);Sleep(20);j+=2;
   i++;j+=2;
    }
    fclose(fp);
gotoxy(120,j+10);printf("Press any key to go back...");getch();
}
void sdelete()
{
staff sr1;
int found=0,c;
char m[10];
FILE *fp,*fp1;
fp=fopen("staff.txt","r");
fp1=fopen("temp.txt","w");
gotoxy(23,5);printf("Enter Staff id: ");
scanf("%s",m);
while(fread(&sr1,sizeof(staff),1,fp))
{
c=strcmp(sr1.sd,m);
if(c==0)
  found=1;
else
{
fwrite(&sr1,sizeof(staff),1,fp1);
}
 
}
fclose(fp);
fclose(fp1);
if(found)
{
FILE *fp,*fp1;
   fp=fopen("staff.txt","w");
   fp1=fopen("temp.txt","r");
   while(fread(&sr1,sizeof(staff),1,fp1))
   {
    fwrite(&sr1,sizeof(staff),1,fp);
        }
fclose(fp);
   fclose(fp1);
}
else{
	printf("Record not found!!...");sleep(2);
}
system("cls");gotoxy(23,15);printf("\aStaff details are  successfully deleted ");
gotoxy(120,40);printf("press any key to go back...");getch();
}
void wifi()
{
   system("cls");
   char a2;
   printf("\n\n\n\t\t\t<<<<<<<<<<<<<<< WIFI DETAILS >>>>>>>>>>>>>>\n\n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 1. Add \n");Sleep(150);
   printf("\n\t\t\t\xdb\xdb\xdb\xb2 2. Read\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 3. Delete\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 4. Edit\n\n");Sleep(150);
   printf("\t\t\t\xdb\xdb\xdb\xb2 5. back\n\n");Sleep(150);
   printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>\n");Sleep(150);
   gotoxy(25,18);printf("Enter choice: ");
   a2=getch();
   system("cls");
   switch(a2)
   {
    case '1':
        wifiadd();
    wifi();break;
    case '2':
     wifiread();
     wifi();break;
    case '3':
     wifidel();
     wifi();break;
    case '4':
     wifiedit();
     wifi();break;
    case '5':
         admin();break;
    default:
    gotoxy(30,10);printf("\aInvalid Choice");sleep(1);
    gotoxy(28,22);wifi();break;
   }
}
void wifiread()
{
	FILE *fp;
	Wifi wf1;
	fp=fopen("wifi.txt","r");
	while(fread(&wf1,sizeof(Wifi),1,fp)){
		printf("SSID:");
		printf("%s\n",wf1.str);
		printf("PASSWORD:");
		printf("%s\n",wf1.pass);
	}
	fclose(fp);
gotoxy(120,40);printf("press any key to go back...");getch();
}
void wifiadd()
{
	FILE *fp;
	Wifi *wf;
	int n,i;
	fp=fopen("wifi.txt","a");
	printf("Enter how many wifi:");
	scanf("%d",&n);
	wf=(Wifi*)calloc(n,sizeof(Wifi));
	for(i=0;i<n;i++){
		printf("Enter wifi SSID:");
		scanf("%s",wf[i].str);
		printf("Enter Password:");
		scanf("%s",wf[i].pass);
		fwrite(&wf[i],sizeof(Wifi),1,fp);
	}
	fclose(fp);system("cls");
gotoxy(23,15);printf("\aWifi details are  successfully added ");
gotoxy(120,40);printf("press any key to go back...");getch();
}
void wifidel()
{
Wifi wf1;
int found=0,c;
char m[20];
FILE *fp,*fp1;
fp=fopen("wifi.txt","r");
fp1=fopen("temp.txt","w");
gotoxy(23,5);printf("Enter SSID: ");
scanf("%s",m);
while(fread(&wf1,sizeof(Wifi),1,fp))
{
c=strcmp(wf1.str,m);
if(c==0)
  found=1;
else
{
fwrite(&wf1,sizeof(Wifi),1,fp1);
}
 
}
fclose(fp);
fclose(fp1);
if(found)
{
FILE *fp,*fp1;
   fp=fopen("wifi.txt","w");
   fp1=fopen("temp.txt","r");
   while(fread(&wf1,sizeof(Wifi),1,fp1))
   {
    fwrite(&wf1,sizeof(Wifi),1,fp);
        }
fclose(fp);
   fclose(fp1);
}
else{
	printf("\nSSID Not Found...");sleep(2);
}
system("cls");gotoxy(23,15);printf("\aWifi details are  successfully deleted ");
gotoxy(120,40);printf("press any key to go back...");getch();
}
void wifiedit()
{
Wifi wf1;
int found=0,c;
char m[20];
FILE *fp,*fp1;
fp=fopen("wifi.txt","r");
fp1=fopen("temp.txt","w");
gotoxy(23,5);printf("Enter SSID: ");
scanf("%s",m);
while(fread(&wf1,sizeof(Wifi),1,fp))
{
c=strcmp(wf1.str,m);
if(c==0){
  found=1;
  printf("\nEnter new SSID");
  scanf("%s",wf1.str);
  printf("\nEnter new password");
  scanf("%s",wf1.pass);
  fwrite(&wf1,sizeof(Wifi),1,fp1);
}
else
{
fwrite(&wf1,sizeof(Wifi),1,fp1);
}
 
}
fclose(fp);
fclose(fp1);
if(found)
{
FILE *fp,*fp1;
   fp=fopen("wifi.txt","w");
   fp1=fopen("temp.txt","r");
   while(fread(&wf1,sizeof(Wifi),1,fp1))
   {
    fwrite(&wf1,sizeof(Wifi),1,fp);
        }
fclose(fp);
   fclose(fp1);
}
else{
	printf("\nSSID Not Found.....");
}
system("cls");gotoxy(23,15);printf("\aWifi details are  successfully edited.... ");
gotoxy(120,40);printf("press any key to go back...");getch();
}
void oread(int f)
{
FILE *fp;
char ch,*sh[10]={"collegeinfo.txt","cse.txt","mech.txt","eee.txt","ece.txt","civil.txt"};
fp=fopen(sh[f],"r");
ch=getc(fp);
while(ch!=EOF)
{
printf("%c",ch);Sleep(1);
ch=getc(fp);
}
fclose(fp);
printf("\n\n\t\t\t\t\t\tPress any key to go back...");getch();
}

