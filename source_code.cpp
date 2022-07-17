**************************
//HEADER FILES//
#include<iostream.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
**************************
struct date1
{
	int day;
	int mon;
	int year;
};
class STUDENT
{ int NOB, std;
  int fine;
  char sname[30];
  date1 d1,d2;
  protected:
  int enrollno;
  public:
  STUDENT()
  {
	NOB=0;
	fine=0;
	d1.day=0;
	d1.mon=0;
	d1.year=0;
	d2.day=0;
	d2.mon=0;
	d2.year=0;
  }
  void CREATE()
  {
	cout<<"\nenter student name:";gets(sname);
	cout<<"\nenter student rollno:";cin>>enrollno;
	cout<<"\nenter class:";cin>>std;
  }
//************************************************//
                              //DISPLAY FUNCTION//
//************************************************//
void DISPLAY()
  {
	cout<<"\n***************************\n";
	cout<<"\n student name:";puts(sname);
	cout<<"\n student rollno:";cout<<enrollno;
	cout<<"\n class:";cout<<std;
	cout<<"\n no of books issued:";cout<<NOB;
	cout<<"\n date of issue:";cout<<d1.day<<"-"<<d1.mon<<"-"<<d1.year;
	cout<<"\n date of return:";cout<<d2.day<<"-"<<d2.mon<<"-"<<d2.year;
	cout<<"\n fine to be paid:";cout<<fine;
  }
//************************************************//
  void f_fine()
  {
  cout<<"\n fine to be paid:";cout<<fine;
  }
	void DOI()
	{
	 struct date D;
	 getdate(&D);
	 d1.year=D.da_year;
	 d1.mon=D.da_mon;
	 d1.day=D.da_day;
	}
	 void DOR()
	{
	struct date C;
	getdate(&C);
	d2.year=C.da_year;
	d2.mon=C.da_mon;
	d2.day=C.da_day;
	}
	void get_nob()
	{
	NOB=NOB+1;
	}
	void set_nob()
  {
  NOB=NOB-1;
  }
  int ret_roll()
  {
	return enrollno;
  }
//************************************************//
                  // FINE CALCULATION  FUNCTION//
//************************************************//

  void calc_fine()
	{
	 int val=d1.day,M,N,val1=d2.day,F;
	 if(d1.mon==1)
	 {
	  M=val;
	 }
	  else if(d1.mon==2)
	 {
		M=31+val;
	 }
		else if(d1.mon==3)
	 {
		M=28+31+val;
	 }
	  else if(d1.mon==4)
	 {
		M=31+28+31+val;
	 }
	 else if(d1.mon==5)
	 {
		 M=30+31+28+31+val;
	 }
	 else if(d1.mon==6)
	 {
		M=31+30+31+28+31+val;
	 }
	 else if(d1.mon==7)
	 {
		M=30+31+30+31+28+31+val;
	 }
	 else if(d1.mon==8)
	 {
		M=31+30+31+30+31+28+31+val;
	 }
	 else if(d1.mon==9)
	 {
		M=31+31+30+31+30+31+28+31+val;
	 }
	 else if(d1.mon==10)
	 {
		 M=30+31+31+30+31+30+31+28+31+val;
	 }
	 else if(d1.mon==11)
	 {
		M=31+30+31+31+30+31+30+31+28+31+val;
	 }
	 else if(d1.mon==12)
	 {
			M=30+31+30+31+31+30+31+30+31+28+31+val;
	 }


	 if(d2.mon==1)
	 {
	  N=val1;
	 }
	  else if(d2.mon==2)
	 {
		N=31+val1;
	 }
		else if(d2.mon==3)
	 {
		N=28+31+val1;
	 }
	  else if(d2.mon==4)
	 {
		N=31+28+31+val1;
	 }
	 else if(d2.mon==5)
	 {
		 N=30+31+28+31+val1;
	 }
	 else if(d2.mon==6)
	 {
		N=31+30+31+28+31+val1;
	 }
	 else if(d2.mon==7)
	 {
		N=30+31+30+31+28+31+val1;
	 }
	 else if(d2.mon==8)
	 {
		N=31+30+31+30+31+28+31+val1;
	 }
	 else if(d2.mon==9)
	 {
		N=31+31+30+31+30+31+28+31+val1;
	 }
	 else if(d2.mon==10)
	 {
		 N=30+31+31+30+31+30+31+28+31+val1;
	 }
	 else if(d2.mon==11)
	 {
		N=31+30+31+31+30+31+30+31+28+31+val1;
	 }
	 else if(d2.mon==12)
	 {
			N=30+31+30+31+31+30+31+30+31+28+31+val1;
	 }
	F=N-M;
	if(F>10)
	{
	 fine=(F-1)*5;
	}
  }
};

