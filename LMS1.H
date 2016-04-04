#include<conio.h>

#include<stdio.h>
#include<graphics.h>
#include<dos.h>


//this is the menu given to the user
int menu(){//to give menu to the operator
int c;
clrscr();
printf("please select from one of the below options");
printf("\n1->CREATE STUDENT ID\n2->DELETE STUDENT RECORD\n3->FOR ADDING BOOKS IN LIBRARY\n4->TO KNOW AVAILABLE BOOKS IN LIBRARY\n5->TO ISSUE BOOKS\n6->FOR STUDENT DETAILS\n7->EXIT");
printf("\nplease select a number(1 to 7 only):");
scanf("%d",&c);
return c;
}



//this is to return books
/*void ret(){//
int sidl;
char name[30];        // DECLATE NAME CHARACTER ARRAY
FILE *fp,*ip,*ft,*ap;
int bk,date,mon,year;
long int recsize,dsize;
struct nb{
int bno;//book no
char bname[30];//book name
char aname[30];//author name
};
struct nb a;

struct ib{
int id;
char name[15];
int bnum;
char bname[30];
char aname[30];
int idate;
int imon;
int iyear;
int rdate;
int rmon;
int ryear;
};
struct ib i;
struct sid{
int id;
char ch[15];
};
struct sid s;
fp=fopen("sid.txt","a+");
ip=fopen("issue.txt","r");
ap=fopen("lib.txt","r");
clrscr();
printf("\nPLEASE ENTER IDNO YOU WANT TO DELETE:");
scanf("%d",&sidl);
while(fscanf(fp,"%d %s",&s.id,s.ch)!=EOF){
if(sidl==s.id){
printf("\ncorrect id");
break;
}
}
if(sidl!=s.id){
printf("\nTHERE IS NO STUDENT WITH SUCH ID");
printf("\nPLEASE CHECK YOUR ID NO ONCE");
return;
}
printf("\nPLEASE ENTER THE BOOK NUMBER:");
scanf("%d",&bk);
while(fscanf(ap,"%d %s %s",&a.bno,a.bname,a.aname)!=EOF){
if(a.bno==bk){
//bl=bk;
printf("\nthere is a book with that number");
//strcpy(bn,a.bname);
//strcpy(an,a.aname);
break;
}}
if(a.bno!=bk){
printf("\nthere is no book with that number");
return;}

while(fscanf(ip,"%d %s %d %s %s %d %d %d %d %d %d",&i.id,i.name,&i.bnum,i.bname,i.aname,&i.idate,&i.imon,&i.iyear,&i.rdate,&i.rmon,&i.ryear)!=EOF){
if(bk==i.bnum){
//printf("\nTHE BOOK HAS BEEN ISSUED");
printf("\nstudent id no = %d",i.id);
printf("\nactual return date = %d-%d-%d",i.rdate,i.rmon,i.ryear);
do{
if(date>30){
printf("\ndate should be less than 12");
}printf("\nENTER THE DATE OF RETURN(1-30):");
scanf("%d",&date);
}while(date>30);
do{
if(mon>12){
printf("\nmonth should be less than 12");
}printf("\nENTER THE MONTH OF RETURN(1-12 only):");
scanf("%d",&mon);

}while(mon>12);
printf("\nENTER THE YEAR OF RETURN:");
scanf("%d",&year);
do{
if(year<i.ryear){
printf("\nREENTER THE YEAR OF RETURN:");
scanf("%d",&year);
}
}while(year<i.ryear);
do{
if(date<i.rdate&&mon<=i.rmon){
do{
if(date>30){
printf("\ndate should be less than 12");
}printf("\nREENTER THE DATE OF RETURN(1-30):");
scanf("%d",&date);
}while(date>30);
}
}while(date<i.rdate&&mon<=i.rmon);
do{
if(mon>12){
printf("\nmonth should be less than 12");
}printf("\nREENTER THE MONTH OF RETURN(1-12 only):");
scanf("%d",&mon);

}while(mon>12);
}
}while(date<i.rdate&&mon<=i.rmon);
break;
}
}
//while(fscanf(ip,"%d %s %d %s %s %d %d %d %d %d %d",&i.id,i.name,&i.bnum,i.bname,i.aname,&i.idate,&i.imon,&i.iyear,&i.rdate,&i.rmon,&i.ryear)!=EOF){
//if(i.bnum!=bk)

ft=fopen("tissue.txt","wb");
rewind(fp);
while(fscanf(ip,"%d %s %d %s %s %d %d %d %d %d %d",&i.id,i.name,&i.bnum,i.bname,i.aname,&i.idate,&i.imon,&i.iyear,&i.rdate,&i.rmon,&i.ryear)!=EOF){
if(i.bnum!=bk)
fprintf(ft,,"%d %s %d %s %s %d %d %d %d %d %d\n",i.id,i.name,i.bnum,i.bname,i.aname,i.idate,i.imon,i.iyear,i.rdate,i.rmon,i.ryear);           // USE FPRINTF ()
//	fwrite(&s,dsize,1,ft);    // THE DATABASE IS IN TEXT MODE. SO USE
}                                 // TEXTMODE FUNCTION.
				  // FWRITE/FREAD IS FOR BINARY MODES.
fclose(fp);
fclose(ft);
remove("issue.txt");
rename("tissue.txt","issue.txt");
} */



