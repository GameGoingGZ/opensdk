#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

//void _initOpenSDK(void);
void _initOpenSDK(NSString *appId, NSString *appKey, NSString *appSecret, NSString *serverUrl, NSString *statUrl, NSString *channel, bool isDebug);

void _trackTiming(NSString *eventName,NSDictionary *dictJson);
void _trackImmediately(NSString *eventName,id dictJson);


void _showAd(int tag,const char * ad,const char * firstCode,const char * secondCode,const char *thirdCode,const char *resetCode,bool isShow);
void _update(int tag,const char * ad,const char * firstCode,const char * secondCode,const char *thirdCode, const char *resetCode);
void _refresh(NSInteger tag);

bool _checkReplace(NSString *eventName);
NSString * _replaceContentForURL(NSString *url,NSString * responseStr);



#ifdef __cplusplus
}
#endif


@interface OpenHub : NSObject

+(void) initStrategy;

@end
