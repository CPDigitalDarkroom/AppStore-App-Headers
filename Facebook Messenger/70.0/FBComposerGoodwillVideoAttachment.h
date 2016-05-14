/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface FBComposerGoodwillVideoAttachment : FBValueObject <NSCopying, NSCoding> {

	NSString* _campaignType;
	NSString* _coverPhotoURI;
	float _coverPhotoWidth;
	float _coverPhotoHeight;
	NSArray* _photoAttachments;
	NSString* _sharePayload;

}

@property (nonatomic,copy,readonly) NSString * campaignType;                 //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverPhotoURI;                //@synthesize coverPhotoURI=_coverPhotoURI - In the implementation block
@property (nonatomic,readonly) float coverPhotoWidth;                        //@synthesize coverPhotoWidth=_coverPhotoWidth - In the implementation block
@property (nonatomic,readonly) float coverPhotoHeight;                       //@synthesize coverPhotoHeight=_coverPhotoHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photoAttachments;              //@synthesize photoAttachments=_photoAttachments - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharePayload;                 //@synthesize sharePayload=_sharePayload - In the implementation block
-(id)initWithCampaignType:(id)arg1 coverPhotoURI:(id)arg2 coverPhotoWidth:(float)arg3 coverPhotoHeight:(float)arg4 photoAttachments:(id)arg5 sharePayload:(id)arg6 ;
-(NSString *)campaignType;
-(NSString *)coverPhotoURI;
-(float)coverPhotoWidth;
-(float)coverPhotoHeight;
-(NSArray *)photoAttachments;
-(NSString *)sharePayload;
@end

