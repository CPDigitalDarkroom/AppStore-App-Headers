/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNPaymentsThemeCardViewModel : FBValueObject <NSCopying> {

	NSString* _amountText;
	NSString* _memoText;
	NSURL* _themeImageURL;

}

@property (nonatomic,copy,readonly) NSString * amountText;              //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy,readonly) NSString * memoText;                //@synthesize memoText=_memoText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * themeImageURL;              //@synthesize themeImageURL=_themeImageURL - In the implementation block
-(NSString *)memoText;
-(id)initWithAmountText:(id)arg1 memoText:(id)arg2 themeImageURL:(id)arg3 ;
-(NSURL *)themeImageURL;
-(NSString *)amountText;
@end

