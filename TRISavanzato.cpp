#include <iostream>
#include <cstring>
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define random(x) rand() % x
#define randomize
using namespace std;
char tab[3][3];
int punti1,punti2;
void SetColor(unsigned short color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
int caso (int max)
{
    return (random(max)+1);
}
bool allineati(int &y,int &x)
{
    //controlla se almeno 2 solo allineati
    if ((tab[0][0]=='X') && (tab[0][1]=='X') && (tab[0][2]==' ')){x=0; y=2; return true;}
    else if ((tab[0][2]=='X') && (tab[0][1]=='X') && (tab[0][0]==' ')){x=0; y=0; return true;}
    else if ((tab[0][0]=='X') && (tab[0][2]=='X') && (tab[0][1]==' ')){x=0; y=1; return true;}
    
    
    if ((tab[1][0]=='X') && (tab[1][1]=='X') && (tab[1][2]==' ')){x=1; y=2; return true;}
    else if ((tab[1][2]=='X') && (tab[1][1]=='X') && (tab[1][0]==' ')){x=1; y=0; return true;}
    else if ((tab[1][0]=='X') && (tab[1][2]=='X') && (tab[1][1]==' ')){x=1; y=1; return true;}
    
    
    if ((tab[2][0]=='X') && (tab[2][1]=='X') && (tab[2][2]==' ')){x=2; y=2; return true;}
    else if ((tab[2][2]=='X') && (tab[2][1]=='X') && (tab[2][0]==' ')){x=2; y=0; return true;}
    else if ((tab[2][0]=='X') && (tab[2][2]=='X') && (tab[2][1]==' ')){x=2; y=1; return true;}
    
    
     if ((tab[0][0]=='X') && (tab[1][0]=='X') && (tab[2][0]==' ')){x=2; y=0; return true;}
    else if ((tab[1][0]=='X') && (tab[2][0]=='X') && (tab[0][0]==' ')){x=0; y=0; return true;}
    else if ((tab[0][0]=='X') && (tab[2][0]=='X') && (tab[1][0]==' ')){x=1; y=0; return true;}
    

    if ((tab[0][0]=='X') && (tab[1][1]=='X') && (tab[2][2]==' ')){x=2; y=2; return true;}
    else if ((tab[1][1]=='X') && (tab[2][2]=='X') && (tab[0][0]==' ')){x=0; y=0; return true;}
    else if ((tab[0][0]=='X') && (tab[2][2]=='X') && (tab[1][1]==' ')){x=1; y=1; return true;}
    
    
    if ((tab[0][1]=='X') && (tab[1][1]=='X') && (tab[2][1]==' ')){x=2; y=1; return true;}
    else if ((tab[1][1]=='X') && (tab[2][1]=='X') && (tab[0][1]==' ')){x=0; y=1; return true;}
    else if ((tab[0][1]=='X') && (tab[2][1]=='X') && (tab[1][1]==' ')){x=1; y=1; return true;}
    
    
    if ((tab[2][0]=='X') && (tab[1][1]=='X') && (tab[0][2]==' ')){x=0; y=2; return true;}
    else if ((tab[0][2]=='X') && (tab[1][1]=='X') && (tab[2][0]==' ')){x=2; y=0; return true;}
    else if ((tab[2][0]=='X') && (tab[0][2]=='X') && (tab[1][1]==' ')){x=1; y=1; return true;}
    
    
    if ((tab[0][2]=='X') && (tab[1][2]=='X') && (tab[2][2]==' ')){x=2; y=2; return true;}
    else if ((tab[1][2]=='X') && (tab[2][2]=='X') && (tab[0][2]==' ')){x=0; y=2; return true;}
    else if ((tab[0][2]=='X') && (tab[2][2]=='X') && (tab[1][2]==' ')){x=1; y=2; return true;}
    else return false;
}
void tris()
{int j;	j=0;
int r; r=0;
int m; m=-15;
int n; n=0;
	for (int i=154;i<160;i++)
	{
		n=m;
		m=m+15;
		SetColor(i);
			 cout<<endl;
    cout<<"TTTTTTTTTTTTTTTTTTTTTTT RRRRRRRRRRRRRRRRR  IIIIIIIIII     SSSSSSSSSSSSSSS "<<endl;
    cout<<"T                     T R                R I        I   SS               S"<<endl;
    cout<<"T                     T R     RRRRRR     R I        I  S     SSSSSS      S"<<endl;
    cout<<"T     TT       TT     T RR    R     R     R II    II   S     S     SSSSSSS"<<endl;
	cout<<"TTTTTT  T     T  TTTTTT  R    R     R     R  I    I    S     S            "<<endl;
    cout<<"        T     T          R    R     R     R  I    I    S     S            "<<endl;
    cout<<"        T     T          R    RRRRRR     R   I    I     S    SSSS         "<<endl;
    cout<<"        T     T          R             RR    I    I      SS      SSSSS    "<<endl;
    cout<<"        T     T          R    RRRRRR     R   I    I        SSS        SS  "<<endl;
    cout<<"        T     T          R    R     R     R  I    I           SSSSSS    S "<<endl;
    cout<<"        T     T          R    R     R     R  I    I                S     S"<<endl;
    cout<<"        T     T          R    R     R     R  I    I                S     S"<<endl;
    cout<<"      TT       TT      RR     R     R     R II      II SSSSSSS     S     S"<<endl;
    cout<<"      T         T      R      R     R     R I        I S      SSSSSS     S"<<endl;
    cout<<"      T         T      R      R     R     R I        I S               SS "<<endl;
    cout<<"      TTTTTTTTTTT      RRRRRRRR     RRRRRRR IIIIIIIIII  SSSSSSSSSSSSSSS   "<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<"CARICAMENTO: "<<j<<"%"<<endl;
    
    for (r=0;r<=m;r++)
    {
    	SetColor(255);
    	cout<<" ";
    	if (r>=n)
    	{
    	Sleep(30);	
		}
    	
	}
	j=j+20;
		SetColor(i);
    Sleep(400);
    system("cls");
	}
}
bool parita(char tab[3][3])
{
	int tot=0;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			if (tab[i][j]!=' ')
			{
				tot++;
			}
		}
	}
