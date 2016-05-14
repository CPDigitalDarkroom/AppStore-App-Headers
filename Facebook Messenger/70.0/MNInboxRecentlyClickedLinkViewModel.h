/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, MNPlainPhotoSource;

@interface MNInboxRecentlyClickedLinkViewModel : FBValueObject <NSCopying> {

	NSString* _linkId;
	NSString* _itemId;
	NSString* _unitId;
	NSURL* _url;
	MNPlainPhotoSource* _previewPhotoSource;

}

@property (nonatomic,copy,readonly) NSString * linkId;                                    //@synthesize linkId=_linkId - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemId;                                    //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitId;                                    //@synthesize unitId=_unitId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) MNPlainPhotoSource * previewPhotoSource;              //@synthesize previewPhotoSource=_previewPhotoSource - In the implementation block
-(NSString *)unitId;
-(NSString *)linkId;
-(id)initWithLinkId:(id)arg1 itemId:(id)arg2 unitId:(id)arg3 url:(id)arg4 previewPhotoSource:(id)arg5 ;
-(MNPlainPhotoSource *)previewPhotoSource;
-(NSString *)itemId;
-(NSURL *)url;
@end

