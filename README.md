# Parsing-GPGAA-packet
In this simple project, we seprated the detail like altutide, latitude, longitude etc from GPGAA packet of GPS. 

First step is to make struct variables to store the data from GPGAA packet. we used strtok function in C to split the string. 

strtok():
The C library function char *strtok(char *str, const char *delim) breaks string str into a series of tokens using the delimiter delim.
**str − The contents of this string are modified and broken into smaller strings (tokens).**

**delim − This is the C string containing the delimiters. These may vary from one call to another.**
Return Value
This function returns a pointer to the first token found in the string. A null pointer is returned if there are no tokens left to retrieve.
