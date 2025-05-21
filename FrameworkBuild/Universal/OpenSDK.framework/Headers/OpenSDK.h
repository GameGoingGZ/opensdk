#import <Foundation/Foundation.h>

//! Project version number for OpenSDK.
FOUNDATION_EXPORT double OpenSDKVersionNumber;

//! Project version string for OpenSDK.
FOUNDATION_EXPORT const unsigned char OpenSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <OpenSDK/PublicHeader.h>

#import <OpenSDK/OpenConfig.h>
#import <OpenSDK/OpenHub.h>



static NSString * const kSDKVersion = @"1.7.2";

// 0:iOS_Unity
// 1:iOS_Native
// 2:Android_Unity
// 3:Android_Native
static NSInteger const kPlatformType = 1;


//NS_ASSUME_NONNULL_END