class BOOK
{
 int qty,total_books;
  char bname[30],author[30];
  float price;
  protected:
  int bno;
  public:
  BOOK()
  {
	qty=0;
	bno=0;
   total_books=0;
  }
  void get_qty()
  {
	qty=qty+1;
  }
  void set_qty()
  {
	qty=qty-1;
  }
  void BCREATE()
  {
	cout<<"\nenter book name:";gets(bname);
	cout<<"\nenter bookno:";cin>>bno;
	cout<<"\nenter book price:";cin>>price;
	cout<<"\nenter author name :";gets(author);
	cout<<"\nenter number of books :";cin>>qty;
	calc_tot(qty);
  }
//************************************************//
                    //BOOK DISPLAY FUNCTION//
//************************************************//

  void BDISPLAY()
  {
   cout<<"\n***************************\n";
	cout<<"\n book name:";puts(bname);
	cout<<"  bookno:";cout<<bno;
	cout<<"\n author name:";puts(author);
	cout<<"\book Quantity:";cout<<qty;
	cout<<"\n  book price:";cout<<price;
  }
//************************************************//
  void calc_tot(int x)
  {
	 total_books+=x;
  }
  void tot_book()
  {
  cout<<"\n available book in the library:"<<total_books;
  }
  int ret_bno()
  {
	return bno;
  }
  void set_price(int x)
  {
	price=x;
  }
};
//************************************************//
                  //STUDENT RECORDS//
//************************************************//
                       //SEARCH FUNCTION//
//************************************************//

		
	 void SEARCH()
	 {               STUDENT S;
						  int R;
						  cout<<"\n enter student enroll";cin>>R;
						  fstream f2;
						  f2.open("d:/swathi/STUDENT.dat",ios::binary|ios::in);
						  f2.seekg(0,ios::beg);
						  int h=0;
						  while(!f2.eof())
						  {
							f2.read((char*)&S,sizeof(S));
							if(R==S.ret_roll())
							{
							 S.DISPLAY();
							 h=1;
							 break;
							}
						  }
                    if(h==0)
						  {
							cout<<"\nSTUDENT RECORD IS NOT FOUND";
						  }
						 f2.close();
	 }
//************************************************//
                               //MODIFY FUNCTION//
//************************************************//

	 void MODIFY()
	 {
					 STUDENT S;
					 int c;
					 cout<<"\nenter enroll no whose record is to be modified:";
					 cin>>c;
					 fstream f3;
					 f3.open("d:/swathi/STUDENT.dat",ios::in|ios::out|ios::binary);
					 while(!f3.eof())
					 {
						f3.read((char*)&S,sizeof(S));
						if(S.ret_roll()==c)
						  {
							long x=f3.tellg();
							f3.seekg(x-sizeof(S));
							cout<<"\nNew record to modify:";
							S.CREATE();
								f3.write((char*)&S,sizeof(S));
								break;
							}
					 }
					 cout<<"\nrecord modified!";

					 f3.close();

	 } 
//************************************************//
                   //DELETE FUNCTION//
//************************************************//

  void DELETE()
  {
					STUDENT S;
					int j;
					cout<<"\nenter enroll no whose record is to be deleted:";cin>>j;
					ifstream f4;
					f4.open("d:/swathi/STUDENT.dat",ios::in|ios::binary);
					ofstream f5;
					f5.open("d:/swathi/STUDENT1.dat",ios::out|ios::binary);
					while(!f4.eof())
					{
						f4.read((char*)&S,sizeof(S));
						if(S.ret_roll()!=j)
						{
						  f5.write((char*)&S,sizeof(S));
						}
					}
					f4.close();
					f5.close();
					remove("d:/swathi/STUDENT.dat");
					rename("d:/swathi/STUDENT1.dat","d:/swathi/STUDENT.dat");

  }
