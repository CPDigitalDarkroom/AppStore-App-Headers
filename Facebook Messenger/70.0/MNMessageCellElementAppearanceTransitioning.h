/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNCollectionViewElementAppearanceTransitioning.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, NSString;

@interface MNMessageCellElementAppearanceTransitioning : FBValueObject <MNCollectionViewElementAppearanceTransitioning, NSCopying> {

	char _isLastReceived;
	char _isTyping;
	FBMMessageKey* _messageKey;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;              //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,readonly) char isLastReceived;                          //@synthesize isLastReceived=_isLastReceived - In the implementation block
@property (nonatomic,readonly) char isTyping;                                //@synthesize isTyping=_isTyping - In the implementation block
+(id)appearanceTransitioningForTyping;
+(id)appearanceTransitioningForMessage:(id)arg1 isLastReceived:(char)arg2 ;
-(FBMMessageKey *)messageKey;
-(char)isTyping;
-(char)canAppearFrom:(id)arg1 ;
-(char)canDisappearTo:(id)arg1 ;
-(id)initWithMessageKey:(id)arg1 isLastReceived:(char)arg2 isTyping:(char)arg3 ;
-(char)isLastReceived;
@end

