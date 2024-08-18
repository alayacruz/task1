#include<iostream>

using namespace std;

    
unsigned long long factorial(int n)
 {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Power function to compute x^n
double power(double x, int n) {
    double answer = 1;
    for (int i = 0; i < n; ++i) {
        answer *= x;
    }
    return answer;
}


 float sine(double radians)  //value of sine by Taylors series
{
   double a,b,c;
   float result = 0;
   for(int y=0 ; y!=9 ; y++)
   {
      a=  power(-1,y);
      b=  power(radians,(2*y)+1);
      c=  factorial((2*y)+1);
      result = result+ (a*b)/c;
   }
   return result;
}

double cosine(double radians)
{double k,l,m;
float answer=0;
for(int y=0;y!=9;y++)
{k=power(-1,y);
l=power(radians,2*y);
m=factorial(2*y);
answer=answer+(k*l)/m;

}
return answer;
}
 

double squareRoot(double number) {
    // Handle the case for zero and negative numbers
    if (number < 0) {
        std::cerr << "Error: Negative input!" << std::endl;
        return -1;
    }
    if (number == 0) return 0;

    // Initial guess
    double guess = number;
    double epsilon = 1e-10; // Precision level
    double difference;

    do {
        double newGuess = (guess + number / guess) / 2;
        difference = (newGuess - guess) * (newGuess - guess);
        guess = newGuess;
    } while (difference > epsilon);

    return guess;
}


int main()
{char op;
float x,y;




    cout<<"enter operation, type l for log, t for trigno, p for power, s for squareoot";
    cin>>op;
    switch(op)
    {
        case '+':
       { cout<<"enter operands";
        cin>>x;
        cin>>y;
        cout<<x+y;
        break;
       }

       case '-':
       {cout<<"enter operands";
        cin>>x;
        cin>>y;
        cout<<x-y;
        break;

       }

       case '*':
       {cout<<"enter operands";
        cin>>x;
        cin>>y;
        cout<<x*y;
        break;

       }

       case '/':
       {cout<<"enter operands";
        cin>>x;
        cin>>y;
        if(y==0)
        {cout<<"not defined";
        }
        else
        cout<<x/y;

        break;
       }
case 'l':
{cout<<"dont know how to get the right output";

break;
}
       case 't':
       {int x;
       float w;
        cout<<"enter 1 for sine, 2 for cos, 3 for tan";
       cin>>x;
       cout<<"enter angle in degrees";
       cin>>w;
      w=(w*3.1415926535)/180;

       if(x==1)
    { 
       float a= sine(w);
       cout<<a;
    break;
    }
       
    if(x==2)
    {
double x=cosine(w);
cout<<x;
break;
    

    }
    if(x==3)
    {double a= sine(w);
    double b= cosine(w);
    cout<<a/b;
    break;


    }
    
    }
    
case 'p':
{double base;
int exp;
cout<<"enter base";
cin>>base;
cout<<"enter exp";
cin>>exp;
double x=power(base,exp);
cout<<x;

}

case 's':
{float w;
    cout<<"enter number";
cin>>w;
double b;
b=squareRoot(w);
cout<<b;

}
       }

    
    return 0;
       }