//************************************************//
                   //ADD FUNCTION//
//************************************************//

  void ADD()
  {
	 STUDENT S;
	 fstream f7;
	 f7.open("d:/swathi/STUDENT.dat",ios::in|ios::out|ios::app|ios::binary);
	 S.CREATE();
	 f7.write((char*)&S,sizeof(S));
	 f7.close();
	 cout<<"\nStudent record added.";
  }
//************************************************//
               //STUDENT DISPLAY FUNCTION//
//************************************************//

  void STUDENTDISPLAY()
  {
  STUDENT S;
  fstream f;
  f.open("d:/swathi/STUDENT.dat",ios::binary|ios::in);
  cout<<"\n ALL STUDENTS RECORDS";
						f.seekg(0,ios::beg);
						while(!f.eof())
						{
						 f.read((char*)&S,sizeof(S));
						 S.DISPLAY();
						 getch();
						}
						f.close();
  }
//************************************************//
                  //STUDENT CREATE FUNCTION//
//************************************************//


  void STUD_CREATE()
  {
	STUDENT S;
	 ofstream f1;
	 char A='Y';
	  f1.open("d:/swathi/STUDENT.dat",ios::binary|ios::in|ios::out);
	while(A=='Y')
						 {
							S.CREATE();
						 f1.write((char*)&S,sizeof(S));
						 cout<<"\ndo u want to enter another record(Y\N):";cin>>A;
						 }
  }
//************************************************//

	//BOOK RECORD//
//************************************************//

                    //BOOK SEARCH FUNCTION//
//************************************************//


	void BSEARCH()
	 {                 BOOK B;
							 int T,j=0;
						  cout<<"\n enter book no";cin>>T;
						  fstream Q2;
						  Q2.open("d:/swathi/BOOK.dat",ios::in|ios::binary);
						  Q2.seekg(0,ios::beg);
						  while(!Q2.eof())
						 {
							Q2.read((char*)&B,sizeof(B));
							if(T==B.ret_bno())
						  {
							 B.BDISPLAY();
							 j=1;
							 break;
						  }
						 }
                    if(j==0)
						  {
							cout<<"\nBOOK IS NOT FOUND";
						  }
						 Q2.close();
	 }
//************************************************//
                  //BOOK MODIFY FUNCTION//
//************************************************//

	 void BMODIFY()
	 {
					 BOOK B;
					 int p,ch,ch1;
					  cout<<"\nenter book no whose record is to be modified:";
					  cin>>p;
					  fstream Q3;
					  Q3.open("d:/swathi/BOOK.dat",ios::in|ios::out|ios::binary);
					  while(!Q3.eof())
					 {
						 Q3.read((char*)&B,sizeof(B));
						  if(B.ret_bno()==p)
						  {
							long o=Q3.tellg();
							Q3.seekg(o-sizeof(B),ios::beg);
							cout<<"\nNew record to modify:";
							cout<<"\nprice modification:";
							cin>>ch;
							cout<<"\nenter new price:";cin>>ch1;
							B.set_price(ch1);
							Q3.write((char*)&B,sizeof(B));
							break;
							}
					 }
					 Q3.close();
					 cout<<"\nRECORD IS MODIFIED!";


	 }
//************************************************//
                //BOOK DELETE FUNCTION//
//************************************************//


	  void BDELETE()
  {             BOOK B;
					 int d;
					 cout<<"\nenter book no whose record is to be deleted:";cin>>d;
					 ifstream Q4;
					 Q4.open("d:/swathi/BOOK.dat",ios::in|ios::binary);
					 ofstream Q5;
					 Q5.open("d:/swathi/BOOK1.dat",ios::out|ios::binary);
					 while(!Q4.eof())
						{
							Q4.read((char*)&B,sizeof(B));
							if(B.ret_bno()!=d)
							{
							  Q5.write((char*)&B,sizeof(B));
							}
						}
					Q4.close();
					Q5.close();
					remove("d:/swathi/BOOK.dat");
					rename("d:/swathi/BOOK1.dat","d:/swathi/BOOK.dat");
					cout<<"\nRECORD IS DELETED!";

  }
