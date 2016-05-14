/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadRowCTAViewModelGenerating.h>

@protocol MNAuthenticationManager;
@class FBUserSession, MNAttachmentStyleRendererManager, MNThreadRowVoIPCTAExperimentContext, NSString;

@interface MNThreadRowVoIPCTAViewModelGenerator : NSObject <FBClassProvidable, MNThreadRowCTAViewModelGenerating> {

	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	MNAttachmentStyleRendererManager* _attachmentStyleRendererManager;
	MNThreadRowVoIPCTAExperimentContext* _experimentContext;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_getExperimentContextAndLogExposure;
-(id)_rtcViewModelFromMessage:(id)arg1 ;
-(id)ctaViewModelForMessageSet:(id)arg1 threadSummary:(id)arg2 ;
@end

