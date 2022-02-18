#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
    int num,age,total,paid;
    char name[25],gender[8],blood[4],doctor[25],disease[25];
    struct list *next;
}list;





void insert_end(list **head,int n,char name[],char gender[],char blood[],int age,char disease[],char doctor[],int total,int paid)
{
    list *temp=(list*)malloc(sizeof(list));
    temp->num=n;
    temp->age=age;
    temp->total=total;
    temp->paid=paid;

    strcpy(temp->name,name);
    strcpy(temp->gender,gender);
    strcpy(temp->blood,blood);
    strcpy(temp->doctor,doctor);
    strcpy(temp->disease,disease);
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
        return;
    }
    else
    {
        list *p=*head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        return;
    }
}





void print(list *head)
{
    printf("\n\nAll Patient's Records: \n");
    printf("======================\n\n");
    while(head!=NULL)
    {
        printf("Patient's Information.\n");
        printf("======================\n\n");
        printf("ID : %d\n",head->num);
        printf("Name : %s\n",head->name);
        printf("Gender : %s\n",head->gender);
        printf("Blood Group : %s\n",head->blood);
        printf("Age : %d\n",head->age);
        printf("Disease : %s\n",head->disease);
        printf("Doctor : %s\n\n",head->doctor);
        printf("Account Section.\n");
        printf("======================\n\n");
        printf("Total Amount : %d tk\n",head->total);
        printf("Paid : %d tk\n",head->paid);
        printf("Due : %d tk\n\n\n",(head->total - head->paid));
        printf("____________________________________________________\n\n");
        head=head->next;
    }
    return;
}





void search_print(list *head,char y[])
{
    if(head==NULL)
    {
        printf("Empty List\n");
        return;
    }
    else if(head!=NULL)
    {
        while(head!=NULL)
        {
            if(strcmp((head->name),y)==0)
            {
                printf("Patient's Information.\n");
                printf("======================\n\n");
                printf("ID : %d\n",head->num);
                printf("Name : %s\n",head->name);
                printf("Gender : %s\n",head->gender);
                printf("Blood Group : %s\n",head->blood);
                printf("Age : %d\n",head->age);
                printf("Disease : %s\n",head->disease);
                printf("Doctor : %s\n\n",head->doctor);
                printf("Account Section.\n");
                printf("======================\n\n");
                printf("Total Amount : %d tk\n",head->total);
                printf("Paid : %d tk\n",head->paid);
                printf("Due : %d tk\n\n\n",(head->total - head->paid));

                return;
            }
            else if(head->next==NULL && strcmp((head->name),y)!=0)
            {
                printf("\t\t\t\t\t\t\t\t\t  Patient's Data Not Found\n");
                return;
            }
            else
            {
                head=head->next;
            }


        }
    }


    return;
}






void modify(list **head,int z,int index)
{
    int age,total,paid;
    char name[25],gender[6],blood[4],doctor[25],disease[25];
    list *p=*head;

    if(p==NULL)
    {
        printf("\t\t\t\t\t\t\t\t\tEmpty List, can not be Modified.\n");
        return;
    }
    else if(p!=NULL)
    {
        while(p!=NULL)
        {

            if(p->num==z)
            {
                switch(index)
                {
                    case 1:
                    {
                        printf("*Name : ");
                        fflush(stdin);
                        gets(name);
                        strcpy(p->name,name);
                        return;
                        break;
                    }
                    case 2:
                    {
                        printf("*Gender : ");
                        fflush(stdin);
                        gets(gender);
                        strcpy(p->gender,gender);
                        return;
                        break;
                    }
                    case 3:
                    {
                        printf("*Blood Group : ");
                        fflush(stdin);
                        gets(blood);
                        strcpy(p->blood,blood);
                        return;
                        break;
                    }
                    case 4:
                    {
                        printf("*Age : ");
                        scanf("%d",&age);
                        p->age=age;
                        return;
                        break;
                    }
                    case 5:
                    {
                        printf("*Disease : ");
                        fflush(stdin);
                        gets(disease);
                        strcpy(p->disease,disease);
                        return;
                        break;
                    }
                    case 6:
                    {
                        printf("*Doctor : ");
                        fflush(stdin);
                        gets(doctor);
                        strcpy(p->doctor,doctor);
                        return;
                        break;
                    }
                    case 7:
                    {
                        printf("*Total Amount : ");
                        scanf("%d",&total);
                        p->total=total;
                        return;
                        break;
                    }
                    case 8:
                    {
                        printf("*Paid : ");
                        scanf("%d",&paid);
                        p->paid=paid;
                        return;
                        break;
                    }

                    default:
                    {
                       return;
                       break;
                    }

                }
            }

            else
            {
                p=p->next;
            }

        }
    }
    return;
}






int count(list *head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}






void delete_number(list **head,int n)
{
    list *p,*q;
    p=*head;
    q=p;
    if(*head==NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        while(p!=NULL)
        {
            if((*head)->num == n)
            {
                *head=(*head)->next;
                free(p);
                return;
            }
            else if(p->num == n)
            {
                q->next=p->next;
                free(p);
                return;
            }
            else
            {
                q=p;
                p=p->next;
            }

        }
    }

}






