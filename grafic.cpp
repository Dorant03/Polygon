#include <iostream>
#include <windows.h>
#include "Poly.h"
using namespace std;
void printPolygon(Poly , int n);


void printPolygon(Poly polygon, int n)
{
	cout<<n<<endl;
	HWND handle = FindWindow("ConsoleWindowClass", NULL); //Ищу Хандл окна консоли
    HDC hdc = GetDC(handle); //Получаю Хандл консоли в переменную
 
	HPEN pen=CreatePen(PS_SOLID,1,RGB(255,255,255)); //Создаю ручку и задаю ей цвет
	HBRUSH brush=CreateSolidBrush(RGB(0,0,0)); //Создаю кисть и задаю ей цвет
	SelectObject(hdc,pen); //Выбираю созданную ручку
	SelectObject(hdc,brush); //Выбираю созданную кисть

	POINT *point=new POINT[n+1];
	//Point *points=new Point[n];
	for(int i=0; i<n; i++)
	{
		//points[i]=polygon.getPoints()[i];
	}
	for(int i=0; i<n; i++)
	{
		cout<<polygon.getPoints()[i].getX()<<ends<<polygon.getPoints()[i].getY()<<endl;
		point[i].x=polygon.getPoints()[i].getX()*20+500;
		point[i].y=polygon.getPoints()[i].getY()*(-1)*20+300;
	}
	cout<<polygon.getPoints()[0].getX()<<ends<<polygon.getPoints()[0].getY()<<endl;
	point[n].x=polygon.getPoints()[0].getX()*20+500;
	point[n].y=polygon.getPoints()[0].getY()*(-1)*20+300;

	for(int i=0; i<50; i++) cout<<"\n";
	MoveToEx(hdc, 500, 0, NULL);
	LineTo(hdc, 500, 600);
	MoveToEx(hdc, 0, 300, NULL);
	LineTo(hdc, 1100, 300);
	pen=CreatePen(PS_SOLID,1,RGB(0,0,255));
	SelectObject(hdc,pen);
	Polyline(hdc, point , n+1);
	pen=CreatePen(PS_SOLID,1,RGB(255,255,255));
	SelectObject(hdc,pen);
	delete [] point;
}
void menu()
{
	cout<<"Menu:"<<endl;
	cout<<"1.Create polygon"<<endl;
	cout<<"2.Add Point polygon"<<endl;
	cout<<"3.Add clone polygon"<<endl;
	cout<<"4.Move polygon"<<endl;
	cout<<"5.Move polygon(clone)"<<endl;
	cout<<"6.Scaling polygon"<<endl;
	cout<<"7.Scaling polygon(clone)"<<endl;
	cout<<"8.Print polygon"<<endl;
	cout<<"9.Clear window"<<endl;
}
int main()
{	
	Poly *polygon=new Poly[20];
	setlocale (LC_ALL, "ukr");
	menu();
	int vybir; int count=0; int k; double w=0;
	double x,y;
	cout<<"\nSelection: "; cin>>vybir; cin.get(); cout<<endl;
	while(vybir)
	{   
		if(0<vybir && vybir<=9)
		{
			switch(vybir)
			{
			    case 1:
				{
					count++;
					cout<<"Added to the "<<count<<"-th position"<<endl;
					break;
				}
				case 2:
				{
					cout<<"Number polygon: "; cin>>k;
					if(count>=k)
					{ 
						polygon[k-1].addPoint(); 
						cout<<"Added"<<endl; 
					}
					else
					{ 
						cout<<"Error: list index out of range"<<endl; 
					}
					break;
				}
				case 3:
				{
					cout<<"Number polygon: "; cin>>k;
					if(count>=k)
					{
						polygon[count]=polygon[k-1];
						count++;
						cout<<"Cloned to the "<<count<<"-th position"<<endl;
					}
					else cout<<"Error: list index out of range"<<endl;
					break;
				}
				case 4:
				{
					cout<<"Number polygon: "; cin>>k;
					if(count>=k)
					{
	                     cout<<"Enter x,y: "; cin>>x>>y;
						 polygon[k-1]+=Point(x,y);
						 cout<<"Polygon changed"<<endl;
					}
					else{ cout<<"Error: list index out of range"<<endl; }
					break;
				}
				case 5:
				{
				    cout<<"Number polygon: "; cin>>k;
					if(count>=k)
					{
						cout<<"Enter x,y: "; cin>>x>>y;
						polygon[count]=polygon[k-1]+Point(x,y);
						count++;
						cout<<"Cloned to the "<<count<<"-th position"<<endl;
					}
					else cout<<"Error: list index out of range"<<endl;
					break;
				}
				case 6:
				{
					 cout<<"Number polygon: "; cin>>k;
					 if(count>=k)
					 {
						 cout<<"Enter k: "; cin>>w;
						 polygon[k-1]*=w;
						 cout<<"Polygon changed"<<endl;
					 }
					 else cout<<"Error: list index out of range"<<endl;
					 break;
				}
				case 7:
				{
					 cout<<"Number polygon: "; cin>>k;
					 if(count>=k)
					 {
						 cout<<"Enter k: "; cin>>w;
						 polygon[count]=polygon[k-1]*w;
						 count++;
						 cout<<"Cloned to the "<<count<<"-th position"<<endl;
					 }
					 else cout<<"Error: list index out of range"<<endl;
					 break;
				}
				case 8:
				{
					cout<<"Number polygon: "; cin>>k;
					int n=polygon[k-1].getN();
					printPolygon(polygon[k-1], n);
					break;
				}
				case 9:
				{
					system("cls");
					menu();
					break;
				}
			}
		}
		else{  cout<<"ERROR!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;                 }
		cout<<"\nSelection: ";
		cin>>vybir; cin.get(); cout<<endl;
	}
	/*polygon->puchBack(Poly());

	polygon->getValue(0)->data.addPoint(0,0);//
	polygon->getValue(0)->data.addPoint(5,-1);//
	polygon->getValue(0)->data.addPoint(5,5);//
	polygon->getValue(0)->data.addPoint(1,4.5);//
	polygon->getValue(0)->data.addPoint(0,0);//
    return 0;
}

















void infinity(int x,int y) //Это функция в дальнейшем будет выводить символ бесконечности
{
	HWND handle = FindWindow("ConsoleWindowClass", NULL); //Ищу Хандл окна консоли
        HDC dc = GetDC(handle); //Получаю Хандл консоли в переменную
 
	HPEN pen=CreatePen(PS_SOLID,1,RGB(255,255,255)); //Создаю ручку и задаю ей цвет
	HBRUSH brush=CreateSolidBrush(RGB(0,0,0)); //Создаю кисть и задаю ей цвет
	SelectObject(dc,pen); //Выбираю созданную ручку
	SelectObject(dc,brush); //Выбираю созданную кисть
       
	POINT poly[4];
    BYTE polytype[4];
	poly[0].x =0;
    poly[0].y =0;
    poly[1].x =30;
     poly[1].y =0;
    poly[2].x =30;
poly[2].y =100;
poly[3].x=0;
poly[3].y=0;
//Polyline(dc, poly , 4);
//for(int i=0; i<50; i++) cout<<"\n";
//Polyline(dc, poly , 4);
Polyline(dc, poly , 4);
	/*int dx=100; //С этими значениями лучше поиграть, сами поймете что это
	y=y+2; 
	SetPixel(dc, 50,50, RGB(255,255,255));
	MoveToEx(dc, 50, 50, NULL);
	LineTo(dc, 100, 100);
	brush=CreateSolidBrush(RGB(255,0,0));
	SelectObject(dc,brush);
	Ellipse(dc,20,20,40,50); //Левая половина бесконечности
	x+=dx;
	brush=CreateSolidBrush(RGB(0,0,0));
	SelectObject(dc,brush);
	Ellipse(dc,x,y,x+dx,y+dx); //Правая половина бесконечности*/
}
 /*polygon->getValue(0)->data.addPoint(-10,3);//     r=c+2*(a-c)   точка перетину двох прямих
	polygon->getValue(0)->data.addPoint(-7.5,5);//
	polygon->getValue(0)->data.addPoint(-8.7,3);//
	polygon->getValue(0)->data.addPoint(-7,3);//
	polygon->getValue(0)->data.addPoint(-7.5,5);//
	polygon->getValue(0)->data.addPoint(-5,3);//
	polygon->getValue(0)->data.addPoint(-3,4.5);//
	polygon->getValue(0)->data.addPoint(-3.5,3);//
	polygon->getValue(0)->data.addPoint(0,3);//
	polygon->getValue(0)->data.addPoint(-3,4.5);//
	polygon->getValue(0)->data.addPoint(-6,6);//
	polygon->getValue(0)->data.addPoint(-7.5,5);
	polygon->getValue(0)->data.addPoint(-6,6);
	polygon->getValue(0)->data.addPoint(0,6);//
	polygon->getValue(0)->data.addPoint(-3,4.5);
	polygon->getValue(0)->data.addPoint(0,3);
	polygon->getValue(0)->data.addPoint(0,3);
	polygon->getValue(0)->data.addPoint(0,3);
	polygon->getValue(0)->data.addPoint(0,3);*/