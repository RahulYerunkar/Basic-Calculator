#include "call.h"
#include "ui_call.h"
#include<qmath.h>

float all1=0,res=0,rem=0;
int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag=0,flag6=0,flag7=0,temp=0,flag8=0,cnt=0,cnt1=0,k=0,flag9=0,flag10=0;

float fst=0,sec=0;
call::call(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::call)
{
    ui->setupUi(this);
}

call::~call()
{
    delete ui;
}

void call::on_pushButton_clicked()
{ if(cnt){
   all1=all1*1+1/qPow(10,cnt);
   cnt++;
    }
    else{ all1=all1*10+1;
    }
     if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));

         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }}
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_5_clicked()
{
    if(cnt){
       all1=all1*1+2/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+2;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_20_clicked()  //1 bit clear
{

    int clr=all1;
    if(res)
    { clr=res;}
    all1=clr/10;
   ui->label->setText(QString::number(all1));
}

void call::on_pushButton_21_clicked() //all clear
{
    all1=res=rem=0;
    flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag=0,flag6=0,flag7=0,temp=0,flag8=0,cnt=0,cnt1=0,k=0,flag9=0,flag10=0;
    fst=sec=0;
   ui->label->setText(QString::number(all1));

}

void call::on_pushButton_13_clicked()   //adition
{
    cnt=0;
    if(flag==1)
    { rem=res;
        ui->label->setText(QString::number(rem)+"+");
      fst=0;
      temp=1;
      flag1=1;
      all1=0;
      }
    else {
        flag1=1;
        fst=all1;
        ui->label->setText(QString::number(all1)+"+");
        all1=0;
    }

}

void call::on_pushButton_14_clicked()  //substraction
{   cnt=0;
    if(flag==1)
    { rem=res;
        ui->label->setText(QString::number(rem)+"-");
      fst=0;
      temp=1;
      flag2=1;
      all1=0;
      }
    else {
        flag2=1;
        fst=all1;
        ui->label->setText(QString::number(all1)+"-");
        all1=0;
    }

}

void call::on_pushButton_15_clicked()   //multiplication
{   cnt=0;
    if(flag==1)
    { rem=res;
        ui->label->setText(QString::number(rem)+"*");
      fst=0;
      temp=1;
      flag3=1;
      all1=0;
      }
    else {
        flag3=1;
        fst=all1;
        ui->label->setText(QString::number(all1)+"*");
        all1=0;
    }
}

void call::on_pushButton_17_clicked()  //division
{   cnt=0;
    if(flag==1)
    { rem=res;
        ui->label->setText(QString::number(rem)+"/");
      fst=0;
      temp=1;
      flag4=1;
      all1=0;
      }
    else {
        flag4=1;
        fst=all1;
        ui->label->setText(QString::number(all1)+"/");
        all1=0;
    }
    }


void call::on_pushButton_18_clicked()  //squre
{
    flag5=1;
    ui->label->setText(QString::number(all1)+"^"+"2");
    fst=all1;

}

void call::on_pushButton_19_clicked() // = sign
{
            if(flag1==1)
        {     flag1=0;
                if(temp==1)
                {
                    res=fst+rem+all1;
                    flag=1;
                    ui->label->setText(QString::number(rem)+"+"+QString::number(all1)+"="+QString::number(res));
                }
                else{
            res=fst+rem+all1;
            flag=1;
            ui->label->setText(QString::number(fst)+"+"+QString::number(all1)+"="+QString::number(res));
        }
            }

            if(flag2==1)
        { flag2=0;
                if(temp==1)
                {
                    res=(fst+rem)-all1;
                    flag=1;
                    ui->label->setText(QString::number(rem)+"-"+QString::number(all1)+"="+QString::number(res));
                }
                else{
            res=(fst+rem)-all1;
            flag=1;
            ui->label->setText(QString::number(fst)+"-"+QString::number(all1)+"="+QString::number(res));
        }
            }


            if(flag3==1)
        { flag3=0;
                if(temp==1)
                {
                    res=(fst+rem)*all1;
                    flag=1;
                    ui->label->setText(QString::number(rem)+"*"+QString::number(all1)+"="+QString::number(res));
                }
                else{
            res=(fst+rem)*all1;
            flag=1;
           ui->label->setText(QString::number(fst)+"*"+QString::number(all1)+"="+QString::number(res));
        }
            }

            if(flag4==1)
        {  flag4=0;
                if(temp==1)
                {
                    res=(fst+rem)/all1;
                    flag=1;
                    ui->label->setText(QString::number(rem)+"/"+QString::number(all1)+"="+QString::number(res));
                }
                else{
            res=(fst+rem)/all1;
            flag=1;
             ui->label->setText(QString::number(fst)+"/"+QString::number(all1)+"="+QString::number(res));
        }}

            if(flag5==1)  //...............squre..............
        {
            res=fst*fst;
            flag=1;
            flag5=0;
            ui->label->setText(QString::number(all1)+"^"+"2"+ "="+QString::number(res));
        }
            if(flag6==1)   //................fact.............
        {
                int i,fact=1;

              for(i=fst;i>0;i--){
            fact=fact*i;
                }
                res=fact;
                flag=1;
                flag6=0;
                ui->label->setText(QString::number(all1)+"!"+ "="+QString::number(res));
        }
            if(flag7==1)  //...............sqrt...............
        {      k=fst;
                float a=0,b=0,t=0;
                int i,p=0,s=0;
                for(i=1;i<k/2;i++)
                { p=i*i;
                    if((p==k)||(p>k))
                      { if(p==k){
                            res=i;
                            flag=1;
                            flag7=0;
                        ui->label->setText(QString::number(all1)+"sqrt"+ "="+QString::number(i));
                    break;
                    }
                 else{
                     t=i-1;
                    s=k-(t*t);
                    a=s/(t*2);
                    b=a+t;
                    res=b;
                    flag=1;
                    flag7=0;
                    ui->label->setText(QString::number(all1)+"sqrt"+ "="+QString::number(res));
                    break;
                }
                    } }

} if(flag8==1)   //.............%%%%% sign...............
            { float a=0;
                a=fst/100;
                res=a;
                flag=1;
                flag8=0;
                ui->label->setText(QString::number(all1)+"%"+ "="+QString::number(res));
}
            if(flag9==1) //  ........Pi..............function
            {   float aa=0;
                aa=fst*3.14159;
                res=aa;
                flag=1;
                flag9=0;
                ui->label->setText(QString::number(all1)+"Pi"+ "="+QString::number(res));
            }


            if(flag10==1)  //......^^.......
        {    flag10=0;
                if(temp==1)
                {  int aa=1;
                    int i;
                    for(i=0;i<all1;i++){
                      aa=fst*aa;
                      }
                    res=aa;
                    flag=1;
                    ui->label->setText(QString::number(rem)+"^"+QString::number(all1)+"="+QString::number(res));
                }
                else{ int aa=1;
                    int i;
                    for(i=0;i<all1;i++){
                     aa=fst*aa;
                     }
             res=aa;
            flag=1;
           ui->label->setText(QString::number(fst)+"^"+QString::number(all1)+"="+QString::number(res));
        }
        }


}

void call::on_pushButton_12_clicked()   //........00......
{
    all1=all1*100+00;
    if(flag1==1||flag2==1||flag3==1||flag4==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }}
    else{
     ui->label->setText(QString::number(all1));
    }


}

void call::on_pushButton_23_clicked() //........! factorial........
{
    flag6=1;
    ui->label->setText(QString::number(all1)+"!");
    fst=all1;
}

void call::on_pushButton_22_clicked()  //....sqrt.....
{
    flag7=1;
    ui->label->setText(QString::number(all1)+"sqrt");
    fst=all1;
}



void call::on_pushButton_7_clicked()
{
    if(cnt){
       all1=all1*1+3/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+3;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }

    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_2_clicked()
{
    if(cnt){
       all1=all1*1+4/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+4;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_6_clicked()
{
    if(cnt){
       all1=all1*1+5/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+5;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_8_clicked()
{
    if(cnt){
       all1=all1*1+6/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+6;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_3_clicked()
{
    if(cnt){
       all1=all1*1+7/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+7;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_4_clicked()
{
    if(cnt){
       all1=all1*1+8/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+8;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_9_clicked()
{
    if(cnt){
       all1=all1*1+9/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+9;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_11_clicked()
{
    if(cnt){
       all1=all1*1+0/qPow(10,cnt);
       cnt++;
        }
        else{ all1=all1*10+0;
        }
    if(flag1==1||flag2==1||flag3==1||flag4==1||flag10==1)
    {
     if(flag1==1)
     {   if(temp==1)
         { ui->label->setText(QString::number(rem)+"+"+QString::number(all1));
         }
         else {
         ui->label->setText(QString::number(fst)+"+"+QString::number(all1));
         }

     }
     if(flag2==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"-"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"-"+QString::number(all1));
                 }
     }
     if(flag3==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"*"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"*"+QString::number(all1));
                 }
     }
     if(flag4==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"/"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"/"+QString::number(all1));
                 }
     }
     if(flag10==1)
     {
         if(temp==1)
                 { ui->label->setText(QString::number(rem)+"^"+QString::number(all1));
                 }
                 else {
                 ui->label->setText(QString::number(fst)+"^"+QString::number(all1));
                 }
     }
    }
    else{
     ui->label->setText(QString::number(all1));
    }

}

void call::on_pushButton_16_clicked()  //..........%%%...........
{
    flag8=1;
    ui->label->setText(QString::number(all1)+"%");
    fst=all1;
}

void call::on_pushButton_10_clicked()  //.........dot...........
{
  cnt=1;
}

void call::on_pushButton_24_clicked()   //.......Pi..........
{
   flag9=1;
   ui->label->setText(QString::number(all1)+"Pi");
   fst=all1;
}

void call::on_pushButton_25_clicked()  //.............^^^............
{
    if(flag==1)
    { rem=res;
        ui->label->setText(QString::number(rem)+"^");
      fst=0;
      temp=1;
      flag10=1;
      all1=0;
      }
    else {
        flag10=1;
        fst=all1;
        ui->label->setText(QString::number(all1)+"^");
        all1=0;
    }
}

