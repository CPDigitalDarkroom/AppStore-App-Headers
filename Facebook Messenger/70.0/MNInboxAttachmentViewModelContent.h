/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNPlainPhotoSource;

@interface MNInboxAttachmentViewModelContent : NSObject <NSCopying> {

	unsigned _subtype;
	float _previewOnly_previewAspectRatio;
	NSString* _previewWithDetail_title;
	NSString* _previewWithDetail_attachmentDescription;
	MNPlainPhotoSource* _previewWithDetail_iconPhotoSource;

}
+(id)previewWithDetailWithTitle:(id)arg1 attachmentDescription:(id)arg2 iconPhotoSource:(id)arg3 ;
+(id)previewOnlyWithPreviewAspectRatio:(float)arg1 ;
-(void)matchPreviewOnly:(/*^block*/id)arg1 previewWithDetail:(/*^block*/id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