//this is to create student id
void csid(){//to create a student record
int i,tid=0;
FILE *fp;
struct sid{
int id;
char ch[15];
};
struct sid s;
clrscr();
fp=fopen("sid.txt","a+");
printf("\nYOU ARE HERE TO CREATE STUDENT ID:");
printf("\nenter students name(max of 15 letters):");
while(fscanf(fp,"%d %s",&s.id,s.ch)!=EOF){tid=s.id;}
s.id=tid+1;
scanf("%s",s.ch);
fprintf(fp,"%d %s\n",s.id,s.ch);
fclose(fp);
}



//this is to add books in library
void addbl(){//to add new books in library
struct nb{
int bno;//book no
char bname[30];//book name
char aname[30];//author name
};
struct nb n;
FILE *bp;
int jb;
bp=fopen("lib.txt","a+");
clrscr();
printf("\nENTER THE BOOK NUMBER:");
scanf("%d",&jb);
while(fscanf(bp,"%d %s %s",&n.bno,n.bname,n.aname)!=EOF){
if(n.bno==jb){
printf("\nA BOOK IS ALREADY EXISTING WITH THE SAME NUMBER");
break;
}
}
if(n.bno!=jb){
n.bno=jb;
printf("\nENTER THE NAME OF THE BOOK:");
scanf("%s",n.bname);
printf("\nENTER AUTHORS NAME OF THE BOOK:");
scanf("%s",n.aname);
fprintf(bp,"%d %s %s\n",n.bno,n.bname,n.aname);
}
fclose(bp);
}



//this is to show the available books in library
void avb(){//to know the available books in library
int c=0;
FILE *ap;
struct ab{
int ab;//available book no
char abname[30];//available book name
char aat[30];//author of available book
};
struct ab a;
ap=fopen("lib.txt","r");
clrscr();
outtextxy(0,0,"AVAILABLE BOOKS IN THE LIBRARY ARE:");
printf("\n\nBOOK NUMBER\tBOOK NAME\tAUTHOR NAME");
while(fscanf(ap,"%d %s %s",&a.ab,a.abname,a.aat)!=EOF){
printf("\n%d\t\t%s\t\t%s",a.ab,a.abname,a.aat);
c=1;
}
if(c==0){
printf("\nTHERE ARE NO BOOKS AVAILABLE IN LIBRARY");
}
fclose(ap);
}



