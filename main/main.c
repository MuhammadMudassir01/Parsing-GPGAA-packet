//Importing Libraries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "GPGAA.h"

void app_main(void)
{
    char data[80]; 		//variable for string 
    printf("Please enter a packet\n");
    scanf("%s",data);	//getting input from user for packet 
     //char data[80] = "$GPGGA,002153.000,3342.6618,N,11751.3858,W,1,10,1.2,27.0,M,-34.2,M,,0000*5E";
	    GPSData gps;
	    parse_gps_data(data, &gps); 	//parsing arguments to defined function
        printf("Format: %s\n", gps.format);   //printing format of packet
	    printf("Time: %s\n", gps.time); 	////printing time of packet
	    printf("Latitude: %s %s\n", gps.latitude, gps.latDirection);		//printing Latitude of packet
	    printf("Longitude: %s %s\n", gps.longitude, gps.lonDirection); 		////printing longitude of packet
	    printf("Fix Quality: %s\n", gps.fixQuality);		//printing Fixed Quality
	    printf("Satellites: %s\n", gps.satellites);			//Printing Satellite Number
	    printf("HDOP: %s\n", gps.hdop);					//Printing HDOP
	    printf("Altitude: %s %s\n", gps.altitude, gps.altUnit);			//Printing Altitude Of Satellite

}