if (tot==9)
{
	return true;
}
else
{
    return false;
}
}
void condizione (char tab[3][3],int &punti1,int &punti2)
{
    if ((tab[0][0]=='X') && (tab[0][1]=='X') && (tab[0][2]=='X')){punti1++;}
    else if (tab[1][0]=='X' && tab[1][1]=='X' && tab[1][2]=='X'){punti1++;}
    else if (tab[2][0]=='X' && tab[2][1]=='X' && tab[2][2]=='X'){punti1++;}
    else if (tab[0][0]=='X' && tab[1][0]=='X' && tab[2][0]=='X'){punti1++;}
    else if (tab[0][0]=='X' && tab[1][1]=='X' && tab[2][2]=='X'){punti1++;}
    else if (tab[0][1]=='X' && tab[1][1]=='X' && tab[2][1]=='X'){punti1++;}
    else if (tab[2][0]=='X' && tab[1][1]=='X' && tab[0][2]=='X'){punti1++;}
    else if (tab[0][2]=='X' && tab[1][2]=='X' && tab[2][2]=='X'){punti1++;}
    if ((tab[0][0]=='O') && (tab[0][1]=='O')&& (tab[0][2]=='O')){punti2++;}
    else if (tab[1][0]=='O' && tab[1][1]=='O' && tab[1][2]=='O'){punti2++;}
    else if (tab[2][0]=='O' && tab[2][1]=='O' && tab[2][2]=='O'){punti2++;}
    else if (tab[0][0]=='O' && tab[1][0]=='O' && tab[2][0]=='O'){punti2++;}
    else if (tab[0][0]=='O' && tab[1][1]=='O' && tab[2][2]=='O'){punti2++;}
    else if (tab[0][1]=='O' && tab[1][1]=='O' && tab[2][1]=='O'){punti2++;}
    else if (tab[2][0]=='O' && tab[1][1]=='O' && tab[0][2]=='O'){punti2++;}
    else if (tab[0][2]=='O' && tab[1][2]=='O' && tab[2][2]=='O'){punti2++;}
}
void chiedinumpartite(int &n)
{
    do
    {
        cout<<"Dopo quante vittorie si vince? ";
        cin>>n;
    } while(n<=0);
}

bool vittoria(int punt1, int punt2, int n, char nome1[50], char nome2[50])
{
    system("cls");
    if(punt1==n)
    {
        cout<<endl<<"Il vincitore e' "<<nome1<<endl;
        return true;
    }
    if(punt2==n)
    {
        cout<<endl<<"Il vincitore e' "<<nome2<<endl;
        return true;
    }
    return false;
}

void carica (char tab[3][3])
{
	for (int i=0;i<=3;i++)
	{
        for (int j=0;j<=3;j++)
        {
            tab[i][j]=' ';
        }
    }
}

int turni(int nturno)
{
    if (nturno%2==0)
    {
        return 2;
    }
    else return 1;
}

int coloreturno(int turno)
{
    if(turno==1) return 223; //rosa
    else return 191; //azzurrino
}

void tabellamigliore(char tab[3][3], int colore)
{
    char contenuto;
    for(int rig=0; rig<3; rig++)
    {
        SetColor(155);
        cout<<"      ";
        SetColor(colore);
        cout<<"                       "<<endl;
        for(int i=1; i<=3; i++)
        {
            SetColor(155);
            cout<<"      ";
            for(int col=0; col<3; col++)
            {

                SetColor(colore);
                cout<<"  ";
                SetColor(255);
                if(i==2)
                {
                    contenuto=tab[rig][col];
                    if(contenuto=='X')
                    {
                        SetColor(253);
                        cout<<"  "<<contenuto<<"  ";
                    }
                    else
                    {
                        SetColor(251);
                        cout<<"  "<<contenuto<<"  ";
                    }
                }
                else cout<<"     ";
                if(col==2)
                {
                    SetColor(colore);
                    cout<<"  "<<endl;
                }
            }
        }
    }
    SetColor(155);
    cout<<"      ";
    SetColor(colore);
    cout<<"                       "<<endl<<endl;
    SetColor(155);
}

