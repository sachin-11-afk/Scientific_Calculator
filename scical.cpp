#include<iostream>
#include<math.h>
//#include<graphics>
using namespace std;
int main()
{x:
    cout<<"         WELCOME TO THE SCIENTIFIC CALCULATOR         "<<endl;
    cout<<"     *********************************************    "<<endl;
    cout<<endl;
    cout<<"Press  1 for Addition                            press 2 for Substraction"<<endl;
    cout<<"Press  3 for Multiplication                      press 4 for Division"<<endl;
    cout<<"Press  5 for Logarithm                           press 6 for Cosine and secent"<<endl;
    cout<<"Press  7 for Sine  and cosecent                  press 8 for Tangent and cotangent "<<endl;
    cout<<"Press  9 for Power                               press 10 for Square root"<<endl;
    cout<<"Press  11 for Addition of Matrix                 press 12 for Substraction of Matrix"<<endl;
    cout<<"Press  13 for Area of Triangle                   press 14 for Area and cir.of Circle"<<endl;
    cout<<"Press  15 for  vf=vi+at                          press 16 To Find distance covered"<<endl;
    cout<<"Press  17 for  s=v*t                             press 18 To Find force"<<endl;
    cout<<"Press  19 To find Density                        press 20 To Find temp. In Farenheit "<<endl;
    cout<<"press  22 To Exit                                                                 "<<endl;
    int choice;
    cout<<"                         Now Enter Your Own Choice :-";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<endl;
        cout<<"         CALCULATING ADDITION OF TWO NUMBER      "<<endl;
        cout<<"      ****************************************    "<<endl;
        int a,b,c;
        cout<<"Enter 1st number:"<<endl;
        cin>>a;
        cout<<"Enter 2nd number:"<<endl;
        cin>>b;
        c=a+b;
        cout<<"The sum is  :"<<c;
        cout<<endl;

        cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;
    case 2:
        cout<<"        CALCULATING DIFFERENCE BETWEEN TWO NUMBER "<<endl;
        cout<<"     ***********************************"<<endl;
        int d,e,f;
        cout<<"Enter 1st number:"<<endl;
        cin>>d;
        cout<<"Enter 2nd number:"<<endl;
        cin>>e;
        f=d-e;
        cout<<"The substraction is  :"<<f<<endl;

        cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;
case 3:

        cout<<"         CALCULATING  MULTIPLICATION OF TWO NUMBER      "<<endl;
        cout<<"      ****************************************    "<<endl;
        int g,h,i;
        cout<<"Enter 1st number:"<<endl;
        cin>>g;
        cout<<"Enter 2nd number:"<<endl;
        cin>>h;
        i=g*h;
        cout<<"The multiplication is  :"<<i;
        cout<<endl;

        cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;
case 4:
    cout<<"         CALCULATING  DIVISION OF TWO NUMBER      "<<endl;
        cout<<"      ****************************************    "<<endl;
        float j,k,l;
        cout<<"Enter 1st number:"<<endl;
        cin>>j;
        cout<<"Enter 2nd number:"<<endl;
        cin>>k;
        l=j/k;
        cout<<"The division is  :"<<l<<endl;

    cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 5:
    cout<<"         CALCULATING  LOGARITHMETIC FUCTION      "<<endl;
            float bx,nm,lg;
            cout<<"Enter the value of base:";
            cin>>bx;
            cout<<"Enter the Number :"<<endl;
            cin>>nm;
            lg=log(nm)/log(bx);
            cout<<"The log of "<<nm<<"="<<lg<<endl;
            cout<<endl;


     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;


case 6:
    cout<<"         CALCULATING  COSINE  AND SECENT OF AN ANGLE    "<<endl;
   float m,cs,sc;
    cout<<"Enter the angle:-"<<endl;
    cin>>m;
    cs=cos(m);
    sc=1/cs;
    cout<<"cos x="<<cs<<"\n and sec x="<<sc<<endl;
    cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 7:
    cout<<"         CALCULATING SINE AND COSECENT OF AN ANGLE     "<<endl;

float n,sn,csc;
    cout<<"Enter the angle:-"<<endl;
    cin>>n;
    sn=sin(n);
    csc=1/sn;
    cout<<"sin x="<<sn<<"\n and cosec x="<<csc<<endl;

 cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;
case 8:
    cout<<"         CALCULATING  TANGENT OF AN ANGLE     "<<endl;
    float o,tn,ct;
    cout<<"Enter the angle:-"<<endl;
    cin>>o;
    tn=tan(o);
    ct=1/tn;
    cout<<"tan x="<<tn<<"\n cot x="<<ct<<endl;

 cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;
case 9:
    cout<<"         CALCULATING  POWER  OF A NUMBER  "<<endl;
    int s,t,ch;
    cout<<"Enter the number"<<endl;
    cin>>s;
    cout<<"Enter the power"<<endl;
    cin>>t;
    ch=pow(s,t);
    cout<<"The value of "<<s<<" power "<<t<<"="<<ch<<endl;
    cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;


case 10:
    cout<<"         CALCULATING  SQUARE ROOT OF A NUMBER      "<<endl;
    float p,sqr;
    cout<<"Enter the number:-"<<endl;
    cin>>p;
    sqr=sqrt(p);
    cout<<"Square root of "<<p<<" = "<<sqr<<endl;


 cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;
case 11:
    cout<<"         CALCULATING  ADDITION OF MATRIX      "<<endl;

    int r1,c1,q[100][100],r[100][100],sum[100][100],i1,j1;
    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r1;
    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c1;
  cout << endl << "Enter elements of 1st matrix [A]: " << endl;
    for(i1 = 0; i1 < r1; ++i1)
       for(j1 = 0; j1 < c1; ++j1)

           {
            cout << "Enter elements  of a" << i1 + 1 << j1 + 1 << " : ";
           cin >> q[i1][j1];
           }
    cout << endl << "Enter elements of 2nd matrix [B]: " << endl;
    for(i1 = 0; i1<r1; ++i1)
    for(j1 = 0; j1<c1; ++j1)
       {
           cout << "Enter element b" << i1 + 1 << j1 + 1 << " : ";
           cin >> r[i1][j1];
       }

    cout << endl << "Sum of two matrix is: "<<endl;
        for(i1 = 0; i1 < r1; ++i1)
        for(j1 = 0; j1 < c1; ++j1)
{       sum[i1][j1] = q[i1][j1] + r[i1][j1];
         cout <<sum[i1]   [j1]<<"   ";

       //for(i1 = 0; i < r1; ++i1)
        //for(j1 = 0; j1 < c1; ++j1)
        cout << sum[i1]   [j1]<<"    ";
            //if(j1 == c1 - 1)
                cout <<endl;
        break;


}
 cout<<'\n'<<"---------------------------------------------------"<<endl;
        goto x;
        break;
case 12:
    cout<<"         CALCULATING  SUBSTRACTION OF MATRIX    "<<endl;
    int s1,t1,u[100][100],v[100][100],subs[100][100],k1,l1;
    cout << "Enter number of rows (between 1 and 100): ";
    cin >> s1;
    cout << "Enter number of columns (between 1 and 100): ";
    cin >> t1;
  cout << endl << "Enter elements of 1st matrix [A]: " << endl;
    for(k1 = 0; k1 < s1; ++k1)
       for(l1 = 0; l1 < t1; ++l1)
         {
            cout << "Enter elements  of a" << k1 + 1 << l1 + 1 << " : ";
                       cin >> u[i1][j1];
           }
cout << endl << "Enter elements of 2nd matrix [B]: " << endl;
     for(k1 = 0; k1 < s1; ++k1)
       for(l1 = 0; l1 < t1; ++l1)

       {
           cout << "Enter element b" << k1 + 1 << l1 + 1 << " : ";
           cin >> v[i1][j1];
       }

    cout << endl << "Sum of two matrix is: "<<endl;
       for(k1 = 0; k1 < s1; ++k1)
       for(l1 = 0; l1 < t1; ++l1)

{       subs[k1][l1] = u[k1][l1] - v[k1][l1];
         cout <<subs[k1]   [l1]<<"   ";

       //for(i1 = 0; i < r1; ++i1)
        //for(j1 = 0; j1 < c1; ++j1)
        cout << subs[k1]   [l1]<<"    ";
            //if(j1 == c1 - 1)
                cout <<endl;
        break;
}


     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 13:
    cout<<"         CALCULATING  THE AREA OF A TRIANGLE         "<<endl;
    int bs,ht;
    float ar;
    cout<<"Enter magnitude of base:"<<endl;
    cin>>bs;
    cout<<"Enter magnitude of height:"<<endl;
    cin>>ht;
    ar=bs*ht/2;
    cout<<"Area of Triangle is="<<ar<<endl;

     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 14:
    cout<<"         FINDING THE AREA AND CIRCUMFERENCE OF A CIRCLE      "<<endl;
    int x;
    float d1;
    double ra,cir,arc;
    cout<<"Press 1 if you have value of Diameter:"<<'\n';
    cout<<"press 2 if you have value of Radius:"<<'\n';
    cin>>x;
switch(x)

    {case 1:
        cout<<"Enter the value of Diameter:"<<endl;
        cin>>d1;
        ra=d1/2;
        break;
        case 2:
        cout<<"Enter the value of radius:"<<endl;
        cin>>ra;
      break;
    }
    cout<<"Radius of circle = "<<ra<<'\n';
    cir=2*3.14*ra;
    arc=3.14*pow(ra,2);

  cout<<"Circumference of the cicle ="<<cir<<"and"<<'\t'<<"Area of the circle ="<<arc<<endl;

        cout<<'\n'<<"---------------------------------------------------"<<endl;
        goto x;
        break;


    case 15:
    cout<<"        FOR CALCULATING 'vf=vi+at'      "<<endl;
    float vi,a1;
    double vf,ti;
      cout<<"Enter the magnitude of initial velocity :"<<endl;
      cin>>vi;
       cout<<"Enter the rate of acceleration :"<<endl;
       cin>>a1;
       cout<<"Enter time taken:"<<endl;
       cin>>ti;
      vf=vi+a1*ti;
       cout<<" 'vf=vi-at' ="<<vf<<endl;


 cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;


case 16:
    cout<<"         CALCULATING  DIVISION OF TWO NUMBER      "<<endl;

     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

    case 17:
    cout<<"         CALCULATING  DIVISION OF TWO NUMBER      "<<endl;

     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 18:
    cout<<"         CALCULATING  DIVISION OF TWO NUMBER      "<<endl;



     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 19:
    cout<<"         CALCULATING  DIVISION OF TWO NUMBER      "<<endl;



    cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 20:
    cout<<"         CALCULATING  DIVISION OF TWO NUMBER      "<<endl;



     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 21:
    cout<<"         CALCULATING  DIVISION OF TWO NUMBER      "<<endl;




     cout<<"---------------------------------------------------"<<endl;
        goto x;
        break;

case 22:
    cout<<"             EXIT!!.....Thank you for using my calculator [x_x]"<<endl;
    cout<<"             *HAVE A GOOD DAY*";
    break;

    }




    }
