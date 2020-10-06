
#include"verify.h"
int Bioverification()
{
    int SensorData=0;
    printf("please place your finger on the sensor\n");
    scanf("%d",&SensorData);
    if(SensorData==1)
    {
        printf("Access granted\n\n ");
        printf("******The door is opening*********");
        
    }
    else
        printf("Access denied");
}
