#include<stdio.h>
struct date{
int dt;
int mon;
int yr;
};
struct car{
    char name[25];
    char model[25];
    float price;
    struct date date ;
};
int main(){
    printf("Cars with it's company details\n");
    printf("\n");

    struct car c1 ={"TATA","TATA CURVE",1000000,{12,05,2025}};
    printf("COMPANY:%s\nMODEL:%s\n",c1.name,c1.model);
    printf("PRIZE:%2f\nMANUFACTURING DATE:%d/%d/%d\n",c1.price,c1.date.dt,c1.date.mon,c1.date.yr);
    printf("\n");

       struct car c2 ={"MAHINDRA","THAR ROXX",2500000,{15,06,2027}};
    printf("COMPANY:%s\nMODEL:%s\n",c2.name,c2.model);
    printf("PRIZE:%2f\nMANUFACTURING DATE:%d/%d/%d\n",c2.price,c2.date.dt,c2.date.mon,c2.date.yr);
    printf("\n");

       struct car c3 ={"BENZ","MAYBACH",25000000,{01,10,2020}};
    printf("COMPANY:%s\nMODEL:%s\n",c3.name,c3.model);
    printf("PRIZE:%2f\nMANUFACTURING DATE:%d/%d/%d\n",c3.price,c3.date.dt,c3.date.mon,c3.date.yr);
    printf("\n");

       struct car c4 ={"LAMBORGINNI","URS",25000000,{06,11,2023}};
    printf("COMPANY:%s\nMODEL:%s\n",c4.name,c4.model);
    printf("PRIZE:%2f\nMANUFACTURING DATE:%d/%d/%d\n",c4.price,c4.date.dt,c4.date.mon,c4.date.yr);


    return 0;
}





