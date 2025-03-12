
#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

void _initOpenSDK(void);
void _initOpenSDKWithSetting(NSString *setting);
void _setTheme(NSString *themeStr);



void _track(NSString *eventName, ...);
//void _trackNow(NSString *eventName,NSString *json);
void _trackImmediately(NSString *eventName,NSString *json);


void _showAd(int tag,const char * ad,const char * firstCode,const char * secondCode,const char *thirdCode,const char *resetCode,bool isShow);
void _update(int tag,const char * ad,const char * firstCode,const char * secondCode,const char *thirdCode, const char *resetCode);

bool _cutImage(void);
bool _checkInsert(NSString *eventName);
bool _checkReplace(NSString *eventName);
NSString * _replaceContentForURL(NSString *url,NSString * responseStr);


void _refresh(NSInteger tag);



#ifdef __cplusplus
}






#endif


@interface HiMoHelper : NSObject

@end
