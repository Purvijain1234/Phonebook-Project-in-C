# include<stdio.h>
# include<conio.h>

int main(){
    char fn[20]; //first name
    char ln[20]; // last name
    int a; //age
    int p; //phone number 
    char em[50]; // email id
    char add[50]; //address

    char fna[20];
    char lna[20];
    int ag;
    int ph;
    char ema[50];
    char addr[50];

    printf("**********WELCOME TO PHONE BOOK**********\n\n");

    printf("              MENU             \n");

    printf("Press 1 to add the contact:\n\n");

    int x;
    printf("Enter: ");
    scanf("%d", &x);

    if(x==1){
        int y;
        printf("Enter the number of contact to be added : ");
        scanf("%d", &y);

        if(y==1){
            printf("--------------------\n");
            printf("First Name : ");
            scanf("%s", &fn);
            printf("Last Name : ");
            scanf("%s", &ln);
            printf("Age : ");
            scanf("%d", &a);
            printf("Phone Number : ");
            scanf("%d", &p);
            printf("Email Id : ");
            scanf("%s", &em);
            printf("Address : ");
            scanf("%s", &add);
            printf("---------------------\n");
        }
        else if(y==2){
            printf("--------------------\n");
            printf("First Name : ");
            scanf("%s", &fn);
            printf("Last Name : ");
            scanf("%s", &ln);
            printf("Phone Number : ");
            scanf("%d", &p);
            printf("Email Id : ");
            scanf("%s", &em);
            printf("Address : ");
            scanf("%s", &add);
            printf("---------------------\n");
        
            printf("--------------------\n");
            printf("First Name : ");
            scanf("%s", &fna);
            printf("Last Name : ");
            scanf("%s", &lna);
            printf("Age : ");
            scanf("%d", &ag);
            printf("Phone Number : ");
            scanf("%d", &ph);
            printf("Email Id : ");
            scanf("%s", &ema);
            printf("Address : ");
            scanf("%s", &addr);
            printf("---------------------\n");
        }
        printf("Press 2  to see the contact\n");
        printf("Press 3 to exit the contact\n");

        int z;
        printf("Enter\n");
        scanf("%d", &z);

        if(z==2){
            int num;
            printf("Enter the number of contact to be viewed : ");
            scanf("%d", &num);

            if(num==1){
                printf("--------------------\n");
                printf("First Name : ");
                printf("%s\n", fn);
                printf("Last Name : ");
                printf("%s\n", ln);
                printf("Age : ");
                printf("%d\n", a);
                printf("Phone Number : ");
                printf("%d\n", p);
                printf("Email Id : ");
                printf("%s\n", em);
                printf("Address : ");
                printf("%s\n", add);
                printf("---------------------\n");
            }
            else if(num==2){
                printf("--------------------\n");
                printf("First Name : ");
                printf("%s\n", fn);
                printf("Last Name : ");
                printf("%s\n", ln);
                printf("Age : ");
                printf("%d\n", a);
                printf("Phone Number : ");
                printf("%d\n", p);
                printf("Email Id : ");
                printf("%s\n", em);
                printf("Address : ");
                printf("%s\n", add);
                printf("---------------------\n");
        
                printf("--------------------\n");
                printf("First Name : ");
                printf("%s\n", fna);
                printf("Last Name : ");
                printf("%s\n", lna);
                printf("Age : ");
                printf("%d\n", ag);
                printf("Phone Number : ");
                printf("%d\n", ph);
                printf("Email Id : ");
                printf("%s\n", ema);
                printf("Address : ");
                printf("%s\n", addr);
                printf("---------------------\n");
            }
        }
        else if(z==3){
            printf("Are you sure you want to close the phone book\n");
            printf("Press 1 for yes\n");
            printf("Press 2 for no\n");

            int ans;
            printf("Enter : \n");
            scanf("%d", &ans);

            if(ans==1){
                printf("The phone book has closed\n");
                printf("Have a good day\n");
            }            
            else if(ans==2){
                printf("The phone book has not closed\n");
                printf("You can continue\n");
            }
        }
    }
    else {
        printf("In-Valid\n");
    }
    return 0;
}