 #include<conio.h>
 #include<dos.h>
 #include<fstream.h>
 
 void jain(int a)
 {
 sound((a*8)/2);
 delay(300);
 nosound();
 }
 
 void main(int argc,char *argv[])
 {
 char dude;
 fstream file1;
 file1.open(argv[1],ios::out);
 clrscr();
 cout<<"PIANO "<<" Press 'q' to exit.";
 while(dude!='q')
 {
 jain(dude);
 dude=getch();
 if(dude!='q')
 file1.put(dude);
 }
 file1.close();
 } 