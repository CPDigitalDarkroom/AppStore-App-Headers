/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSTextCheckingResult, UIView;

@interface FBRichTextComponentForceTouchContext : NSObject {

	NSTextCheckingResult* _result;
	UIView* _richTextView;
	CGRect _rectForTextCheckingResult;

}

@property (nonatomic,readonly) NSTextCheckingResult * result;                 //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) UIView * richTextView;                         //@synthesize richTextView=_richTextView - In the implementation block
@property (nonatomic,readonly) CGRect rectForTextCheckingResult;              //@synthesize rectForTextCheckingResult=_rectForTextCheckingResult - In the implementation block
-(UIView *)richTextView;
-(id)initWithResult:(id)arg1 richTextView:(id)arg2 rectForTextCheckingResult:(CGRect)arg3 ;
-(CGRect)rectForTextCheckingResult;
-(NSTextCheckingResult *)result;
@end

