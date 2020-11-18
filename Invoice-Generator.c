/*******************************************************************
This program generates a itemized bill from the user inputed items.                     
Created by: Luke Sanchez	
Created on: Sept. 5 2019    	
*******************************************************************/ 

#include <stdio.h>

//Global declarations
#define HDTV_PRICE 229.40
#define LAPTOP_PRICE 620.00
#define XBOX_PRICE 230.20
#define MP3PLAYER_PRICE 30.00
#define HOTSPOT_PRICE 150.00

int main(void) {
//Local declarations
    int tvSold = 0;
    int laptopSold = 0;
    int xboxSold = 0;
    int mp3playerSold = 0;
    int hotspotSold = 0;
    const  float TaxRate = 0.075; //Edit for local tax rate. 
    float TV_Total; 
    float Laptop_Total; 
    float Xbox_Total; 
    float Mp3player_Total; 
    float Hotspot_Total; 
    float TaxTotal;
    float Subtotal;
    float FinalTotal;

//Gather inputs from user.
    printf("\nPlease enter in the items sold!\n\n");
    printf("Enter number of TVs sold: ");
    scanf("%d", &tvSold);
    printf("Enter number of Laptops sold: ");
    scanf("%d", &laptopSold);
    printf("Enter number of Xboxs sold: ");
    scanf("%d", &xboxSold);
    printf("Enter number of MP3 Players sold: ");
    scanf("%d", &mp3playerSold);
    printf("Enter number of 4G Hotspots sold: ");
    scanf("%d", &hotspotSold);

//Multiply item price by the amount sold.
    TV_Total = (HDTV_PRICE * tvSold);
    Laptop_Total = (LAPTOP_PRICE * laptopSold);
    Xbox_Total = (XBOX_PRICE * xboxSold);
    Mp3player_Total = (MP3PLAYER_PRICE * mp3playerSold);
    Hotspot_Total = (HOTSPOT_PRICE * hotspotSold);

//Calculate tax and totals
    Subtotal = (TV_Total + Laptop_Total + Xbox_Total + Mp3player_Total + Hotspot_Total);
    TaxTotal = ((TV_Total + Laptop_Total + Xbox_Total + Mp3player_Total + Hotspot_Total) * TaxRate);
    FinalTotal = (Subtotal + TaxTotal);

//Bill output
    printf("_____________________________________________________________________\n");
    printf("\tQTY \tDescription \tUnit Price \tTotal Price\n");
    printf("\t___ \t___________ \t__________ \t___________\n");
    printf("\t%1.3d \tHD TV \t\t%10.2f \t%4.2f\n", tvSold, HDTV_PRICE, TV_Total);
    printf("\t%1.3d \tLaptop PC \t%10.2f \t%4.2f\n", laptopSold, LAPTOP_PRICE,  Laptop_Total);
    printf("\t%1.3d \tXbox console \t%10.2f \t%4.2f\n", xboxSold, XBOX_PRICE,  Xbox_Total);
    printf("\t%1.3d \tMP3 Player \t%10.2f \t%4.2f\n", mp3playerSold, MP3PLAYER_PRICE,  Mp3player_Total);
    printf("\t%1.3d \t4G Hotspot \t%10.2f \t%4.2f\n", hotspotSold, HOTSPOT_PRICE,  Hotspot_Total);
    printf("\t\t\t\t\t\t-----------\n");
    printf("\t\t\t\tSUBTOTAL:\t%.2f\n", Subtotal);
    printf("\t\t\t\tTAX:\t\t%.2f\n", TaxTotal);
    printf("\t\t\t\tTOTAL:\t\t%.2f\n", FinalTotal);
    printf("_____________________________________________________________________\n");

  return 0;
}//end main