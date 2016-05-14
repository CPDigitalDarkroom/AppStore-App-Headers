/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, MNPaymentsMessageWithLinkViewModel;

@interface MNPaymentsFullScreenIntroductionViewModel : FBValueObject <NSCopying> {

	char _shouldShowCancelButton;
	char _shouldAnimateAppearance;
	NSString* _titleText;
	NSString* _subtitleText;
	NSString* _buttonText;
	NSArray* _itemViewModels;
	MNPaymentsMessageWithLinkViewModel* _messageWithLinkViewModel;

}

@property (nonatomic,copy,readonly) NSString * titleText;                                                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleText;                                                    //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                                                      //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemViewModels;                                                   //@synthesize itemViewModels=_itemViewModels - In the implementation block
@property (nonatomic,readonly) char shouldShowCancelButton;                                                     //@synthesize shouldShowCancelButton=_shouldShowCancelButton - In the implementation block
@property (nonatomic,readonly) char shouldAnimateAppearance;                                                    //@synthesize shouldAnimateAppearance=_shouldAnimateAppearance - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsMessageWithLinkViewModel * messageWithLinkViewModel;              //@synthesize messageWithLinkViewModel=_messageWithLinkViewModel - In the implementation block
-(NSArray *)itemViewModels;
-(id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 buttonText:(id)arg3 itemViewModels:(id)arg4 shouldShowCancelButton:(char)arg5 shouldAnimateAppearance:(char)arg6 messageWithLinkViewModel:(id)arg7 ;
-(char)shouldAnimateAppearance;
-(MNPaymentsMessageWithLinkViewModel *)messageWithLinkViewModel;
-(char)shouldShowCancelButton;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(NSString *)buttonText;
@end

