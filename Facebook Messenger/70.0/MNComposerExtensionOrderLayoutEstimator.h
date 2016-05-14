/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerLayoutStrategy;
@class MNComposerLayoutConfiguration, FBUserSession, MNComposerExtensibleExperimentContext, MNComposerSendButtonLocationExperimentContext;

@interface MNComposerExtensionOrderLayoutEstimator : NSObject {

	id<MNComposerLayoutStrategy> _layoutStrategy;
	MNComposerLayoutConfiguration* _layoutConfiguration;
	FBUserSession* _session;
	MNComposerExtensibleExperimentContext* _composerExtensibleExperimentContext;
	MNComposerSendButtonLocationExperimentContext* _composerSendButtonExperimentContext;

}
-(int)_actionViewLocation;
-(void)_initComposerExtensibleExperimentContextIfNecessary;
-(void)_initComposerSendButtonExperimentContextIfNecessary;
-(unsigned)availableTabSlots;
-(id)initWithSession:(id)arg1 ;
@end

