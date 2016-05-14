/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSavePhotoControlling.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNSecureImageRequesting, MNPhotoSaving;
@class MNSavePhotoListenerAnnouncer, MNPhotoImageRequester, NSString;

@interface MNSavePhotoController : NSObject <MNSavePhotoControlling, FBClassProvidable> {

	MNSavePhotoListenerAnnouncer* _announcer;
	MNPhotoImageRequester* _imageRequester;
	id<MNSecureImageRequesting> _secureImageRequester;
	id<MNPhotoSaving> _photoWriter;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)savePhotoViewModel:(id)arg1 ;
-(void)photoDidSave;
-(void)photoDidSaveTemporarilyWithPath:(id)arg1 ;
-(void)photoDidFailToSaveWithError:(id)arg1 ;
-(id)initWithImageRequester:(id)arg1 secureImageRequester:(id)arg2 photoWriter:(id)arg3 ;
-(void)_savePhotoFromPlainPhotoSource:(id)arg1 ;
-(void)_savePhotoFromSecurePhotoSource:(id)arg1 ;
-(void)_savePhotoImage:(id)arg1 ;
-(void)_saveStaticImage:(id)arg1 ;
-(void)_saveAnimatedImage:(id)arg1 ;
-(void)_saveAnimatedImageData:(id)arg1 ;
-(void)_saveAnimatedWebP:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

