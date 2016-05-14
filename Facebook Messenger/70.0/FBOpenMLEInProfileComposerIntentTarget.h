/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBIntentTarget.h>

@protocol FBComposerFlowDelegate, FBNavigationCoordinator;
@interface FBOpenMLEInProfileComposerIntentTarget : FBIntentTarget {

	id<FBComposerFlowDelegate> _composerFlowDelegate;
	id<FBNavigationCoordinator> _navigationCoordinatorToPresentComposer;

}
+(id)openMLEComposerWithNavigationCoordinatorToPresentComposer:(id)arg1 composerFlowDelegate:(id)arg2 ;
-(id)fallbackURLs;
-(id)initWithNavigationCoordinatorToPresentComposer:(id)arg1 composerFlowDelegate:(id)arg2 ;
-(id)navigationCoordinatorToPresentComposer;
-(id)composerFlowDelegate;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

