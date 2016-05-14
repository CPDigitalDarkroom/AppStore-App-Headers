/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, FBEventCreateInputDataCoverPhotoInfoOffset, FBEventCreateInputDataCoverPhotoInfoFocus, FBEventCreateInputDataCoverPhotoInfoZoomScale;

@interface FBEventCreateInputDataCoverPhotoInfo : FBGraphQLInput {

	NSString* _photoId;
	NSString* _photoURLString;
	NSString* _themePhotoId;
	FBEventCreateInputDataCoverPhotoInfoOffset* _offset;
	FBEventCreateInputDataCoverPhotoInfoFocus* _focus;
	FBEventCreateInputDataCoverPhotoInfoZoomScale* _zoomScale;

}

@property (nonatomic,copy) NSString * photoId;                                                     //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,copy) NSString * photoURLString;                                              //@synthesize photoURLString=_photoURLString - In the implementation block
@property (nonatomic,copy) NSString * themePhotoId;                                                //@synthesize themePhotoId=_themePhotoId - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataCoverPhotoInfoOffset * offset;                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataCoverPhotoInfoFocus * focus;                      //@synthesize focus=_focus - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataCoverPhotoInfoZoomScale * zoomScale;              //@synthesize zoomScale=_zoomScale - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)photoURLString;
-(void)setPhotoURLString:(NSString *)arg1 ;
-(NSString *)themePhotoId;
-(void)setThemePhotoId:(NSString *)arg1 ;
-(FBEventCreateInputDataCoverPhotoInfoZoomScale *)zoomScale;
-(void)setZoomScale:(FBEventCreateInputDataCoverPhotoInfoZoomScale *)arg1 ;
-(void)setOffset:(FBEventCreateInputDataCoverPhotoInfoOffset *)arg1 ;
-(FBEventCreateInputDataCoverPhotoInfoOffset *)offset;
-(FBEventCreateInputDataCoverPhotoInfoFocus *)focus;
-(void)setFocus:(FBEventCreateInputDataCoverPhotoInfoFocus *)arg1 ;
-(NSString *)photoId;
-(void)setPhotoId:(NSString *)arg1 ;
@end

