/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, MNIndexedAppMessageSet, MNThreadViewModel, MNAppMessage;

@interface MNMessagesViewModelSource : FBValueObject <NSCopying> {

	char _showLoadingIndicator;
	char _isTypingActive;
	FBMThreadKey* _threadKey;
	MNIndexedAppMessageSet* _messages;
	MNThreadViewModel* _threadViewModel;
	MNAppMessage* _detailsExpandedMessage;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                           //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) char showLoadingIndicator;                               //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
@property (nonatomic,copy,readonly) MNIndexedAppMessageSet * messages;                  //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy,readonly) MNThreadViewModel * threadViewModel;                //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNAppMessage * detailsExpandedMessage;              //@synthesize detailsExpandedMessage=_detailsExpandedMessage - In the implementation block
@property (nonatomic,readonly) char isTypingActive;                                     //@synthesize isTypingActive=_isTypingActive - In the implementation block
-(MNThreadViewModel *)threadViewModel;
-(MNAppMessage *)detailsExpandedMessage;
-(id)initWithThreadKey:(id)arg1 showLoadingIndicator:(char)arg2 messages:(id)arg3 threadViewModel:(id)arg4 detailsExpandedMessage:(id)arg5 isTypingActive:(char)arg6 ;
-(char)isTypingActive;
-(char)showLoadingIndicator;
-(MNIndexedAppMessageSet *)messages;
-(FBMThreadKey *)threadKey;
@end

