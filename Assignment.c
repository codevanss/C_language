#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
// Function to calculate the bill amount based on units consumed and tariff structure
float calculate_bill(float units_consumed, char* tariff_structure) {
    float tariff_rate;
    
    // Define tariff rates based on the tariff structure
    if (strcmp(tariff_structure, "Domestic") == 0) {
        tariff_rate = 5.00;  // Assuming a tariff rate of  Rs.5 per unit for domestic customers
    } else if (strcmp(tariff_structure, "Non-Domestic") == 0) {
        tariff_rate = 7.50;  // Assuming a tariff rate of  Rs.7.50 per unit for non-domestic customers
    } else if (strcmp(tariff_structure, "Industrial") == 0) {
        tariff_rate = 10.00;  // Assuming a tariff rate of  Rs.10 per unit for industrial customers
    } else {
        return -1;  // Invalid tariff structure
    }
    
    // Calculate the bill amount
    float bill_amount = units_consumed * tariff_rate;
    return bill_amount;
}

int main() {
    printf("Electricity Bill Calculator\n");
    printf("--------------------------\n");
    
    float units_consumed;

    // Input meter details
    char meter_number[20];
    printf("Enter Meter Number: ");
    scanf("%s", meter_number);
    
    float previous_reading, present_reading;
    printf("Enter Previous Meter Reading: ");
    scanf("%f", &previous_reading);
    
    printf("Enter Present Meter Reading: ");
    scanf("%f", &present_reading);
     
     if (previous_reading > present_reading)
     {
        printf("INVALID METER READING! \n");
        exit(0);
     } else 
     {
        units_consumed = present_reading - previous_reading ;
     }
    // Input tariff structure
    char tariff_structure[20];
    printf("Enter Tariff Structure (Domestic, Non-Domestic, Industrial): ");
    scanf("%s", tariff_structure);

    // Calculate bill amount
    float bill_amount = calculate_bill(units_consumed, tariff_structure);

    // Display bill details
    printf("\nBill Details:\n");
    printf("Meter Number: %s\n", meter_number);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Tariff Structure: %s\n", tariff_structure);
    if (bill_amount == -1) {
        printf("Invalid tariff structure!\n");
    } else {
        printf("Bill Amount Payable:  Rs.%.2f\n", bill_amount);
    }

    // To Display the next due date of Bill Payment
    printf("Due date of the Payment : 10/06/2023");
    getch();
    return 0;
}
