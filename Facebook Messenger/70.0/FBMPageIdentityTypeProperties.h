/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBMPageSubscriptionInfo;

@interface FBMPageIdentityTypeProperties : FBValueObject <NSCopying> {

	char _isBot;
	char _promotionalMessagesAreBlockedByViewer;
	char _isCommerceNuxEnabled;
	int _subIdentityType;
	NSArray* _callToActions;
	FBMPageSubscriptionInfo* _pageSubscriptionInfo;

}

@property (nonatomic,readonly) char isBot;                                                       //@synthesize isBot=_isBot - In the implementation block
@property (nonatomic,readonly) int subIdentityType;                                              //@synthesize subIdentityType=_subIdentityType - In the implementation block
@property (nonatomic,readonly) char promotionalMessagesAreBlockedByViewer;                       //@synthesize promotionalMessagesAreBlockedByViewer=_promotionalMessagesAreBlockedByViewer - In the implementation block
@property (nonatomic,readonly) char isCommerceNuxEnabled;                                        //@synthesize isCommerceNuxEnabled=_isCommerceNuxEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * callToActions;                                     //@synthesize callToActions=_callToActions - In the implementation block
@property (nonatomic,copy,readonly) FBMPageSubscriptionInfo * pageSubscriptionInfo;              //@synthesize pageSubscriptionInfo=_pageSubscriptionInfo - In the implementation block
-(int)subIdentityType;
-(NSArray *)callToActions;
-(char)isCommerceNuxEnabled;
-(id)initWithIsBot:(char)arg1 subIdentityType:(int)arg2 promotionalMessagesAreBlockedByViewer:(char)arg3 isCommerceNuxEnabled:(char)arg4 callToActions:(id)arg5 pageSubscriptionInfo:(id)arg6 ;
-(char)promotionalMessagesAreBlockedByViewer;
-(FBMPageSubscriptionInfo *)pageSubscriptionInfo;
-(char)isBot;
@end

