**The NMEA (National Marine Electronics Association)** has defined standards that specify how electronic equipment for marine users communicate. GNSS receivers are part of this standard and the NMEA has defined the format for several GNSS data logs otherwise known as 'sentences'.

Each NMEA sentence begins with a '$' followed by a two-letter prefix identifying the type of sending device (for example 'GP', 'GL' or ‘GN’), followed by a sequence of letters that define the type of information contained in the sentence. Data contained within the sentence is separated by commas and the sentence is terminated with a two digit checksum followed by a carriage return/line feed. Here is an example of a NMEA sentence describing time, position and fix related data:



# Parsing-GPGAA-packet
In this simple project, we seprated the detail like altutide, latitude, longitude etc from GPGAA packet of GPS. 

First step is to make struct variables to store the data from GPGAA packet. we used strtok function in C to split the string. 

strtok():
The C library function char *strtok(char *str, const char *delim) breaks string str into a series of tokens using the delimiter delim.
**str − The contents of this string are modified and broken into smaller strings (tokens).**

**delim − This is the C string containing the delimiters. These may vary from one call to another.**

Return Value
This function returns a pointer to the first token found in the string. A null pointer is returned if there are no tokens left to retrieve.



we then save the splitting string into the varaibles named altitude, longtitude etc. we created a library for saving the variables. 