int main()
{
    list *head=NULL;
    int m,n,age,id,total,paid;
    int n1,totalbed=200,sm;
    char name[25],gender[8],blood[4],doctor[25],disease[25],name1[25];
    char clear[1];


    insert_end(&head,1,"Asif","Male","A+",26,"Dengue","Dr.Proshanta Roy",1300,500);
    insert_end(&head,2,"MD.Maruf","Male","A-",19,"Food poisoning","Dr.Kolpona",2500,1500);
    insert_end(&head,3,"Tumpa Das","Female","B-",30,"Asthma","Dr.Mujibur Rahman",3000,3000);
    insert_end(&head,4,"MD.Sohan","Male","O-",22,"Kidney disease","Dr.Rony Ahmed",10500,9000);
    insert_end(&head,5,"MD.Fahim","Male","AB-",20,"Bone fracture","Dr.Pronoy Das",3500,0);

    menu:
    printf("\n\n\t\t\t\t\t\t\t\t\t  ***Hospital Management***\n");
    printf("\t\t\t\t\t\t\t\t___________________________________________\n");

    printf("\n\nMenu\n");
    printf("====\n\n");
    printf("1. Add New Patient\n");
    printf("2. Delete Record\n");
    printf("3. Modify Patient's Details\n");
    printf("4. Search Patient's Details\n");
    printf("5. Number of Admitted Patients\n");
    printf("6. Available seats\n");
    printf("7. Print All Patients Record\n");
    printf("8. EXIT\n");
    printf("\n*Enter your choice : ");
    scanf("%d",&m);
    printf("\n\n");
    system("cls");

    switch(m)
    {
            case 1:
            {

                printf("\n\nEnter New Patient's Detail : \n");
                printf("===========================\n\n\n");
                printf("*Enter Patient's Serial No : ");
                scanf("%d",&n);
                printf("*Enter Patient's Name : ");
                fflush(stdin);
                gets(name);
                printf("*Enter Patient's Gender : ");
                fflush(stdin);
                gets(gender);
                printf("*Enter Patient's Blood Group : ");
                fflush(stdin);
                gets(blood);
                printf("*Enter Patient's Age : ");
                scanf("%d",&age);
                printf("*Enter Patient's Disease Name : ");
                fflush(stdin);
                gets(disease);
                printf("*Enter Patient's Appointed Doctor : ");
                fflush(stdin);
                gets(doctor);
                printf("*Enter Total Amount : ");
                scanf("%d",&total);
                printf("*Enter Paid Amount : ");
                scanf("%d",&paid);
                insert_end(&head,n,name,gender,blood,age,disease,doctor,total,paid);
                printf("\n\n\t\t\t\t\t\t\t\t\tNew Patient Added Successfully\n\n");
                printf("\nPress Enter to continue.....");
                fflush(stdin);
                gets(clear);
                system("cls");


                goto menu;
                break;
            }

            case 2:
            {
                printf("\n\n*Enter Patient's ID to Delete Record : ");
                scanf("%d",&n1);
                delete_number(&head,n1);
                printf("\n\t\t\t\t\t\t\t\t\t   ID %d Deleted Successfully",n1);
                printf("\nPress Enter to continue.....");
                fflush(stdin);
                gets(clear);
                system("cls");

                goto menu;
                break;

            }
            case 3:
            {
                printf("\n\n*Please Enter Patient's ID to Modify : ");
                scanf("%d",&id);
                printf("\nSelect Menu to Modify\n");
                printf("=====================\n\n");
                printf("1.Name.\n");
                printf("2.Gender.\n");
                printf("3.Blood Group.\n");
                printf("4.Age.\n");
                printf("5.Disease.\n");
                printf("6.Doctor.\n");
                printf("7.Total Amount.\n");
                printf("8.Paid.\n");
                printf("\n*Enter your choice : ");
                scanf("%d",&sm);
                printf("\n");
                modify(&head,id,sm);
                printf("\n\t\t\t\t\t\t\t\t\t   ID %d Modified  Successfully",id);
                printf("\nPress Enter to continue.....");
                fflush(stdin);
                gets(clear);
                system("cls");
                goto menu;
                break;

            }
            case 4:
            {
                fflush(stdin);
                printf("\n\n*Enter Patient's Name : ");
                gets(name1);
                printf("\n\n");
                search_print(head,name1);
                printf("\nPress Enter to continue.....");
                fflush(stdin);
                gets(clear);
                system("cls");
                goto menu;
                break;

            }
            case 5:
            {
                printf("\n\n*Number of Admitted Patient : %d\n",count(head));
                printf("\nPress Enter to continue.....");
                fflush(stdin);
                gets(clear);
                system("cls");
                goto menu;
                break;

            }
            case 6:
            {
                printf("\n\n*Available Seats : %d\n",(totalbed-count(head)));
                printf("\nPress Enter to continue.....");
                fflush(stdin);
                gets(clear);
                system("cls");
                goto menu;
                break;

            }
            case 7:
            {
                print(head);
                printf("\nPress Enter to continue.....");
                fflush(stdin);
                gets(clear);
                system("cls");
                goto menu;
                break;

            }
            default:
            {
                return 0;
                break;
            }


    }
    return 0;
}