void acquisiscinomi(char nome1[],char nome2[],int differenzia)
{
	if (differenzia==2)
	{
    cout<<"Inserisci il nome del giocatore 1 ";
    fflush(stdin);
    gets(nome1);
    cout<<"Inserisci il nome del giocatore 2 ";
    fflush(stdin);
    gets(nome2);
}
else
{
	cout<<"Inserisci il nome del giocatore 1 ";
    fflush(stdin);
    gets(nome1);
}
}
void acquisisci(char tab[3][3], int &x, int &y, int nturno)
{
    if (nturno==0)
    {
    if(allineati(x,y)==true)
    {
	}
	else
	{
  do{
    x=caso(3);
    y=caso(3);
    x--;
    y--;
    }while(tab[y][x]!=' ');

}
 tab[y][x]='O';
    }
     else
    {do
    {
        do
        {
            cout<<"Inserisci la colonna ";
            cin>>x;
            x--;
        }while(x<0 || x>2);
        do
        {
            cout<<"Inserisci la riga ";
            cin>>y;
            y--;
        }while(y<0 || y>2);
    } while(tab[y][x]!=' ');

    if(turni(nturno)==1) tab[y][x]='X';
    else tab[y][x]='O';
    }
}
void computer()
{
	 int rows,cols, nturno, n,tot1,tot2;
    nturno=1;
      //(il numero e' lo sfondo, la lettera la scritta)
    char nome1[50],nome2[50];
    acquisiscinomi(nome1,nome2,1);
    chiedinumpartite(n);
    tot1=0;
    tot2=0;
    do
    {
	carica(tab);
	//lasciare ne ciclo i punti e togliere i totali
    punti2=0;
    punti1=0;

	do
        {
        if (turni(nturno)==1)
        {
            cout<<"Turno di "<<nome1<<endl;
            tabellamigliore(tab, 223);
        	acquisisci(tab, cols, rows,nturno);
        }
        else
        {
        cout<<"Turno del computer "<<endl;
		tabellamigliore(tab, 191);
		acquisisci(tab, cols, rows,0);
        system("pause");
        }
        condizione(tab,punti1,punti2);
        nturno++;
        system("cls");
       } while(punti1==0 && punti2==0 && parita(tab)!=true);
    if(punti1==1) cout<<"Il vincitore di questa singola partita e' "<<nome1<<endl;
    else
    {
        if(punti2==1) cout<<"Il vincitore di questa singola partita e' il computer"<<endl;
        else cout<<"Partita finita in pareggio"<<endl;
    }
    system("pause");
    system("cls");
     tot1=punti1+tot1;
     tot2=punti2+tot2;
	 }while(vittoria(tot1, tot2, n, nome1, "computer")==false);
}

int main()
{
randomize;
int numcaso;
int scelta;
char giocoancora;
    system("color 9b");
	tris();
	system("color 9b");
	do{
	cout<<"Scegli cosa vuoi fare: giocare contro il computer (1) oppure contro un altro giocatore (2) ";
	do
    {
	cin>>scelta;
    } while(scelta!=1 && scelta!=2);
	if (scelta==1)
	{
	  computer();
	}
	else
    {
	 int rows,cols, nturno, n,tot1,tot2;
    nturno=0;
      //(il numero e' lo sfondo, la lettera la scritta)
    char nome1[50],nome2[50];
    acquisiscinomi(nome1,nome2,2);
    chiedinumpartite(n);
    punti2=0;
    punti1=0;
    tot1=0;
    tot2=0;
    do
    {
	carica(tab);
	//lasciare ne ciclo i punti e togliere i totali
    punti2=0;
    punti1=0;

	do{
        nturno++;
        if (turni(nturno)==1)
        {
            cout<<"Turno di "<<nome1<<endl;
        }
        else cout<<"Turno di "<<nome2<<endl;
        tabellamigliore(tab, coloreturno(turni(nturno)));
        acquisisci(tab, cols, rows, nturno);
        condizione(tab,punti1,punti2);
        system("cls");
    }while(punti1==0 && punti2==0 && parita(tab)!=true);

    if(punti1==1) cout<<"Il vincitore di questa singola partita e' "<<nome1<<endl;
    else
    {
        if(punti2==1) cout<<"Il vincitore di questa singola partita e' "<<nome2<<endl;
        else cout<<"Partita finita in pareggio"<<endl;
    }
    system("pause");
    system("cls");
    tot1=punti1+tot1;
    tot2=punti2+tot2;
    }while(vittoria(tot1, tot2, n, nome1, nome2)==false);
    }
    cout<<"Vuoi giocare ancora? si quindi premi (s) o no (n)? ";
    cin>>giocoancora;
    system("cls");
	}while(giocoancora=='s');
}
