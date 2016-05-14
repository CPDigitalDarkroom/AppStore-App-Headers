/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, NSData;

@interface MNPhotoMetadata : FBValueObject <NSCopying, NSCoding> {

	char _renderAsSticker;
	float _width;
	float _height;
	NSString* _creatorId;
	NSDate* _createdTime;
	NSString* _assetID;
	NSData* _miniPreview;

}

@property (nonatomic,readonly) float width;                            //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) float height;                           //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSString * creatorId;              //@synthesize creatorId=_creatorId - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdTime;              //@synthesize createdTime=_createdTime - In the implementation block
@property (nonatomic,readonly) char renderAsSticker;                   //@synthesize renderAsSticker=_renderAsSticker - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSData * miniPreview;              //@synthesize miniPreview=_miniPreview - In the implementation block
-(NSString *)assetID;
-(char)renderAsSticker;
-(NSDate *)createdTime;
-(NSData *)miniPreview;
-(id)initWithWidth:(float)arg1 height:(float)arg2 creatorId:(id)arg3 createdTime:(id)arg4 renderAsSticker:(char)arg5 assetID:(id)arg6 miniPreview:(id)arg7 ;
-(NSString *)creatorId;
-(float)width;
-(float)height;
@end

