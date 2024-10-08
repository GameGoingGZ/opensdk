
#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

void _track(NSString *eventName, ...);
void _trackImmediately(NSString *eventName,NSString *json);
void _update(int tag,const char * ad,const char * firstCode,const char * secondCode,const char *thirdCode);
void _showAd(int tag,const char * ad,const char * firstCode,const char * secondCode,const char *thirdCode,bool isShow);

void _initOpenSDKWithSetting(NSString *setting);

#ifdef __cplusplus
}






#endif


@interface HiMoHelper : NSObject

@end
