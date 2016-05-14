/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMediaPreviewActionSheetConfiguration : FBValueObject <NSCopying> {

	char _allowEditing;
	NSString* _cancelButtonTitle;

}

@property (nonatomic,readonly) char allowEditing;                              //@synthesize allowEditing=_allowEditing - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(id)initWithAllowEditing:(char)arg1 cancelButtonTitle:(id)arg2 ;
-(char)allowEditing;
-(NSString *)cancelButtonTitle;
@end

