/* Example of declaring Variable */

int a;

float b;

char c;

// a , b , c are the var and int, float , char are the data types

/* declaring to var of int type*/

int a = 10, b = 20;

float b = 2.33;

char c = 'A';

/* var can be defined in this way */

int a;

int _ab;

int a30;

/* types of var's in c are:

    1. logical 
    2. global
    3. static
    4. automatic
    5. external 

 */

// 1.local var

void function1()
{

    int x = 10; // local var
}

// 2.global var

int g_var = 20; // g-var

void function2()
{
    int y = 10;
}

// 3.static var

void function3()
{
    int x = 10; // L-var

    static int y = 20; // static var

    x = x + 1;
    y = y + 1;
}

