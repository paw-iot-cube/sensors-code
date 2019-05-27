#ifndef SETTINGS_H
#define SETTINGS_H

// uncomment to enable debug messages
#define DEBUG

// mqtt-broker IP
#define MQTT_BROKER_IP "192.168.0.180"
// TO DO: find another way of configuring this

// standard read intervals for different sensors in ms
#define STD_INTERVAL_MS_BME280 10000
#define STD_INTERVAL_MS_HCSR501 10000

// wifi credentials
#define WIFI_SSID "UPC2988951"
#define WIFI_PASSWD "zsvYzra2trzy"
// TO DO: find another way of configuring and storing these

#endif