//************************************************//
                  //BOOK ADD FUNCTION//
//************************************************//

  void BADD()
  {
	 BOOK B;
	 fstream Q6;
	 Q6.open("d:/swathi/BOOK.dat",ios::in|ios::out|ios::app|ios::binary);
	 B.BCREATE();
	 Q6.write((char*)&B,sizeof(B));
	 Q6.close();
	 cout<<"\nBOOK record added.";
  }
//************************************************//
                  //BOOK DISPLAY FUNCTION//
//************************************************//

  void BOOKDISPLAY()
  {
	fstream Q;
	BOOK B;
	Q.open("BOOK.dat",ios::binary|ios::in);
						  Q.seekg(0,ios::beg);
						  while(!Q.eof())
						 {

						 Q.read((char*)&B,sizeof(B));
						 B.BDISPLAY();
						 getch();
						 }
						 Q.close();
	}
//************************************************//
           //BOOK CREATE FUNCTION//
//************************************************//

	void BOOK_CREATE()
	{
	 BOOK B;
	 char Z='W';
	 ofstream Q1;
	 Q1.open("d:/swathi/BOOK.dat",ios::binary|ios::out);
	 while(Z=='W')
						 {
						 B.BCREATE();
						 Q1.write((char*)&B,sizeof(B));
						 cout<<"\ndo u want to enter another record(W\N):";cin>>Z;
						 }
	}
//************************************************//

          //BOOK  ISSSUE//
//************************************************//
          //BOOK SEARCH FUNCTION//
//************************************************//

  void BBSEARCH()
	 {                 BOOK B;
							 int T1;
						  cout<<"\n enter book no";cin>>T1;
						  fstream I3;
						  I3.open("d:/swathi/BOOK.dat",ios::in|ios::binary|ios::out);
						  I3.seekg(0,ios::beg);
						  while(!I3.eof())
						 {
							I3.read((char*)&B,sizeof(B));
							if(T1==B.ret_bno())
						  {
                      B.set_qty();
							 B.BDISPLAY();
							 I3.seekp(I3.tellp()-sizeof(B),ios::beg);
							 I3.write((char*)&B,sizeof(B));
							 //B.tot_book();
							 break;
						  }
						 }
						 I3.close();
	 }
//************************************************//
       
  void set()
  {
	int SNO, flag=0;
	STUDENT S;
	cout<<"\nenter STUDENT NO:";cin>>SNO;
	fstream I;
	I.open("d:/swathi/STUDENT.dat",ios::binary|ios::in|ios::out);
	I.seekg(0,ios::beg);
	while(!I.eof())
	{
	 I.read((char*)&S,sizeof(S));
	 if(SNO==S.ret_roll())
	 {
	  //BBSEARCH();
	  flag=1;
	  S.DOI();
		I.seekp(I.tellp()-sizeof(S),ios::beg);
		I.write((char*)&S,sizeof(S));
	  break;
	 }
	}
	if(flag==1)
	{
		BBSEARCH();
		S.get_nob();
		I.seekp(I.tellp()-sizeof(S),ios::beg);
		I.write((char*)&S,sizeof(S));
		I.close();
	}
	else
	{
		cout<<"\nStudent not found";
		I.close();
	}
 }
//************************************************//

            //BOOK DEPOSIT//
//************************************************//
               //DEPOSIT SEARCH FUNCTION//
//************************************************//

  void DSEARCH()
	 {
							BOOK B;
							int T2;
							cout<<"\n enter book no";cin>>T2;
							fstream Z3;
							Z3.open("d:/swathi/BOOK.dat",ios::in|ios::binary|ios::out);
							Z3.seekg(0,ios::beg);
							while(!Z3.eof())
						  {
							Z3.read((char*)&B,sizeof(B));
							if(T2==B.ret_bno())
						  {
							 B.get_qty();
							 B.BDISPLAY();
							 Z3.seekp(Z3.tellp()-sizeof(B),ios::beg);
							 Z3.write((char*)&B,sizeof(B));
							 //B.tot_book();
							 break;
						  }
						 }
						 Z3.close();
	 }
