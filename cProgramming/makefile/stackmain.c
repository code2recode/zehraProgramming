#include<stdio.h>
#include"push.h"
#include"pop.h"
#include"print.h"

int  main()
{
        int top=-1;
        char ch='y';
        int stack[10];

//        void push();
  //      void pop();
    //    void print();


       while(1)
        {
        priintf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: push();
                break;

        case 2: pop();
                break;

                                                                                                                             1,0-1         Top
	case 3: print();
                break;

        default: printf("wrong choice");
                break;
        }

        printf("enter you choice");
        scanf("%c",&choice);

        if(choice=='n')
        break;
        else
        continue;
return 0;
}


