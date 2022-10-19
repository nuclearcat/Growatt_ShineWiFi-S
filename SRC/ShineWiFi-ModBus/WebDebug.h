#ifndef GROWATT_SHINEWIFI_S_WEBDEBUG_H
#define GROWATT_SHINEWIFI_S_WEBDEBUG_H

#if ENABLE_WEB_DEBUG == 1
char acWebDebug[1024] = "";
uint16_t u16WebMsgNo = 0;
#define WEB_DEBUG_PRINT(s) {if( (strlen(acWebDebug)+strlen(s)+50) < sizeof(acWebDebug) ) sprintf(acWebDebug, "%s#%i: %s\n", acWebDebug, u16WebMsgNo++, s);}
#else
#undef WEB_DEBUG_PRINT
#define WEB_DEBUG_PRINT(s) ;
#endif

#endif