/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBScenePathAnnouncerListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNetworkDispatch.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBInvalidating.h>

@protocol OS_dispatch_queue;
@class FBScenePathAnnouncer, NSObject, FBHttpLowerStack, FBNetworkDispatchImpl, NSSet, NSString;

@interface FBSessionNetworker : NSObject <FBScenePathAnnouncerListener, FBNetworkDispatch, FBInvalidating> {

	FBScenePathAnnouncer* _scenePathAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;
	char _startupComplete;
	FBHttpLowerStack* _lowerStack;
	FBNetworkDispatchImpl* _dispatch;
	char _invalidated;
	NSSet* _callpathImmediatePriorityOverwrite;
	NSSet* _callpathNormalPriorityOverwrite;
	NSSet* _callpathLowPriorityOverwrite;
	NSSet* _callpathNilBypass;
	NSSet* _callpathBypass;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) char valid; 
-(void)activeScenePathDidChangeTo:(id)arg1 ;
-(void)scenePathWasInvalidated:(id)arg1 ;
-(id)initWithHttpExecutor:(id)arg1 scenePathAnnouncer:(id)arg2 internalQueue:(id)arg3 whitelistTags:(id)arg4 ;
-(id)_scenePathBypassForRequest:(id)arg1 ;
-(id)_scenePathNilBypassForRequest:(id)arg1 ;
-(int)_clientPriorityOverwriteForRequest:(id)arg1 ;
-(void)_updateConfig:(const TigonPriorityResolverPolicyConfig*)arg1 ;
-(void)_startupComplete;
-(void)_disableWhitelisting;
-(void)_setWhitelistTags:(id)arg1 ;
-(void)_activeScenePathDidChangeTo:(id)arg1 ;
-(id)initWithHttpExecutor:(id)arg1 scenePathAnnouncer:(id)arg2 internalQueue:(id)arg3 ;
-(void)configureWithResolverConfiguration:(TigonPriorityResolverPolicyConfig)arg1 ;
-(void)startupComplete;
-(void)disableWhitelisting;
-(void)setWhitelistTags:(id)arg1 ;
-(void)configureCallpathOverwritesWithImmediate:(id)arg1 normal:(id)arg2 low:(id)arg3 ;
-(void)configureCallpathNilWithBypass:(id)arg1 ;
-(void)configureCallpathWithBypass:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(id)addRequest:(id)arg1 ;
@end