//************************************************//

  void get()
  {
	int stno,flag1=0;
	cout<<"\nenter student no";cin>>stno;
	STUDENT S;
	BOOK B;
	fstream Z;
	Z.open("d:/swathi/STUDENT.dat",ios::binary|ios::in|ios::out);
	Z.seekg(0,ios::beg);
	while(!Z.eof())
	{
	 Z.read((char*)&S,sizeof(S));
	 if(stno==S.ret_roll())
	 {
	  flag1=1;
	  S.DOR();
		Z.seekp(Z.tellp()-sizeof(S),ios::beg);
		Z.write((char*)&S,sizeof(S));
		 S.calc_fine();

	  break;
	 }
	}
	if(flag1==1)
	{
	 DSEARCH();
	 S.set_nob();
	 Z.seekp(Z.tellp()-sizeof(S),ios::beg);
	 Z.write((char*)&S,sizeof(S));
     S.f_fine();
	 Z.close();
	 }
	 else
	 {
	  cout<<"\nStudent not found";
	  Z.close();
	 }
  }
void main()
{
  int x,N;
  char ans='y', ANS='s';
  fstream f1;
  STUDENT S;
  BOOK B;
  cout<<"\n MAIN MENU";
  while(ans=='y')
 {
	MAINMENU:
	cout<<"\n1.BOOK ISSUE";
	cout<<"\n2.BOOK DEPOSIT";
	cout<<"\n3.ADMINISTRATOR MENU";
	cout<<"\n4.EXIT";
	cin>>x;
	clrscr();
	switch(x)
	{
		case 1:
		cout<<"BOOK ISSUE";
		 set();
		 cout<<"\nBOOK IS ISSUED";
		 cout<<"\nNOTE:book must be returned within ten days.";
		 cout<<"\nfine-5 rupee per day";
		 break;
		case 2:
		cout<<"BOOK DEPOSIT";
       get();
		break;
		case 3:
			clrscr();
		  while(ANS=='s')
			{
			  cout<<"\n1.CREATE STUDENT RECORD";
			  cout<<"\n2.DISPLAY ALL STUDENT RECORDS";
			  cout<<"\n3.DISPLAY SPECIFIC STUDENT RECORD";
			  cout<<"\n4.MODIFY STUDENT RECORD";
			  cout<<"\n5.DELETE STUDENT RECORD";
			  cout<<"\n6.ADD STUDENT RECORD";
			  cout<<"\n7.CREATE BOOK RECORD";
			  cout<<"\n8.DISPLAY ALL BOOKS RECORD";
			  cout<<"\n9.DISPLAY SPECIFIC BOOK RECORD";
			  cout<<"\n10.MODIFY BOOK RECORD";
			  cout<<"\n11.DELETE BOOK RECORD";
			  cout<<"\n12.ADD BOOK RECORD";
			  cout<<"\n13.BACK TO MAIN MENU";
			  cin>>N;
			  clrscr();
						switch(N)
					{
						case 1:
						cout<<"\nSTUDENT RECORDS";
                                                                                STUD_CREATE();
		                                                      break;

					              case 2:
						  STUDENTDISPLAY();
						   break;

						  case 3:
						  SEARCH();
						  break;

						 case 4:
							MODIFY();
							break;

						 case 5:
						  DELETE();
						  break;

						 case 6:
							ADD();
							break;

						 case 7:
						 cout<<"\nBOOK RECORDS";
						 BOOK_CREATE();
						 break;

							case 8:
							cout<<"\n ALL BOOK RECORDS";
							BOOKDISPLAY();
							break;

						  case 9:
						  BSEARCH();
						  break;

						  case 10:
						  BMODIFY();
						  break;

						  case 11:
						  BDELETE();
						  break;

						  case 12:
						  BADD();
						  break;

						  case 13:
						  goto MAINMENU;
						  deafult:
						  cout<<"\nwrong choice.";
			 }
		  cout<<"\nmore operation(s/t)";cin>>ANS;
        	clrscr();
	}
	case 4:
   exit(0);
 }
 cout<<"\nmore operations?(y/n):";cin>>ans;
}
}



