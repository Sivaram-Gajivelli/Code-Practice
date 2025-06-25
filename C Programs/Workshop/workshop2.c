#include<stdio.h>

void main() {
    int choice, patientCount = 0, age, diseaseCode, bill = 0, totalBill = 0; 
    char name[50];

    do {
        printf("\n<---- Hospital Menu ---->\n\n");
        printf("1. Admit Patient \n2. Generate Bill \n3. Exit \nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Patient's Age: ");
                scanf("%d", &age);
                printf("Choose the disease type: \n");
                printf("1. Fever \n2. Infection \n3. Surgery \n");
                printf("Enter disease code: ");
                scanf("%d", &diseaseCode);

                printf("<---- Patient Details ----> \n\n");
                printf("Patient's age: %d\n", age);
                
                switch(diseaseCode) {
                    case 1:
                        printf("Patient's Disease: Fever\n");
                        bill = 3000;
                        break;
                    
                    case 2:
                        printf("Patient's Disease: Infection\n");
                        bill = 30000;
                        break;
                    
                    case 3:
                        printf("Patient's Disease: Surgery\n");
                        bill = 300000;
                        break;

                    default:
                        printf("Invalid disease code. Please try again...\n");
                }

                printf("Estimated bill: %d", bill);
                totalBill += bill;
                break;
            
            case 2:
                printf("Total bill: %d", totalBill);
                totalBill = 0;
                break;

            case 3:
                printf("Exiting the System...\n");
                break;

            default:
                printf("Invalid choice. Please try again...!!\n");
        }

    } while(choice != 3);
    
}