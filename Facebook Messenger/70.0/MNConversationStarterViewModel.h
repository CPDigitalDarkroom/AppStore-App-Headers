/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, MNConversationStarterInfo, MNConversationStarterPresence;

@interface MNConversationStarterViewModel : FBValueObject <NSCopying> {

	NSString* _conversationStarterId;
	NSString* _title;
	NSString* _descriptionText;
	NSURL* _descriptionIconUrl;
	unsigned _badgeType;
	MNConversationStarterInfo* _info;
	NSString* _loggingData;
	MNConversationStarterPresence* _presence;

}

@property (nonatomic,copy,readonly) NSString * conversationStarterId;                      //@synthesize conversationStarterId=_conversationStarterId - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                            //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * descriptionIconUrl;                            //@synthesize descriptionIconUrl=_descriptionIconUrl - In the implementation block
@property (nonatomic,readonly) unsigned badgeType;                                         //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,copy,readonly) MNConversationStarterInfo * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingData;                                //@synthesize loggingData=_loggingData - In the implementation block
@property (nonatomic,copy,readonly) MNConversationStarterPresence * presence;              //@synthesize presence=_presence - In the implementation block
-(NSURL *)descriptionIconUrl;
-(NSString *)conversationStarterId;
-(NSString *)loggingData;
-(MNConversationStarterPresence *)presence;
-(id)initWithConversationStarterId:(id)arg1 title:(id)arg2 descriptionText:(id)arg3 descriptionIconUrl:(id)arg4 badgeType:(unsigned)arg5 info:(id)arg6 loggingData:(id)arg7 presence:(id)arg8 ;
-(unsigned)badgeType;
-(NSString *)title;
-(MNConversationStarterInfo *)info;
-(NSString *)descriptionText;
@end

