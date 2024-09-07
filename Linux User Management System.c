#include <stdio.h>
#include<stdlib.h>
int main()
{
  while(true)
  {
      int op;
      printf("Enter 1 to Manage User \n,2 to Manage Group\n,3 to Manage User Information \n,4 to Manage User Account \n,5 to Assign User to Group\n,6 to Exit\n");
      scanf("%d",&op);
      switch(op)
      {
       case 1://Manage User
           {
               int op2;
               printf("Enter 1 to Add User\n 2 to Delete User\n");
               scanf("%d",&op2);
               switch(op2)
               {
               case 1:
                   string user;
                   printf("Enter the user to Add\n");
                   scanf("%s",user);
                break;
               case 2:
                   string user;
                   printf("Enter the user to Delete\n");
                   scanf("%s",user);
                break;
               default:
                printf("Wrong Choice\n");
               }
           }
        break;
       case 2://Manage Group
           {
                int op2;
               printf("Enter 1 to Add Group\n 2 to Delete Group\n");
               scanf("%d",&op2);
               switch(op2)
               {
               case 1:
                   string group;
                   printf("Enter the group to Add\n");
                   scanf("%s",group);
                break;
               case 2:
                   string group;
                   printf("Enter the group to Delete\n");
                   scanf("%s",user);
                break;
               default:
                printf("Wrong Choice\n");
               }
           }
        break;
       case 3://Manage User Information
           {
             string user,information;
             printf("Enter the user to change his Information\n");
             scanf("%s",&user);
             printf("Enter the New Information of the user\n")
             scanf("%s",&information);
           }
        break;
       case 4://Manage User Account
           {
             string user,information;
             printf("Enter the user to change his Account\n");
             scanf("%s",&user);
             printf("Enter the New Information Of the user\n");
             scanf("%s",&information);
           }
        break;
       case 5://Assign User to Group
           {
               string user,group;
               printf("Enter the User You to Assign to a Group\n");
               scanf("%s",&user);
               printf("Enter the Group to Assign the user\n");
               scanf("%s",&group);

           }
        break;
       case 6://Exit()
        exit(0)
       default:
        printf("Wrong Choice!!!Try Again")

      }
  }

}
