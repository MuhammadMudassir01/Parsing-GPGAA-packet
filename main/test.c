#include"unity.h"
#include "unity_internals.h"
#include "GPGAA.h"


void testEqualStrings(void)
{
    const char *testString = "foo";
    //this fun will run and test will pass

  TEST_ASSERT_EQUAL(0, parse_gps_data("$GPGGA,002153.000,3256.9818,N,11751.3858,W,1,10,1.2,27.0,M,-35.2,M,,0000*4E"), GPSData* gpsData);
  TEST_ASSERT_EQUAL(0, parse_gps_data("$GPGGA,001953.000,1236.6618,N,11751.3858,W,1,10,1.2,27.0,M,-24.2,M,,0000*6E"), GPSData* gpsData);
  TEST_ASSERT_EQUAL(0, parse_gps_data("$GPGGA,001553.000,14788.6618,N,11751.3858,W,1,10,1.2,27.0,M,-15.2,M,,0000*3E"), GPSData* gpsData);
  TEST_ASSERT_EQUAL(0, parse_gps_data("$GPGGA,001253.000,14597.6618,N,11751.3858,W,1,10,1.2,27.0,M,-17.2,M,,0000*7E"), GPSData* gpsData);

}
void test2Strings(void)
{
    //the test will not pass
    TEST_ASSERT_EQUAL(1, parse_gps_data(",001253.000,14597.6618,N,11751.3858,W,1,10,1.2,27.0,M,-17.2,M,,0000*7E"), GPSData* gpsData);
        //this test will pass
    TEST_ASSERT_EQUAL(8, parse_gps_data("$GPGGA,001253.000,14597.6618,N,11751.3858,W,1,10,1.2,27.0,M,-17.2,M,,0000*7E"), GPSData* gpsData);

}