//this is to issue books to students
void issue(){//to issue books to students
FILE *ip,*fp,*ap;
int sidl,bl,bk,date,mon,year,rd,rm,ry;
char nam[15],bn[30],an[30];
struct ib{
int id;
char name[15];
int bnum;
char bname[30];
char aname[30];
int idate;
int imon;
int iyear;
int rdate;
int rmon;
int ryear;
};
struct ib i;
struct sid{
int id;
char ch[15];
};
struct sid s;
struct nb{
int bno;//book no
char bname[30];//book name
char aname[30];//author name
};
struct nb a;
fp=fopen("sid.txt","r");
ap=fopen("lib.txt","r");
ip=fopen("issue.txt","a+");
clrscr();
printf("\nPLEASE ENTER YOUR IDNO:");
scanf("%d",&sidl);
while(fscanf(fp,"%d %s",&s.id,s.ch)!=EOF){
if(sidl==s.id){
printf("\ncorrect id");
strcpy(nam,s.ch);
printf("\nPLEASE ENTER THE BOOK NUMBER:");
scanf("%d",&bk);
while(fscanf(ip,"%d %s %d %s %s %d %d %d %d %d %d",&i.id,i.name,&i.bnum,i.bname,i.aname,&i.idate,&i.imon,&i.iyear,&i.rdate,&i.rmon,&i.ryear)!=EOF){
if(bk==i.bnum){
printf("\nTHE BOOK HAS ALREADY BEEN ISSUED");
return;
}
}
while(fscanf(ap,"%d %s %s",&a.bno,a.bname,a.aname)!=EOF){
if(a.bno==bk){
bl=bk;
printf("\nthere is a book with that number");
strcpy(bn,a.bname);
strcpy(an,a.aname);
break;
}}
if(a.bno!=bl){
printf("\nthere is no book with that number");
return;}
do{
if(date>30){
printf("\ndate should be less than 12");
}printf("\nENTER THE DATE OF ISSUE(1-30):");
scanf("%d",&date);
}while(date>30);
do{
if(mon>12){
printf("\nmonth should be less than 12");
}printf("\nENTER THE MONTH OF ISSUE(1-12 only):");
scanf("%d",&mon);
}while(mon>12);
printf("\nENTER THE YEAR OF ISSUE:");
scanf("%d",&year);
rd=(date+15)%30;
if(date>15){
rm=mon+1;}
else{rm=mon;}
if(date>15&&mon==11)
ry=year+1;
else
ry=year;
i.id=sidl;
strcpy(i.name,nam);
i.bnum=bl;
strcpy(i.bname,bn);
strcpy(i.aname,an);
i.idate=date;
i.imon=mon;
i.iyear=year;
i.rdate=rd;
i.rmon=rm;
i.ryear=ry;
fprintf(ip,"%d %s %d %s %s %d %d %d %d %d %d\n",i.id,i.name,i.bnum,i.bname,i.aname,i.idate,i.imon,i.iyear,i.rdate,i.rmon,i.ryear);
break;
}}
if(sidl!=s.id){
printf("\nTHERE IS NO STUDENT WITH SUCH ID");
printf("\nPLEASE CHECK YOUR ID NO ONCE");
}
fclose(ap);
fclose(ip);
fclose(fp);
}




//this is to show the student details
void sdet(){//to know student details
FILE *ip,*fp;
int k,sidl;
struct ib{
int id;
char name[15];
int bnum;
char bname[30];
char aname[30];
int idate;
int imon;
int iyear;
int rdate;
int rmon;
int ryear;
};
struct ib i;
struct sid{
int id;
char ch[15];
};
struct sid s;
fp=fopen("sid.txt","r");
ip=fopen("issue.txt","r");
clrscr();
printf("\nPLEASE ENTER YOUR IDNO:");
scanf("%d",&sidl);
k=0;
while(fscanf(fp,"%d %s",&s.id,s.ch)!=EOF){
if(s.id==sidl){
printf("\ncorrect id");
printf("\nstudent id = %d\nstudent name = %s",s.id,s.ch);
while(fscanf(ip,"%d %s %d %s %s %d %d %d %d %d %d",&i.id,i.name,&i.bnum,i.bname,i.aname,&i.idate,&i.imon,&i.iyear,&i.rdate,&i.rmon,&i.ryear)!=EOF){
if(sidl==i.id){
if(k!=1){
printf("\nTHE FOLLOWING ARE THE STUDENT DETAILS");
printf("\nIDNO\tNAME\tBOOK_NO\tBOOK_NAME\tAUTHOR_NAME\tISSUE_DATE\tRETURN DATE");
printf("\n%d\t%s",i.id,i.name);
k++;
}
printf("\t%d\t%s\t\t%s\t\t%d-%d-%d\t%d-%d-%d\n\t",i.bnum,i.bname,i.aname,i.idate,i.imon,i.iyear,i.rdate,i.rmon,i.ryear);
}
break;
}
if(i.id!=sidl){
printf("\nno book is issued to this student");
}
break;
}
}
if(sidl!=s.id){
printf("\nTHERE IS NO STUDENT WITH SUCH ID");
printf("\nPLEASE CHECK YOUR ID NO ONCE");
}
fclose(ip);
fclose(fp);
}



/*this is the main program
void main(){//main program
int ch;
int c;
do{
clrscr();
ch=menu();
switch(ch){
case 1 :csid();break;
case 2 :delr();break;
case 3 :addbl();break;
case 4 :avb();break;
case 5 :issue();break;
case 6 :sdet();break;
case 7 :break;
default:printf("INVALID ENTRY:PLEASE TRY AGAIN");
}
printf("\nDO YOU WANNA TRY AGAIN(1->YES):");
scanf("%d",&c);
}while(c==1);
getch();
}*/