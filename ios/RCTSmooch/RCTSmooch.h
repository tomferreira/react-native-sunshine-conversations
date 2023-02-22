// SmoochManager.h

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#import "RCTUtils.h"
#else
#import <React/RCTBridgeModule.h>
#import <React/RCTUtils.h>
#endif

#import <React/RCTEventEmitter.h>
#import <Foundation/Foundation.h>
#import <Smooch/SKTConversation.h>

@interface SmoochManager : RCTEventEmitter <RCTBridgeModule>
@end

@interface MyConversationDelegate : NSObject <SKTConversationDelegate>
{
}
@end