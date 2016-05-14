/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@interface FBPulseEntryPointExperimentContext : FBExperimentContext {

	char _enableRelatedLinksHScrolling;
	char _showPulseFeedPivot;
	char _showPulseFeedAttachmentToast;
	char _enableLinksTab;
	char _linksTabUseEmbedsEndpoint;
	char _pulseModuleShowThumbnail;
	char _pulseModuleShowLiveShareCount;
	char _pulseModuleShowInlineShareCount;
	unsigned _requiredShareCountForFeedPivot;
	unsigned _requiredShareCountForFeedPivotAfterLike;
	unsigned _attachmentToastDelayInMilliSecond;
	unsigned _linksTabIndex;
	unsigned _linksTabHeaderLinkRequiredShareCount;

}

@property (nonatomic,readonly) unsigned requiredShareCountForFeedPivot;                       //@synthesize requiredShareCountForFeedPivot=_requiredShareCountForFeedPivot - In the implementation block
@property (nonatomic,readonly) unsigned requiredShareCountForFeedPivotAfterLike;              //@synthesize requiredShareCountForFeedPivotAfterLike=_requiredShareCountForFeedPivotAfterLike - In the implementation block
@property (nonatomic,readonly) unsigned attachmentToastDelayInMilliSecond;                    //@synthesize attachmentToastDelayInMilliSecond=_attachmentToastDelayInMilliSecond - In the implementation block
@property (nonatomic,readonly) char enableRelatedLinksHScrolling;                             //@synthesize enableRelatedLinksHScrolling=_enableRelatedLinksHScrolling - In the implementation block
@property (nonatomic,readonly) char showPulseFeedPivot;                                       //@synthesize showPulseFeedPivot=_showPulseFeedPivot - In the implementation block
@property (nonatomic,readonly) char showPulseFeedAttachmentToast;                             //@synthesize showPulseFeedAttachmentToast=_showPulseFeedAttachmentToast - In the implementation block
@property (nonatomic,readonly) char enableLinksTab;                                           //@synthesize enableLinksTab=_enableLinksTab - In the implementation block
@property (nonatomic,readonly) unsigned linksTabIndex;                                        //@synthesize linksTabIndex=_linksTabIndex - In the implementation block
@property (nonatomic,readonly) char linksTabUseEmbedsEndpoint;                                //@synthesize linksTabUseEmbedsEndpoint=_linksTabUseEmbedsEndpoint - In the implementation block
@property (nonatomic,readonly) unsigned linksTabHeaderLinkRequiredShareCount;                 //@synthesize linksTabHeaderLinkRequiredShareCount=_linksTabHeaderLinkRequiredShareCount - In the implementation block
@property (nonatomic,readonly) char pulseModuleShowThumbnail;                                 //@synthesize pulseModuleShowThumbnail=_pulseModuleShowThumbnail - In the implementation block
@property (nonatomic,readonly) char pulseModuleShowLiveShareCount;                            //@synthesize pulseModuleShowLiveShareCount=_pulseModuleShowLiveShareCount - In the implementation block
@property (nonatomic,readonly) char pulseModuleShowInlineShareCount;                          //@synthesize pulseModuleShowInlineShareCount=_pulseModuleShowInlineShareCount - In the implementation block
+(char)allowUserInterfaceIdiom:(int)arg1 ;
+(id)universeName;
+(id)parameterConfigurations;
-(unsigned)requiredShareCountForFeedPivot;
-(unsigned)requiredShareCountForFeedPivotAfterLike;
-(unsigned)attachmentToastDelayInMilliSecond;
-(char)enableRelatedLinksHScrolling;
-(char)showPulseFeedPivot;
-(char)showPulseFeedAttachmentToast;
-(char)enableLinksTab;
-(unsigned)linksTabIndex;
-(char)linksTabUseEmbedsEndpoint;
-(unsigned)linksTabHeaderLinkRequiredShareCount;
-(char)pulseModuleShowThumbnail;
-(char)pulseModuleShowLiveShareCount;
-(char)pulseModuleShowInlineShareCount;
@end

