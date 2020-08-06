void push()
{

	char ch='y';

        while(ch=='y')
        {
        if(top>=9)
        printf("stack is full");

        else{
        scanf("%d",&stack[top]);
        }
        printf("enter you choice");
        scanf("%c",&ch);
        }
}

