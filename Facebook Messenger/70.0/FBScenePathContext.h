/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBScenePathContextDelegate.h>

@protocol FBScenePathContextDelegate, FBScenePathHolding;
@interface FBScenePathContext : NSObject <FBScenePathContextDelegate> {

	id<FBScenePathContextDelegate> _delegate;
	id<FBScenePathHolding> _rootView;
	id<FBScenePathHolding> _activeView;

}
-(id)registerView:(id)arg1 ;
-(void)updateActiveView:(id)arg1 ;
-(id)initWithRootView:(id)arg1 delegate:(id)arg2 ;
-(float)distanceBetweenChildPath:(unsigned)arg1 andSibling:(unsigned)arg2 ;
-(void)scenePathContextForView:(id)arg1 didInvalidatePath:(id)arg2 ;
-(void)scenePathContextForView:(id)arg1 didUpdateActivePathTo:(id)arg2 ;
-(id)registerView:(id)arg1 withTag:(id)arg2 ;
-(void)invalidateView:(id)arg1 ;
@end

