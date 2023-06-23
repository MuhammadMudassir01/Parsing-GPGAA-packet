typedef struct {     //declaring struct variables
	    char *time;
	    char  *latitude;
	    char *latDirection;
	    char *longitude;
	    char *lonDirection;
	    char *fixQuality;
	    char *satellites;
	    char *hdop;
	    char *altitude;
	    char *altUnit;
        char *format;
}GPSData;

void parse_gps_data(const char* data, GPSData* gpsData) 
{
    // Check if the packet starts with $GPGGA
    if (strncmp(data, "$GPGGA", 6) != 0) {   //verifying whether the packet is in corrent format or not 
        printf("Invalid GPS data\n");     //if incorrect then showing the packet is incorrect
        
    }
    char *token;  
    token = strtok(data,",");  //strtok is the function that is ued to split string 
   gpsData->format=token;       //1st part of string
   gpsData->time = strtok(NULL,",");  // 2nd part of string and so on......
   //printf("Time:%s\n",gpsData->time);
   gpsData->latitude=strtok(NULL,",");
   //printf("Latitude2:%s\n",gpsData->latitude);
   gpsData->latDirection=strtok(NULL,",");
   gpsData->longitude=strtok(NULL,",");
   gpsData->lonDirection=strtok(NULL,",");
   gpsData->fixQuality=strtok(NULL,",");
   gpsData->satellites=strtok(NULL,",");
   gpsData->hdop=strtok(NULL,",");
   gpsData->altitude=strtok(NULL,",");
   gpsData->altUnit=strtok(NULL,",");

}