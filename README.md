# Convert GPS Nanosecond Time to UTC

A small program that converts gps time from sensors (nanosecond precision) into UTC time using howardhinnant's dates.h library. Note: This requires curl library to be installed using: `sudo apt-get install libcurl4-gnutls-dev`

```
 GPS Time resolution:
        double 1e+12 + 1e-6  -- 1000000000000.000000
        uint64_t 1e+19       -- nano
        uint64_t 1e+13       -- milliseconds  
```

#### Input/Outputs :
```
Input:
  1281798087485516800
Output:
  2020-08-18 15:01:27.485516800
  2020-08-18 15:01:27.485516800 GPS
  2020-08-18 15:01:09.485516800 UTC
  2020-08-18 15:01:46.485516800 TAI
```
