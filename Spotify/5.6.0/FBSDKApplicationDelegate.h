/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSDKURLOpening;
@class FBSDKBridgeAPIRequest;

@interface FBSDKApplicationDelegate : NSObject {

	FBSDKBridgeAPIRequest* _pendingRequest;
	/*^block*/id _pendingRequestCompletionBlock;
	id<FBSDKURLOpening> _pendingURLOpen;
	char _expectingResign;
	char _active;

}

@property (getter=isActive,nonatomic,readonly) char active;              //@synthesize active=_active - In the implementation block
+(void)initializeWithLaunchData:(id)arg1 ;
+(id)sharedInstance;
+(void)load;
-(char)_handleBridgeAPIResponseURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)_logIfAppLinkEvent:(id)arg1 ;
-(void)openURL:(id)arg1 sender:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)openBridgeAPIRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(id)_init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
@end

